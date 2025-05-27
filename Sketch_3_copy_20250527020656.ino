int gLED = 7;
int yLED = 5;
int rLED = 3;

void setup() {
  // So this just a comment hahaha we need a void setup and a void loop
  // in Void setup whatever code we put here will run once but in loop it will run in a loop
  pinMode(rLED, OUTPUT);
  pinMode(yLED, OUTPUT);
  pinMode(gLED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(rLED, HIGH);
  delay(1000);
  digitalWrite(rLED, LOW);
 
  digitalWrite(gLED, HIGH);
  delay(1000);
  digitalWrite(gLED, LOW);

  digitalWrite(yLED, HIGH);
  delay(1000);
  digitalWrite(yLED, LOW);
}
