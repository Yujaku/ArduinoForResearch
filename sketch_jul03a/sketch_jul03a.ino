int pin1 =3;//3ぽーと:しゃったー

int pin2 =6;//6ぽーと:えきしょう

int pin3 =9;//9ぽーと:かめら

void setup() {
  // put your setup code here, to run once:
  pinMode(pin1,OUTPUT);
  pinMode(pin2,OUTPUT);
  pinMode(pin3,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  //digitalWrite(pin1,HIGH);
  //digitalWrite(pin2,HIGH);
  //digitalWrite(pin3,HIGH);
  delay(1000);
  //digitalWrite(pin1,LOW);
  //digitalWrite(pin2,LOW);
  digitalWrite(pin3,LOW);
  delay(5000);
}
