int inputPin= 5;

void setup(){
  pinMode(inputPin, INPUT);
  Serial.begin(115200);
}

void loop(){
  int value= digitalRead(inputPin);

  if (value == HIGH)
  {
    Serial.println("There is something moving");
    delay(500) ;
  }

  else
  {
    Serial.println("There is no moving");

delay(500) ;
  }
}
