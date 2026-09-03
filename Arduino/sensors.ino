int photometer_pin = A0;
int brightness;

#include<DHT.h>
#include <Servo.h>

#define DHTPIN 2     // Digital pin
#define DHTTYPE DHT22
#define SERVOPIN 9

DHT dht(DHTPIN, DHTTYPE);
Servo srv;

void setup() {
  Serial.begin(9600);
  Serial.println("Timestamp,Brightness,Temperature (°C),Humidity,Status");
  dht.begin();

  srv.attach(SERVOPIN);
  srv.write(0); // Observatory closed initially
}

void loop() {
  brightness = analogRead(photometer_pin);
  float temperatureC = dht.readTemperature();
  float humidity = dht.readHumidity();

  if (isnan(temperatureC) || isnan(humidity)) {
    Serial.println("ERROR: DHT22 reading failed");
    delay(2000);
    return;
  }


  bool darkEnough = brightness < 500;
  bool humiditySafe = humidity < 70;
  bool temperatureSafe = temperatureC > 0;

  bool observingConditions =
    darkEnough &&
    humiditySafe &&
    temperatureSafe;

  if (observingConditions) {
    srv.write(90); // open
  }
  else {
    srv.write(0); // closed
  }

  Serial.print(millis());
  Serial.print(",");

  Serial.print(brightness);
  Serial.print(",");

  Serial.print(temperatureC);
  Serial.print(",");

  Serial.print(humidity);
  Serial.print(",");

  if (observingConditions) {
    Serial.println("OPEN");
  }
  else {
    Serial.println("CLOSED");
  }

  delay(2000);
}
