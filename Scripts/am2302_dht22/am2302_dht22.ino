#include <DHT.h>
#define DHT_PIN 7  // Digital pin connected to the sensor
#define DHT_TYPE DHT22  // DHT sensor model (DHT11, DHT21, DHT22)
DHT dht(DHT_PIN, DHT_TYPE);
void setup() {
  Serial.begin(9600);
  dht.begin();
}
void loop() {
  // Wait a few seconds between measurements
  delay(2000);

  // Read humidity and temperature from the sensor
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  // Check if any reads failed
  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  // Print humidity and temperature
  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.print("%\t");
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println("°C");
}
