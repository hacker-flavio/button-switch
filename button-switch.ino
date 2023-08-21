int buttonOnePin = 8;
int buttonTwoPin = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonOnePin, INPUT_PULLUP);
  pinMode(buttonTwoPin, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(buttonOnePin) == LOW){
     Serial.println("button one pressed");
  }
  if(digitalRead(buttonTwoPin) == LOW){
     Serial.println("button two pressed");
  }
}
