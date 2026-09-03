int sensor_pin = A0;
int brightness;

void setup() {
  Serial.begin(9600);
  Serial.println("Timestamp,brightness");
}

void loop() {
  brightness = analogRead(sensor_pin);
  Serial.print(millis());
  Serial.print(",");
  Serial.println(brightness);
  delay(200);
}
