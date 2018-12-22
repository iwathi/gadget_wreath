int LED1 = 14;
int LED2 = 12;
int LED3 = 13;
int DELAY = 200;

void setup() {
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
}

void loop() {
    digitalWrite(LED1,HIGH);
    delay(DELAY);
    digitalWrite(LED1,LOW);
    digitalWrite(LED2,HIGH);
    delay(DELAY);
    digitalWrite(LED2,LOW);
    digitalWrite(LED3,HIGH);
    delay(DELAY);
    digitalWrite(LED3,LOW);
}
