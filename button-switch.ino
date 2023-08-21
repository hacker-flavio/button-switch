int buttonOnePin = 8;
int buttonTwoPin = 9;

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("printing...");
  pinMode(buttonOnePin, INPUT_PULLUP);
  pinMode(buttonTwoPin, INPUT_PULLUP);
}

void loop()
{
  // put your main code here, to run repeatedly:
  if (digitalRead(buttonOnePin) == LOW)
  {
    Serial.println("button one pressed");
  }
  if (digitalRead(buttonTwoPin) == LOW)
  {
    Serial.println("button two pressed");
  }
  delay(200);
}
