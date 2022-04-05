#define led 11
#define led1 12
#define led2 13
#define poten A0


void setup()
{
  Serial.begin(9600);
  pinMode(poten,INPUT);
  for(int i=led;i<=led2;i++)
  {
    pinMode(i,OUTPUT);
  }
}

void loop()
{
  int val = analogRead(poten);
  int m = map(val,0,1023,0,100);
  Serial.print("Valor PWM: ");
  Serial.println(m);
  for(int i=led;i<=led2;i++)
  {
    if(m>=50)
    {
     digitalWrite(i,HIGH);
     
    }
    else
    {
     digitalWrite(i,LOW);
     
    }
    //Envio de datos
    
    delay(50);
  }

}
