void setup() {
  // put your setup code here, to run once:
  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  char readin;
  if(Serial.available()>0)
  {
    switch(readin)
    {
      case 'f':forward();break;
      case 'b':backward();break;
      case 'c':turnleft();lefton();break;
      case 'd':turnright();righton();break;
      case 's':zstop();break;
    }
  }
}
void forward(){
  digitalWrite(1,HIGH);
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
}

void backward(){
  digitalWrite(2,HIGH);
  digitalWrite(1,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(3,LOW);
}

void turnleft(){
  digitalWrite(2,HIGH);
  digitalWrite(1,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
}

void turnright(){
  digitalWrite(1,HIGH);
  digitalWrite(2,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(3,LOW);
}

void zstop(){
  digitalWrite(1,LOW);
  digitalWrite(2,LOW);
  digitalWrite(4,LOW);
  digitalWrite(3,LOW);
}

void lefton(){
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
}

void righton(){
  digitalWrite(6,HIGH);
  digitalWrite(5,LOW);
}
