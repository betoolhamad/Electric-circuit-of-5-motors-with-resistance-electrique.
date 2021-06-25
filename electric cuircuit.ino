// C++ code


#include <Servo.h> //Servo library

//Define the servos which is 5 motors.
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;

int servoPos = 0; //servo positon wich start from 0 (initial position).
void setup() {
  
servo1.attach(3);
servo2.attach(5);
servo3.attach(6);
servo4.attach(9);
servo5.attach(10);
} 

void loop() {
  for (servoPos =0; servoPos <= 90; servoPos++){ //loop to start the motor from 0 to 90
    servo1.write(servoPos);
    servo2.write(servoPos);
    servo3.write(servoPos);
    servo4.write(servoPos);
    servo5.write(servoPos);
    delay(50);
  }
  
  
  for (servoPos =90; servoPos >= 0; servoPos--){ //loop to back the motor from 90 to 0
    servo1.write(servoPos);
    servo2.write(servoPos);
    servo3.write(servoPos);
    servo4.write(servoPos);
    servo5.write(servoPos);
    delay(50);
  }
  
}
