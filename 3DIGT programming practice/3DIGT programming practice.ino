 //setting up constants//
 const byte LED = 13;
 const byte SENSOR = A0;

 int cutOff = 512;
//declaring inputs and outputs//
void setup() {
 pinMode(LED, OUTPUT);
 pinMode(SENSOR, INPUT);
 
}
//if statement which turns the LED on once the sensor reaches the approx half way point of its values or higher and keeps it off if not//

void loop() {
   int sensorValue = digitalRead(SENSOR);
  Light(sensorValue);
}

void Light(int sensor){
  if (sensor > cutOff){
    digitalWrite(LED, HIGH);
}else{
  digitalWrite(LED, LOW);
}

}

