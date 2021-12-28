/* Mouse mover: adapted from the following example to control servo motors.
Servo motor with Arduino example code. 
Position and sweep. More info: https://www.makerguides.com/ */

// Include the servo library:
#include <Servo.h>

// Create a new servo object:
Servo myservo;

// Define the servo pin:
#define servoPin 9

// Define the max angle to shift through
#define maxAngle 10

// Define the gentleness with which to move the motor, higher == gentler
#define gentleness 100

//Define delay between movements
#define delayTime 10000

// Create a variable to store the servo position:
int angle = 0;

void setup() {
  // Attach the Servo variable to a pin:
  myservo.attach(servoPin);
}

void loop() {
  int i;
  // foward sweep
  for (i =0; i <= maxAngle; i++) { 
    myservo.write(i);
    delay(gentleness);
  }
  // wait
  delay(delayTime);

  // backward sweep
  for (i =maxAngle; i <=0  ; i--) { 
    myservo.write(i);
    delay(gentleness);
  }
  delay(delayTime);
}
