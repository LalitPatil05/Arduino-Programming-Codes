int bpin = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(bpin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  tone(bpin,2000);
  delay(700);
  noTone(bpin);
  delay(700);
  tone(bpin,1000);

}
