int buttonOnePin = 8;
int buttonTwoPin = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonOnePin, INPUT_PULLUP)
  pinMode(buttonOneTwo, INPUT_PULLUP)
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(buttonOnePin) == LOW){
     client.println("button one pressed");
  }
  if(digitalRead(buttonTwoPin) == LOW){
     client.println("button two pressed");
  }
}
