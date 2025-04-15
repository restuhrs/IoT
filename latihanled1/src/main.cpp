#include <Arduino.h>  // Wajib untuk PlatformIO + ESP32

// Deklarasi pin LED
int lampu_hijau = 0;
int lampu_kuning = 2;
int lampu_merah = 15;

void setup() {
    Serial.begin(115200);  // Inisialisasi komunikasi Serial
    Serial.println("ESP32 Blinking LED Bergantian");

    // Atur pin sebagai OUTPUT
    pinMode(lampu_hijau, OUTPUT);
    pinMode(lampu_kuning, OUTPUT);
    pinMode(lampu_merah, OUTPUT);
}

void loop() {
    // Nyalakan lampu pertama
    digitalWrite(lampu_hijau, HIGH);
    digitalWrite(lampu_kuning, LOW);
    digitalWrite(lampu_merah, LOW);
    Serial.println("Lampu 1 ON");
    delay(2000); //lampu nyala setiap 2 detik
    
    // Nyalakan lampu kedua
    digitalWrite(lampu_hijau, LOW);
    digitalWrite(lampu_kuning, HIGH);
    digitalWrite(lampu_merah, LOW);
    Serial.println("Lampu 2 ON");
    delay(2000);
    
    // Nyalakan lampu ketiga
    digitalWrite(lampu_hijau, LOW);
    digitalWrite(lampu_kuning, LOW);
    digitalWrite(lampu_merah, HIGH);
    Serial.println("Lampu 3 ON");
    delay(2000);
}
