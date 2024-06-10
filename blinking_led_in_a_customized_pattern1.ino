// C++ code
//
int p=13;
int pause=100,sB=200,lB=600,delayBetLet=1000;
void setup()
{
  pinMode(p,OUTPUT);
}

void loop()
{
 blink(sB);
  blink(sB);
  blink(sB);
  
  blink(lB);
  blink(lB);
  blink(lB);
  
  blink(sB);
  blink(sB);
        blink(sB);
  
  delay(delayBetLet);
}
void blink(int duration){
  digitalWrite(p,HIGH);
  delay(100);
  digitalWrite(p,LOW);
  delay(pause);
}