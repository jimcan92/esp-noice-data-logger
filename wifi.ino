#include <WiFiManager.h>

void init_wifi() {
  WiFiManager wm;
  // wm.resetSettings();
  bool res;
  res = wm.autoConnect(deviceId.c_str());
  if (!res) {
    Serial.println("Failed to connect");
  } else {
    Serial.println("Yaay, connected...");
  }
}