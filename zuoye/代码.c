#include <MsTimer2.h> 
volatile int pinInterrupt=2;
volatile int ticka = 1;
volatile int tickb = 1;
void myfunc()
{
  digitalWrite(10,LOW);
  ticka=0;
  tickb=0;
  digitalWrite(3,(byte(tickb)-'0')&0x1);
  digitalWrite(4,((byte(tickb)-'0')>>1)&0x1);
  digitalWrite(5,((byte(tickb)-'0')>>2)&0x1);
  digitalWrite(6,((byte(tickb)-'0')>>3)&0x1);
  digitalWrite(10,HIGH);
}
void onTimer()
{
    if(tickb>=10)
  {
    tickb=0;
    digitalWrite(10,LOW);

    digitalWrite(3,(byte(ticka)-'0')&0x1);
    digitalWrite(4,((byte(ticka)-'0')>>1)&0x1);
    digitalWrite(5,((byte(ticka)-'0')>>2)&0x1);
    digitalWrite(6,((byte(ticka)-'0')>>3)&0x1);
    digitalWrite(10,HIGH);
    ticka++;//十位计数
    if(ticka==10)
      ticka=0;
    
  }
  digitalWrite(3,(byte(tickb)-'0')&0x1);
  digitalWrite(4,((byte(tickb)-'0')>>1)&0x1);
  digitalWrite(5,((byte(tickb)-'0')>>2)&0x1);
  digitalWrite(6,((byte(tickb)-'0')>>3)&0x1);
  
  tickb++;//个位计数

}
void setup()
{
  
  Serial.begin(9600); //初始化串口
  pinMode(2,INPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  digitalWrite(9,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,LOW);
  MsTimer2::set(1000,onTimer);
  MsTimer2::start();
  attachInterrupt(digitalPinToInterrupt(pinInterrupt), myfunc,CHANGE);
  
}
void loop()
{}
