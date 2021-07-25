#include <Servo.h>

//**** servo 1 settings
Servo servo1; 
const int servo1PotPin =A0;
const int servo1Pin = 3;// Must use PWM enabled pin
int servo1Value;
//**** servo 1 settings END

//**** servo 2 settings
Servo servo2; 
const int servo2PotPin =A1;
const int servo2Pin = 5;// Must use PWM enabled pin
int servo2Value;
//**** servo 1 settings END

Servo servo3; 
const int servo3PotPin =A2;
const int servo3Pin = 6;// Must use PWM enabled pin
int servo3Value;

Servo servo4; 
const int servo4PotPin =A3;
const int servo4Pin = 9;// Must use PWM enabled pin
int servo4Value;


Servo servo5; 
const int servo5PotPin =A4;
const int servo5Pin = 10;// Must use PWM enabled pin
int servo5Value;


void setup() {
  //Robojax.com multiple servo
  servo1.attach(servo1Pin); 
  servo2.attach(servo2Pin); 
  servo3.attach(servo3Pin);  
  servo4.attach(servo4Pin);  
  servo5.attach(servo5Pin);  
}


void loop() {
  //Robojax.com multiple servo
  servo1Value = analogRead(servo1PotPin); 
  servo1Value = map(servo1Value, 0, 1023, 0, 90);
  servo1.write(servo1Value);

  servo2Value = analogRead(servo2PotPin); 
  servo2Value = map(servo2Value, 0, 1023, 0, 90);
  servo2.write(servo2Value);
  
  
  servo3Value = analogRead(servo3PotPin); 
  servo3Value = map(servo3Value, 0, 1023, 0, 90);
  servo3.write(servo3Value);
  
  servo4Value = analogRead(servo4PotPin); 
  servo4Value = map(servo4Value, 0, 1023, 0, 90);
  servo4.write(servo4Value);
  
  servo5Value = analogRead(servo5PotPin); 
  servo5Value = map(servo5Value, 0, 1023, 0, 90);
  servo5.write(servo5Value);
  
  delay(5);
 //Robojax.com multiple servo  
}// loop end