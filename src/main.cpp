#include <Arduino.h>
#include <ArduinoJson.h>
#include "DHT.h"

#define PIN_ANALOG_IN A0
#define DHTPIN 2
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

unsigned long interval = 1000;
unsigned long previousMillis = 0;

StaticJsonDocument<16> doc;

void setup()
{
  Serial.begin(9600);
  dht.begin();
  
}

void loop()
{

  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis > interval)
  {
    previousMillis = currentMillis;
    int sound = analogRead(PIN_ANALOG_IN);
    float temp = dht.readTemperature(true);
    doc["sound"] = sound;
    doc["temp"] = temp;

    serializeJson(doc, Serial);
    Serial.println();
  }
}
