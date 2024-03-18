#define pirPin 2
#define ledPin 3
int statusPir = LOW;
int m;

void setup() {
  // put your setup code here, to run once:
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
  m = digitalRead(pirPin);
  if (m == HIGH){
    // delay(2000);
    digitalWrite(ledPin, HIGH);//led nyala

    Serial.println("Gerakan Terdeteksi");//serial monitor menampilkan teks
    statusPir = HIGH;
  }
  else{
    delay(3000);
    digitalWrite(ledPin, LOW);//led mati
    Serial.println("Tidak ada gerakan");//serial monitor menampilkan teks
    statusPir = LOW;
  }
  delay(2000);
}
