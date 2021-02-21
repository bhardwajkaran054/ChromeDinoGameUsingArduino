#include <Servo.h>


int IRSensor = 2; // connect ir sensor to arduino pin 2
int LED = 13; // conect Led to arduino pin 13

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position


void setup() 
{

  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  pinMode (IRSensor, INPUT); // sensor pin INPUT
  pinMode (LED, OUTPUT); // Led pin OUTPUT
}

void loop()
{            
  int statusSensor = digitalRead (IRSensor);
  
  if (statusSensor == 1)
  {
    digitalWrite(LED, LOW); // LED LOW

  }
  
  else
  {
    digitalWrite(LED, HIGH); // LED High
    
    //for (pos = 180; pos >= 132; pos -= 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    //myservo.write(pos);              // tell servo to go to position in variable 'pos'
    //delay(6);                       // waits 6ms for the servo to reach the position
    //}
    myservo.write(135); //return hand to 138
    delay(6);                      
    myservo.write(180); //return hand to 180
  }
  
}
