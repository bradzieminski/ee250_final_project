// These constants won't change. They're used to give names to the pins used:
const int analogInPin1 = A0;  // Analog input pin that the potentiometer is attached to
const int analogInPin2 = A1;  // Analog input pin that the potentiometer is attached to
const int analogInPin3 = A2;  // Analog input pin that the potentiometer is attached to
const int analogInPin4 = A3;  // Analog input pin that the potentiometer is attached to

void setup() 
{
  
  Serial.begin(19200);

}

void loop() 
{
 
  int temp1 = analogRead(analogInPin1);
  int temp2 = analogRead(analogInPin2);
  int temp3 = analogRead(analogInPin3);
  int temp4 = analogRead(analogInPin4);

  Serial.println (temp2);
  delay(10);
  /*Serial.println (temp1);
  delay(10);
  Serial.println (temp1);
  delay(10);
  Serial.println (temp1);
  delay(10);*/

}
