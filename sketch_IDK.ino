int buz = 3;

void setup() {
  pinMode(buz, OUTPUT);


}

void loop() {
  digitalWrite(buz, HIGH);
  delay(10);
  digitalWrite(buz,LOW);
  delay(100000);


}
