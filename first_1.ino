

void setup() {
  Serial.begin(9600);

}

void loop(){
  Serial.println("Hello World");
  delay(1000);
  hello();
}

void hello(){
  Serial.println("Mano Chittiwong");
  Serial.println("6921061001@cdti.ac.th");
  Serial.println(15);
}