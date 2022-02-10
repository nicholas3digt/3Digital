#include <wire.h>
const byte SENSOR = A0;
const byte LED = 13;
sensorValue = digitalRead(SENSOR);

void setup(){
  Serial.begin(9600);
  pinMode(SENSOR, INPUT);
  pinMode(LED, OUTPUT);
}

void loop(){
  int cutOff = 512;
  Light(sensorValue);
}

void Light(int cutOff){
  if digitalRead(SENSOR > cutOff){
    digitalRead(LED, HIGH);
    Serial.println(LED, 1);
  }else{
    digitalRead(LED, LOW);
    Serial.println(LED, 0);
  }
}