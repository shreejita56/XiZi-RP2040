// RP2040 Blink Sketch
// LED connected to GPIO 28 (GP28)

#define LED_PIN 28

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);  // LED ON
  delay(1000);

  digitalWrite(LED_PIN, LOW);   // LED OFF
  delay(1000);
}
