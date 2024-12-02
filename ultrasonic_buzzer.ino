int buzzer=2;
const int trig=10; 
const int echo=9;
float duration, distance;
void setup() {
pinMode(trig, OUTPUT);
pinMode(echo, INPUT);
pinMode(buzzer, OUTPUT);
Serial.begin(9600);
}
void loop() {

  // ultrasonic

  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  duration = pulseIn(echo, HIGH); // zamane moje soti
  distance = (duration*.0343)/2;  
  Serial.print("Distance: ");
  Serial.println(distance);
  delay(100);

// buzzer
  if (distance<30){
  digitalWrite(buzzer,HIGH);
  delay(1000);
  }
  else{
  digitalWrite(buzzer,LOW);
  delay(500);
  }

}
