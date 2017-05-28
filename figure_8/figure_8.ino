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
  move_motor1(255); // turn right 
  move_motor2(110);
  delay(2000);
  move_motor1(100); // forward
  move_motor2(100);
  delay(500);
  move_motor1(110); // turn left
  move_motor2(255);
  delay(2000);
  move_motor1(100); 
  move_motor2(100);
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
