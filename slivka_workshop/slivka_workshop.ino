int en1 = 11;
int en2 = 10;
int ph1 = 2;
int ph2 = 3;

void setup() {
  pinMode(en1, OUTPUT);
  pinMode(ph1, OUTPUT);

  pinMode(en2, OUTPUT);
  pinMode(ph2, OUTPUT);
}

void loop() {
  move_motor1(100); // forward
  move_motor2(100);
  delay(1000);
  move_motor1(-100); // backward
  move_motor2(-100);
  delay(1000);
  move_motor1(0); // stop
  move_motor2(0);
  delay(500);
}

void move_motor1(int spd) {
  if (spd >= 0) {
    analogWrite(en1, spd);
    digitalWrite(ph1, HIGH);
  } else if (spd < 0) {
    analogWrite(en1, -spd);
    digitalWrite(ph1, LOW);
  }
}

void move_motor2(int spd) {
  if (spd >= 0) {
    analogWrite(en2, spd);
    digitalWrite(ph2, HIGH);
  } else if (spd < 0) {
    analogWrite(en2, -spd);
    digitalWrite(ph2, LOW);
  }
}
 
