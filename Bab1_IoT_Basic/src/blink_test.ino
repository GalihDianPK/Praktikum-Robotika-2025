/*
 * Bab 1: IoT Basic - Blink Test
 * Pusat Studi Multimedia & Robotika (PSMURO) Universitas Gunadarma
 * 
 * Deskripsi:
 * Program sederhana untuk menguji fungsionalitas dasar microcontoller (Arduino/WeMos)
 * dengan mengedipkan LED internal (LED_BUILTIN) secara berkala.
 */

// Konstanta pin LED (menggunakan LED_BUILTIN bawaan board)
const int ledPin = LED_BUILTIN;

void setup() {
  // Menginisialisasi pin LED sebagai OUTPUT
  pinMode(ledPin, OUTPUT);
  
  // Memulai komunikasi serial untuk debugging (opsional)
  Serial.begin(115200);
  Serial.println("Blink Test Dimulai!");
}

void loop() {
  // Menyalakan LED (Catatan: Pada beberapa board seperti ESP8266, LOW berarti menyala)
  digitalWrite(ledPin, LOW);
  Serial.println("LED Menyala (LOW)");
  delay(1000); // Tunggu selama 1 detik
  
  // Mematikan LED (HIGH berarti mati pada active-low LED)
  digitalWrite(ledPin, HIGH);
  Serial.println("LED Mati (HIGH)");
  delay(1000); // Tunggu selama 1 detik
}
