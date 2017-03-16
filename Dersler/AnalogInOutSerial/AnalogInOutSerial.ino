
const float analogInPin = A0;  // Analog giris bacagini belirler

int sensorValue = 0;        // Degeri Potanstan okur
float outputValue = 0;        // Degeri PWM (analog out) olarak yazar

void setup() {
  // Seri iletişimi  9600 bps de başlatır:
  Serial.begin(9600);
}

void loop() {
  // Analog degeri okur:
  sensorValue = analogRead(analogInPin);
  // ADC degerini belli aralıklara böler ve haritalandırır:
  outputValue = map(sensorValue, 0, 1023, 0, 100000);


  // Sonuçları serial monitore yazar:
  Serial.print("ADC Degeri = ");
  Serial.print(sensorValue);
  Serial.print("\t Potans Degeri = ");
  Serial.print(outputValue);
  Serial.println(" OHM");

  // 250 milisaniye bekler
  delay(250);
}
