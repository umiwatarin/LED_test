int led = 12;
int sign = 1;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(sign, INPUT);

  digitalWrite(led, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(sign) == HIGH){
    digitalWrite(led, LOW);
  } else {
    digitalWrite(led, HIGH);
  }
}

