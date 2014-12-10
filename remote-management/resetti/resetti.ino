//const int resetPin = 2;
const int resetPin = 17;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println('dickbutt');
  pinMode(resetPin, OUTPUT);
  digitalWrite(resetPin, HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0){
    char c = Serial.read();
    if (c == '\n'){
      delay(100);
      Serial.println("reset lol");
      digitalWrite(resetPin, LOW);
      delay(1000);
      digitalWrite(resetPin, HIGH);

    }
  }

}
