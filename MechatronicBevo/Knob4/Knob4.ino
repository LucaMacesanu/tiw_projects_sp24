/*
 Controlling a servo position using a potentiometer (variable resistor)
 by Michal Rinott <http://people.interaction-ivrea.it/m.rinott>

 modified on 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Knob
*/

#include <Servo.h>

Servo myservo3;  // create servo object to control a servo
Servo myservo5;  // create servo object to control a servo
Servo myservo6;  // create servo object to control a servo
Servo myservo9;  // create servo object to control a servo

int potpin = 0;  // analog pin used to connect the potentiometer
int val;    // variable to read the value from the analog pin

void setup() {
  myservo3.attach(3);
  myservo5.attach(5);
  myservo6.attach(6);
  myservo9.attach(9);// attaches the servo on pin 9 to the servo object
}

void loop() {
//  val = analogRead(potpin);            // reads the value of the potentiometer (value between 0 and 1023)
//  val = map(val, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  myservo3.write(map(analogRead(0), 0, 1023, 0, 180)); 
  myservo5.write(map(analogRead(1), 0, 1023, 0, 180)); 
  myservo6.write(map(analogRead(2), 0, 1023, 0, 180)); 
  myservo9.write(map(analogRead(3), 0, 1023, 0, 180)); // sets the servo position according to the scaled value
  delay(15);                           // waits for the servo to get there
}
