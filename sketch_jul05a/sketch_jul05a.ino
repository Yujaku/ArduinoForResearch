int shutter =3; // シャッター
int LC =6;      // 液晶
int camera =9;  // カメラ

int camera_delay=15;       // カメラ遅延 ms
int LC_delay=20;           // 液晶遅延 ms
int shutter_delay=500;     // シャッター遅延 ms
int trigger_pulse_width=5;  // カメラトリガパルス幅 us

void setup() {
  // put your setup code here, to run once:
  pinMode(shutter,OUTPUT);
  pinMode(LC,OUTPUT);
  pinMode(camera,OUTPUT);

  digitalWrite(shutter,LOW);
  digitalWrite(LC,LOW);
  digitalWrite(camera,LOW);

  startup();
}

void loop() {
  // put your main code here, to run repeatedly:
}

void startup(){
  //ここにかいてね
  delay(1000);
  
 digitalWrite(camera,HIGH);
 delayMicroseconds(trigger_pulse_width);
 digitalWrite(camera,LOW);
 delay(camera_delay);

 digitalWrite(shutter,HIGH);
 delay(shutter_delay);
  
 digitalWrite(camera,HIGH);
 delayMicroseconds(trigger_pulse_width);
 digitalWrite(camera,LOW);
 delay(camera_delay);
 
 digitalWrite(LC,HIGH);
 delay(LC_delay);
 
 digitalWrite(camera,HIGH);
 delayMicroseconds(trigger_pulse_width);
 digitalWrite(camera,LOW);
 delay(camera_delay);
 
}

