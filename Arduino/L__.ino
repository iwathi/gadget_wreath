int LED1 = 2;
int LED2 = 3;
int LED3 = 4;
int LED4 = 5;
int LED5 = 6;
int DELAY = 200;

void setup() {
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);
  pinMode(LED5,OUTPUT);
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
    digitalWrite(LED4,HIGH);
    delay(DELAY);
    digitalWrite(LED4,LOW);
    digitalWrite(LED5,HIGH);
    delay(DELAY);
    digitalWrite(LED5,LOW);
}
