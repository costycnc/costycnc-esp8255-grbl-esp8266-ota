// https://yoursunny.com/t/2017/change-ESP8266-MAC/

#include <Arduino.h>
extern "C" {
#include <user_interface.h>
}

void setup() {
  Serial.begin(9600);
  delay(5000);

  Serial.print("MAC address is ");
  Serial.println(WiFi.macAddress());
uint8_t mac[6] {0xb8, 0xd7, 0x63, 0x00, 0xfe, 0xef};
wifi_set_macaddr(STATION_IF, mac);
  Serial.print("MAC address is ");
  Serial.println(WiFi.macAddress());
}

void loop() {
}