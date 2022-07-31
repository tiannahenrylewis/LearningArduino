//Include Servo Library
#include <Servo.h>

//Create a Servo object
Servo servo;
//Variable to hold the servo'ss position
int servoPosition = 0;

//Assign buttons
int topButton = 8;
int midButton = 7;
int botButton = 4;

int topButtonValue;
int midButtonValue;
int botButtonValue;

void setup() {
  //Connect servo
  servo.attach(9);

  //Reset the servo position to 0
  servo.write(servoPosition);

  //Set pinMode of buttons
  pinMode(topButton, INPUT);
  pinMode(midButton, INPUT);
  pinMode(botButton, INPUT);
}

void loop() {
  topButtonValue = digitalRead(topButton);
  midButtonValue = digitalRead(midButton);
  botButtonValue = digitalRead(botButton);

  if (topButtonValue == HIGH) {
    servoPosition = 0;
  } else if (midButtonValue == HIGH) {
    servoPosition = 90;
  } else if (botButtonValue == HIGH) {
    servoPosition = 180;
  }

  servo.write(servoPosition);
}
