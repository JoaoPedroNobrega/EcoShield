#define trigger 8
#define echo 7
int dist = 0;
#define ledY 5
#define ledO 4
#define ledR 3
#define buzzer 2

// Como o HC-SR04 possui limitação física de aproximadamente 4 metros, utilizamos uma escala proporcional para representar um poste urbano de 10 metros.

void setup() {
Serial.begin(9600);

pinMode(trigger, OUTPUT);
pinMode(echo, INPUT);

pinMode(ledY, OUTPUT);
pinMode(ledO, OUTPUT);
pinMode(ledR, OUTPUT);

pinMode(buzzer, OUTPUT);

}

void loop() {

  digitalWrite(trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger, LOW);

  dist = pulseIn(echo, HIGH);
  dist = dist / 58;

  Serial.print("Distancia: ");
  Serial.print(dist);
  Serial.println(" cm");

  noTone(buzzer);

 if(dist <= 300 && dist > 220){
    digitalWrite(ledY, HIGH);
    digitalWrite(ledO, LOW);
    digitalWrite(ledR, LOW);
    Serial.println("ALERTA");
    delay(2000);


  }else if(dist <= 220 && dist > 120){
    digitalWrite(ledO, HIGH);
    digitalWrite(ledY, LOW);
    digitalWrite(ledR, LOW);
    Serial.println("RISCO MODERADO");
    delay(2000);


  }else if(dist <= 120){
    digitalWrite(ledR, HIGH);
    digitalWrite(ledY, LOW);
    digitalWrite(ledO, LOW);
    tone(buzzer, 1000);
    delay(300);
    noTone(buzzer);
    delay(300);
    Serial.println("EVACUAÇÃO");
    delay(2000);
  
  }else{

    digitalWrite(ledY, LOW);
    digitalWrite(ledO, LOW);
    digitalWrite(ledR, LOW);
    Serial.println("AREA SEGURA");
    delay(2000);

  }

 // Os valores foram ajustados proporcionalmente para a limitação do sensor HC-SR04 no ambiente de simulação.
 
}
