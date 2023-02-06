#include <Arduino.h>
#include <WiFi.h>

const char* ssid = "wifi ssid";
const char* passwd = "wifi password";

void setup_wifi() {
  WiFi.begin(ssid, passwd);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.print("OK IP=");
  Serial.println(WiFi.localIP());
}

void setup() {
  Serial.begin(115200);
  setup_wifi();
}

void loop() {

}
