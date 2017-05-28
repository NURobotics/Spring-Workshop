const int flash_pin = 13;

void setup() {
  pinMode(flash_pin, OUTPUT);
}

void loop() {
  digitalWrite(flash_pin, HIGH);
  delay(500);
  digitalWrite(flash_pin, LOW);
  delay(500);
}
