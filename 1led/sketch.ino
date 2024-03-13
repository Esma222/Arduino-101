void setup() {
  // put your setup code here, to run once:
  pinMode(7, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
   digitalWrite(7,HIGH); /* 7 numaralı pine enerji verildi */
  delay(1000); /* 1000 milisaniye = 1 saniye bekleme */
  digitalWrite(7,LOW); /* 7 numaralı pindeki enerji kesildi */
  delay(1000); /* 1 saniye bekleme */

}
