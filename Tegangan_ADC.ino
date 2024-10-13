// Pin di mana sensor analog atau input terhubung
#define ADC_PIN A0

void setup() {
  // Memulai komunikasi serial dengan baud rate 115200
  Serial.begin(115200);
  // Mengatur pin sebagai input (opsional karena analogRead sudah membaca sebagai input)
  pinMode(ADC_PIN, INPUT);
}

void loop() {
  // Membaca nilai dari ADC_PIN
  int adcValue = analogRead(ADC_PIN);

  // Menampilkan nilai ADC ke Serial Monitor
  Serial.print("Nilai ADC: ");
  Serial.println(adcValue);

  // Penundaan 1 detik (1000 ms) sebelum membaca lagi
  delay(1000);
}
