int buttonOnePin = 8;
int buttonTwoPin = 9;
int buttonOneState = HIGH; // Assuming buttons are not pressed initially
int buttonTwoState = HIGH;

void setup()
{
  Serial.begin(9600);
  Serial.println("Printing...");
  pinMode(buttonOnePin, INPUT_PULLUP);
  pinMode(buttonTwoPin, INPUT_PULLUP);
}

void loop()
{
  int newButtonOneState = digitalRead(buttonOnePin);
  int newButtonTwoState = digitalRead(buttonTwoPin);

  // Check if button one state has changed
  if (newButtonOneState != buttonOneState)
  {
    if (newButtonOneState == LOW)
    {
      Serial.println("Button one pressed");
    }
    else
    {
      Serial.println("Button one released");
    }
    buttonOneState = newButtonOneState;
  }

  // Check if button two state has changed
  if (newButtonTwoState != buttonTwoState)
  {
    if (newButtonTwoState == LOW)
    {
      Serial.println("Button two pressed");
    }
    else
    {
      Serial.println("Button two released");
    }
    buttonTwoState = newButtonTwoState;
  }
  
  // Add a small delay to avoid rapid changes
  delay(50);
}
