# Bab 1: Pengenalan Mikrokontroler IoT (ESP8266)

Modul ini membahas dasar-dasar penggunaan modul Wi-Fi ESP8266 (WeMos D1 R2) untuk pengembangan proyek Internet of Things (IoT).

## 🎯 Tujuan Pembelajaran
- Memahami arsitektur pin GPIO pada WeMos D1 R2.
- Mengonfigurasi Arduino IDE untuk mendukung board ESP8266.
- Memahami struktur dasar kode Arduino (`setup()` dan `loop()`).
- Menguji konektivitas dasar dengan program *Blink* (LED internal).

## ⚙️ Persiapan
1. **Board Manager:** Pastikan URL berikut sudah ditambahkan di `File > Preferences`:
   `http://arduino.esp8266.com/stable/package_esp8266com_index.json`
2. **Library:** Tidak diperlukan library tambahan untuk tes dasar ini.

## 🔌 Pinout Dasar (WeMos D1 R2)
- **Pin D4:** Terhubung langsung ke LED internal (Built-in LED).
- **Pin 5V/3V3:** Sumber daya (Pastikan voltase sesuai dengan kebutuhan sensor).
- **Pin GND:** Ground.

## 💻 Contoh Kode (Blink Test)
Berikut adalah kode untuk mengetes apakah ESP8266 Anda berfungsi:

```cpp
void setup() {
  pinMode(D4, OUTPUT); // Mengatur pin D4 sebagai output
}

void loop() {
  digitalWrite(D4, LOW);  // LED Nyala (Aktif Low pada beberapa board)
  delay(1000);            // Tunggu 1 detik
  digitalWrite(D4, HIGH); // LED Mati
  delay(1000);            // Tunggu 1 detik
}