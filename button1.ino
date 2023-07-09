// C++ code
//
int button = 10;
int led = 13;
int Buttonstatus = 0;

void setup()
{
  
pinMode(led,OUTPUT);
pinMode(button,INPUT);
  
}

void loop()
{

  
if(digitalRead(10) == 1)
{
  Buttonstatus = 1-Buttonstatus ;

  if(Buttonstatus ==1)
  {
    digitalWrite(led,HIGH);
    delay(250);
  }
  
  else
    digitalWrite(led,LOW);
  delay(250);
}
  
    
}

