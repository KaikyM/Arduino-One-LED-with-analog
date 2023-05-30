// C++ code
int i;
void setup(){
  pinMode(11, OUTPUT);
}
void loop(){
  for(i = 0;i <= 255;i += 5){
  analogWrite(11, i);
  delay(30); // Wait for 10 millisecond(s)
  }
}
