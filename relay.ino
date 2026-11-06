int r1 = 7;
int r2 = 6;

void setup() {
  pinMode(r1, OUTPUT);
  pinMode(r2, OUTPUT);
}

void loop() {
  digitalWrite(r1, HIGH);
  digitalWrite(r1, LOW);
  
  delay(1000);
  digitalWrite(r2, HIGH);
  digitalWrite(r2, LOW);
  
  delay(1000);
}
