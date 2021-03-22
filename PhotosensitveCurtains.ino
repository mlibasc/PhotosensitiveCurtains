// Resistors needed for solar panel
// 0.5 and 0.5k or 1k and 1k across each side of the solar panel
// read the voltage across one of the resistors 
int lightPin = 3;
void setup() {
  Serial.begin(9600);
  pinMode(lightPin, INPUT);

}
void loop() {
  int sensorValue = analogRead(A0);
  Serial.print("Sensor Value: " +  sensorValue);
}
