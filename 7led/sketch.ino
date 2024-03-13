
const int LedArray[] ={2,3,4,5,6,7,8};

void setup() {
  // put your setup code here, to run once:
for (int i=0; i<7;i++){
  pinMode(LedArray[i],OUTPUT);
}
}

void loop() {
  // put your main code here, to run repeatedly:
for(int i=0; i<7;i++){
  digitalWrite(LedArray[i], HIGH);
  delay(50);
  digitalWrite(LedArray[i], LOW);
  delay(50);
}
for(int j=7; j>0;j--){
  digitalWrite(LedArray[j], HIGH);
  delay(50);
  digitalWrite(LedArray[j], LOW);
  delay(50);
}

}
