int led=2;
char mensaje;
int boton=8;
void setup() {
  pinMode(led,OUTPUT);
  pinMode(boton,INPUT);
  Serial.begin(9600);
}

void loop() {
  if(Serial.available()>0){
    mensaje=Serial.read();
    if (mensaje=='k'){
      digitalWrite(led,HIGH);
    }else{
      digitalWrite(led,LOW);
    }
  }
  if(digitalRead(boton)==HIGH){
    delay(250);
    Serial.println("se encendió");
    digitalWrite(led,HIGH);
  }else{
    Serial.println("no se encendió");
    digitalWrite(led,LOW);
  }
}
