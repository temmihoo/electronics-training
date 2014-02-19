/*
 FadeControl
 
 This example shows how to fade an LED on pin 9
 using the analogWrite() function and how to read
 a voltage on A0.
 
 This example code is in the public domain.
 */

int led = 9;           // the pin that the LED is attached to
int brightness = 0;    // how bright the LED is
int sensorPin = A0;    // which analog input to read

// the setup routine runs once when you press reset:
void setup()  { 
  // declare pin 9 to be an output:
  pinMode(led, OUTPUT);
} 

// the loop routine runs over and over again forever:
void loop()  { 
  // set the brightness of pin 9:

  brightness = analogRead(sensorPin) / 4;
  analogWrite(led, brightness);    

}

