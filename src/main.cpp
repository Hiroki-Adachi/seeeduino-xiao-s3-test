#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  pinMode(LED_BUILTIN, OUTPUT);

  delay(20000);

  Serial.println("++++++++++ OUTPUT TEST .CSV ++++++++++");
  Serial.println("content1, content2, content3");
}

void loop() {
  Serial.print("star");
  Serial.print(", ");
  Serial.print("test");
  Serial.print(", ");
  Serial.println("end");

  digitalWrite(LED_BUILTIN, HIGH);
  delay(10000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(10000);
}
