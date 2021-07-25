# Electric circuit of 5 motors.
Design and program electric circuit to control 5 motors and makes it all at 90 degrees using tinkercad.


<h3> First we need the following hardware : </h3>

* Servo motors.  
* Battary of maximum 5 volt.  
* Arduino Board.  
* Wires.  
* Breadboard.   
* Potentiometer.



**Step1 :** Battary connect to the breadboard at positive and nigative. 

**Step2 :** The Arduino GND connect to the GND input of breadboard.  

**Step3 :** Each Servo has three ports the **Ground port** which has brown color we will connect it to the **GND port** of the breadboard, the **Power port** which has red color we will connect it to the **positive port**, and the **Signal port** which has orange color we will connect it to the **Digital PWM** in the Arduino board. I connected the signals port of each 5 motors to 3,5, 6,9,10 digital ports. 

**Step4 :** Repeat step3 for all motors.  

**Step 5:** Put the Potentiometers on the board by connects the first wire in the positive port, another wire connects in the minus port and the middle connector on the **Analog port**

**Step6 :** Write the code that makes all motors at 90 degrees, which the source code is attached in this repository.  

 <h3> The Final Output will be like this : </h3>


https://user-images.githubusercontent.com/43522153/126908812-dc778ec4-6b84-4203-91ee-eb8534aca09a.mov

