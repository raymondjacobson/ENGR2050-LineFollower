int motorA = 5;
int motorB = 6;

void setup(){
  pinMode(motorA, OUTPUT);
  pinMode(motorB, OUTPUT);
}

void loop() {
  digitalWrite(motorA, HIGH);
  digitalWrite(motorB, HIGH);
}