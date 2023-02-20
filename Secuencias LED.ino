char valor2 = ' ';
void setup(){
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, INPUT);
  Serial.begin(9600);
}

void loop(){
 
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);

  int valor = digitalRead(10);
  Serial.print("Push: ");
  Serial.println(valor);
  delay(1);
  if(valor==1){
    for(int i=0;i<2;i++){
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  delay(1000);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  delay(1000);
  digitalWrite(2, HIGH);
  digitalWrite(2, LOW);
      delay(300);
  digitalWrite(3, HIGH);
  digitalWrite(3, LOW);
      delay(300);
  digitalWrite(4, HIGH);
  digitalWrite(4, LOW);
      delay(300);
  digitalWrite(5, HIGH);
  digitalWrite(5, LOW);
      delay(300);
  digitalWrite(6, HIGH);
  digitalWrite(6, LOW);
      delay(300);
  digitalWrite(7, HIGH);
  digitalWrite(7, LOW);
      delay(300);
  digitalWrite(8, HIGH);
  digitalWrite(8, LOW);
      delay(300);
  digitalWrite(9, HIGH);
  digitalWrite(9, LOW);
  delay(300);
 }   
}

if(Serial.available() != 0){
valor2 = Serial.read();
      Serial.println(valor2);
      delay(1);
  if(valor2 == '2'){
    for(int i=0;i<3;i++){
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
      delay(2000);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
      delay(2000);

    }
}
}
}