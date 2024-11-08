#include <HTTPClient.h>

const char* scriptUrl = "https://script.google.com/macros/s/AKfycbwlMwvPKgSd7_DRchSeHIXCdNHCAFJOveUdJPjzWi6JMb9UQQCvFT1YDUnjhE56AYuYlA/exec";

HTTPClient http;

void saveToGSheet(double db) {
  String queryParams = "?device_id=" + deviceId + "&db=" + db;

  int res = -1;

  http.begin(scriptUrl + queryParams);

  while (res < 0) {
    res = http.GET();
    Serial.print("Http response: ");
    Serial.println(res);
  }



  http.end();
}