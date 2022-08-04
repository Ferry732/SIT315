#define SensorPin A0 
float sensorValue = 0; 
void setup() { 
 Serial.begin(9600); 
 pinMode(LED_BUILTIN, OUTPUT);
} 
void loop() { 
 for (int i = 0; i <= 100; i++) 
 { 
   sensorValue = sensorValue + analogRead(SensorPin); 
   delay(1); 
 } 
 sensorValue = sensorValue/100.0; 
 Serial.println(sensorValue); 
 
  if (sensorValue < 50.0)
  {
    digitalWrite(LED_BUILTIN, HIGH);
  }
  
  else
  {
    digitalWrite(LED_BUILTIN, LOW);
  }
  
 delay(30); 
} 
