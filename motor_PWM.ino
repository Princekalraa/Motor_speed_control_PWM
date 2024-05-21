const int motorPin = 9;
const int potentiometerPin = A0;

void setup() {
  pinMode(motorPin, OUTPUT);
}

void loop() {
  int potValue = analogRead(potentiometerPin);
  int motorSpeed = map(potValue, 0, 1023, 0, 255);

  analogWrite(motorPin, motorSpeed);
  
  delay(10);
}
