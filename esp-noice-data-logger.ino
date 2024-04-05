String deviceId = "ESP04";

void setup() {
  Serial.begin(115200);
  delay(1000);

  init_wifi();
  init_mic();
}

void loop() {}
