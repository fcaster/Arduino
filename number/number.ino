char readin;
void setup()
{
  Serial.begin(9600);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(3,OUTPUT);
}

void loop()
{
  if(Serial.available()>0)
  {
    readin = Serial.read();
    switch(readin){
      case '1':
      digitalWrite(4, HIGH);
      digitalWrite(7, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      delay(10);
      break;
      case '2':
      digitalWrite(7, HIGH);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      delay(10);
      break;
      case '3':
      digitalWrite(4, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      delay(10);
      break;
      case '4':
      digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
      digitalWrite(5, LOW);
      digitalWrite(4, LOW);
      delay(10);
      break;
      case '5':
      digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
      digitalWrite(5, LOW);
      digitalWrite(4, HIGH);
      delay(10);
      break;
      case '6':
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(4, LOW);
      delay(10);
      break;
      case '7':
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(4, HIGH);
      delay(10);
      break;
      case '8':
      digitalWrite(5, HIGH);
      digitalWrite(7, LOW);
      digitalWrite(6, LOW);
      digitalWrite(4, LOW);
      delay(10);
      break;
      case '9':
      digitalWrite(5, HIGH);
      digitalWrite(7, LOW);
      digitalWrite(6, LOW);
      digitalWrite(4, HIGH);
      delay(10);
      break;
      case '0':
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(5, LOW);
      digitalWrite(4, LOW);
      delay(10);
      break;
    }
  }
}
