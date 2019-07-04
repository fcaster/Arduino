int pin = 13;
void setup()
{
  Serial.begin(9600);
  pinMode(pin,OUTPUT);
}
void loop()
{
  int got = 0;
  int i = 0;
  int n = 0;
  String readin="";
  while(Serial.available()>0)
  {
    got = 1;
    readin += char(Serial.read());
    delay(2);
    n++;
  }
  for(int i=0;got==1 and i<n;i++)
  {
    switch(readin[i])
    {
      case 'a':dot();dash();betw();break;
      case 'b':dash();dot();dot();dot();betw();break;
      case 'c':dash();dot();dash();dot();betw();break;
      case 'd':dash();dot();dot();betw();break;
      case 'e':dot();betw();break;
      case 'f':dot();dot();dash();dot();betw();break;
      case 'g':dash();dash();dot();betw();break;
      case 'h':dot();dot();dot();dot();betw();break;
      case 'i':dot();dot();betw();break;
      case 'j':dot();dash();dash();betw();break;
      case 'k':dash();dot();dash();betw();break;
      case 'l':dot();dash();dot();dot();betw();break;
      case 'm':dash();dash();betw();break;
      case 'n':dash();dot();betw();break;
      case 'o':dash();dash();dash();dash();betw();break;
      case 'p':dot();dash();dash();dot();betw();break;
      case 'q':dash();dash();dot();dash();betw();break;
      case 'r':dot();dash();dot();betw();break;
      case 's':dot();dot();dot();betw();break;
      case 't':dash();betw();break;
      case 'u':dot();dot();dash();betw();break;
      case 'v':dot();dot();dot();dash();betw();break;
      case 'w':dot();dash();dash();betw();break;
      case 'x':dash();dot();dot();dash();betw();break;
      case 'y':dash();dot();dash();dash();betw();break;
      case 'z':dash();dash();dot();dot();betw();break;
      case ' ':digitalWrite(pin,LOW);delay(1500);break;
    }
  }
  if(got==1){
  Serial.println(readin);
  delay(2);}
}

void dot()
{
  digitalWrite(pin,HIGH) ;
  delay(250);
  digitalWrite(pin,LOW);
  delay(250);
}

void dash()
{
  digitalWrite(pin,HIGH) ;
  delay(1000);
  digitalWrite(pin,LOW);
  delay(250);
}
void betw(){
  digitalWrite(pin,LOW);
  delay(500);
}
