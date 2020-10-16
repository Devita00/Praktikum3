int mt = A0; //motor DC dihubungkan ke pin analog A0 arduino
int h = 255; //5 volt
int l = 0; //0 volt
String motion;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(mt,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Silahkan ketik 'p' untuk memutar, 's' untuk berhenti");
  while (Serial.available()==0){ }
  motion = Serial.readString();
  if (motion == "p"){
    analogWrite (mt,l);
  }
  if (motion == "s"){
    analogWrite (mt,h);
  }
}
