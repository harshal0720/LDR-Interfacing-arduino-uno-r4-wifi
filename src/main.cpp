#include <Arduino.h>
#define LDR_PIN A0

void setup() {
    Serial.begin(9600);
    while (!Serial); //import for uno r4 wifi
}

void loop() {
    int ldrRaw = analogRead(LDR_PIN);
    //map to percentage
    int lightPercentage = map(ldrRaw, 0, 1023, 0, 100);
    Serial.print("LDR Raw Value: ");
    Serial.print(ldrRaw);
    Serial.print(" | Light Intensity: ");
    Serial.print(lightPercentage);
    Serial.println("%");
    delay(500);
}