/*
 followTone
 
 Plays a pitch that changes based on a changing analog input
 
 circuit:
 * 8-ohm speaker through a 100 ohm resistor on digital pin 9
 * potentiometer middle in input A0
 * potentiometer ends in ground and 5V
 
 */


void setup() {

}

void loop() {
  // read the sensor:
  int sensorReading = analogRead(A0);

  // map the analog input range (in this case, 0 - 1024 from the potentiometer)
  // to the output pitch range (400 - 1500Hz)
  // change the minimum and maximum input numbers below
  // depending on the range your sensor's giving:
  int thisPitch = map(sensorReading, 0, 1024, 400, 1500);

  // play the pitch:
  tone(9, thisPitch, 50);
  delay(100);        // delay in between reads for stability
}






