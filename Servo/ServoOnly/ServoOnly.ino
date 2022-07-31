//Include Servo Library
#include <Servo.h>

//Create a Servo object
Servo servo;
//Variable to hold the servo'ss position
int servoPosition = 0;

void setup() {
  //Connect servo
  servo.attach(9);

  //Reset the servo position to 0
  servo.write(servoPosition);
}

void loop() {
  //Check the position of the servo
  if (servoPosition == 180) {
    servoPosition = 0;
  } else {
    servoPosition = servoPosition + 10;
  }

  //Move the servo to the new position
  servo.write(servoPosition);

  //Time delay
  delay(500);
}

 

 
