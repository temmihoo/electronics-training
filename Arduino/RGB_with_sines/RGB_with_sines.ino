/*
 RGB_with_sines

 (c) ELL-i open source cooperative, 2014
 Licensed under the MIT license. 
*/

int ledR = 3;           // the pin that the LED is attached to
int ledG = 5;           // the pin that the LED is attached to
int ledB = 6;           // the pin that the LED is attached to

// the setup routine runs once when you press reset:
void setup()  { 
  // declare pins to be outputs:
  pinMode(ledR, OUTPUT);
  pinMode(ledG, OUTPUT);
  pinMode(ledB, OUTPUT);
} 

// the loop routine runs over and over again forever:
void loop()  { 
  for (float i=0; i < 6.28; i+=0.1){
    analogWrite(ledR, (int)(128.0*(1.0+sin(i))));
    delay(10);
    analogWrite(ledG, (int)(128.0*(1.0+sin(i-6.28/3.0))));
    delay(10);
    analogWrite(ledB, (int)(128.0*(1.0+sin(i-2*6.28/3.0))));
    delay(10);
  }
}

