#include <Servo.h>

int LED = 13; // conect Led to arduino pin 13
const int ldrPin = A0;

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position


void setup() 
{
  Serial.begin(9600);
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  pinMode(ldrPin, INPUT);
  pinMode (LED, OUTPUT); // Led pin OUTPUT
}

void loop()
{            
  int ldrStatus = analogRead(ldrPin);
  
  if (ldrStatus > 14 && ldrStatus < 32)
  {
    digitalWrite(LED, HIGH); // LED LOW
    Serial.println(ldrStatus);
     myservo.write(135); //return hand to 138
    delay(6);                      
    myservo.write(150); //return hand to 180
  }
  
  else
  {
    digitalWrite(LED, LOW); // LED High
 
   
  }
  
}
