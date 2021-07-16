// C++ code
//
void setup()
{
  Serial.begin(9600); //完成串口的初始化,这种方式,只能配置串口的波特率
  for(int i=2;i<9;i++)
  {
    pinMode(i,OUTPUT); //输入得数为i
  }
}
byte i;
void loop()
{
  while(Serial.available()>0)  //返回串口缓冲区中当前剩余的字符个数
  {
    i=Serial.read(); //从串口的缓冲区取出并读取一个Byte的数据，比如有设备通过串口向Arduino发送数据了，我们就可以用Serial.read()来读取发送的数据
    i=i-'0';
  	switch(i)
    {
      case 0:digitalWrite(2,HIGH);digitalWrite(3,HIGH);
             digitalWrite(4,HIGH);digitalWrite(5,HIGH);
             digitalWrite(6,HIGH);digitalWrite(7,HIGH);
             digitalWrite(8,LOW);break;
      case 1:digitalWrite(2,LOW);digitalWrite(3,HIGH);
             digitalWrite(4,HIGH);digitalWrite(5,LOW);
             digitalWrite(6,LOW);digitalWrite(7,LOW);
             digitalWrite(8,LOW);break;
      case 2:digitalWrite(2,HIGH);digitalWrite(3,HIGH);
             digitalWrite(4,LOW);digitalWrite(5,HIGH);
             digitalWrite(6,HIGH);digitalWrite(7,LOW);
             digitalWrite(8,HIGH);break;
      case 3:digitalWrite(2,HIGH);digitalWrite(3,HIGH);
             digitalWrite(4,HIGH);digitalWrite(5,HIGH);
             digitalWrite(6,LOW);digitalWrite(7,LOW);
             digitalWrite(8,HIGH);break;
      case 4:digitalWrite(2,LOW);digitalWrite(3,HIGH);
             digitalWrite(4,HIGH);digitalWrite(5,LOW);
             digitalWrite(6,LOW);digitalWrite(7,HIGH);
             digitalWrite(8,HIGH);break;
      case 5:digitalWrite(2,HIGH);digitalWrite(3,LOW);
             digitalWrite(4,HIGH);digitalWrite(5,HIGH);
             digitalWrite(6,HIGH);digitalWrite(7,LOW);
             digitalWrite(8,HIGH);break;
      case 6:digitalWrite(2,HIGH);digitalWrite(3,LOW);
             digitalWrite(4,HIGH);digitalWrite(5,HIGH);
             digitalWrite(6,HIGH);digitalWrite(7,HIGH);
             digitalWrite(8,HIGH);break;
      case 7:digitalWrite(2,HIGH);digitalWrite(3,HIGH);
             digitalWrite(4,HIGH);digitalWrite(5,LOW);
             digitalWrite(6,LOW);digitalWrite(7,LOW);
             digitalWrite(8,LOW);break;
      case 8:digitalWrite(2,HIGH);digitalWrite(3,HIGH);
             digitalWrite(4,HIGH);digitalWrite(5,HIGH);
             digitalWrite(6,HIGH);digitalWrite(7,HIGH);
             digitalWrite(8,HIGH);break;
    }
  }
}
