//pin that triggers the sensor
const int trig_pin = 12;
//pin that produces pulse when signal is received
const int echo_pin = 13;

const int LED1 = 8; 
const int LED2 = 7; 
const int LED3 = 6; 
const int LED4 = 5; 
const int LED5 = 4; 
const int LED6 = 3; 
const int LED7 = 2; 

int duration = 0;
int distance = 0;

void setup() {
  pinMode(trig_pin , OUTPUT);
  pinMode(echo_pin , INPUT);
  Serial.begin(9600);
  pinMode(LED1 , OUTPUT);
  pinMode(LED2 , OUTPUT);
  pinMode(LED3 , OUTPUT);
  pinMode(LED4 , OUTPUT);
  pinMode(LED5 , OUTPUT);
  pinMode(LED6 , OUTPUT);
  pinMode(LED7 , OUTPUT);

}

void loop() {
  digitalWrite(trig_pin, HIGH);
  delayMicroseconds(1000);
  digitalWrite(trig_pin, LOW);

  duration = pulseIn(echo_pin, HIGH);
  distance = (duration/2) / 28.5;
  Serial.println(distance);

  if (distance <= 7) {
    digitalWrite(LED1, HIGH);
      
  }
  else {
    digitalWrite(LED1, LOW);
     
  }
  if (distance <= 14) {
    digitalWrite(LED2, HIGH);
   
  }
  else {
    digitalWrite(LED2, LOW);
     
  }
  if (distance <= 21) {
    digitalWrite(LED3, HIGH);
      
  }
  else {
    digitalWrite(LED3, LOW);
     
  }
  if (distance <= 28) {
    digitalWrite(LED4, HIGH);
      
  }
  else {
    digitalWrite(LED4, LOW);
     
  }
  if (distance <= 35) {
    digitalWrite(LED5, HIGH);
  }
  else {
    digitalWrite(LED5, LOW);
  }
  if (distance <= 42) {
    digitalWrite(LED6, HIGH);
  
  }
  else {
    digitalWrite(LED6, LOW);
   
  }
  if (distance <= 49) {
    digitalWrite(LED7, HIGH);
   
  }
  else {
    digitalWrite(LED7, LOW);
  }
}
