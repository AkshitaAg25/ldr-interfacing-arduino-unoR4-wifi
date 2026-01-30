#include <Arduino.h>
#define LDR_PIN A0

void setup() {
    Serial.begin(9600);
    while (!Serial);
    // write your initialization code here
}

void loop() {
    int ldrRaw = analogRead(LDR_PIN);
    int lightPercentage = map(ldrRaw, 0, 1023, 0, 100);
    Serial.print("LDR Raw:");
    Serial.print(ldrRaw);
    Serial.print("| Light: ");
    Serial.print(lightPercentage);
    Serial.println("%");
    delay(500);
    // write your code here
}
