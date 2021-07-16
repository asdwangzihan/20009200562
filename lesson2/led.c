// C++ code
//
int i=13;
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop()
{
  for(i=13;i>6;i--)
  {
  digitalWrite(i, HIGH);
  delay(1500); // Wait for 1500 millisecond(s)
  digitalWrite(i, LOW);
  delay(1500); // Wait for 1500 millisecond(s)
  }
}
