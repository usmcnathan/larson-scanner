
void setup()
{
  for(int i = 1; i < 8; i++)
  {
    pinMode(i, OUTPUT);
  }
  
}

void loop(){
  
  for(int i = 1; i < 7; i++){
  
    digitalWrite(i, HIGH);
    delay(10);
    digitalWrite(i, LOW);
    }
      
   for (int i = 7; i > 0; i--)
  {
    digitalWrite(i, HIGH);
    delay(10);
    digitalWrite(i, LOW);
   }
}
