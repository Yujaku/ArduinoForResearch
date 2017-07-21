int shutter =3; // シャッター
int LC =6;      // 液晶
int camera =9;  // カメラ

int camera_delay=10;       // カメラ遅延 ms
int LC_delay=20;           // 液晶遅延 ms
int shutter_delay=500;     // シャッター遅延 ms
int trigger_pulse_width=5;  // カメラトリガパルス幅 us
int N=1000;                // 撮影回数

void setup() {
  // put your setup code here, to run once:
  pinMode(shutter,OUTPUT);
  pinMode(LC,OUTPUT);
  pinMode(camera,OUTPUT);

  /// 初期化
  digitalWrite(shutter,LOW);
  digitalWrite(LC,LOW);
  digitalWrite(camera,LOW);

  delay(1000);

  /// 参照光取り込み
  digitalWrite(camera,HIGH);
  delayMicroseconds(trigger_pulse_width);
  digitalWrite(camera,LOW);
  delay(camera_delay);

 /// シャッターオープン
 digitalWrite(shutter,HIGH);
 delay(shutter_delay);

  for ( int i = 0; i < N; i++ )
  {
    startup();
  }
}

void loop() {
  // put your main code here, to run repeatedly:
}

void startup(){
  /// 液晶切り替え
 digitalWrite(LC,LOW);
 delay(LC_delay);
  //干渉縞取り込み
 digitalWrite(camera,HIGH);
 delayMicroseconds(trigger_pulse_width);
 digitalWrite(camera,LOW);
 delay(camera_delay);

 /// 液晶切り替え
 digitalWrite(LC,HIGH);
 delay(LC_delay);

 //干渉縞取り込み
 digitalWrite(camera,HIGH);
 delayMicroseconds(trigger_pulse_width);
 digitalWrite(camera,LOW);
 delay(camera_delay);

}

