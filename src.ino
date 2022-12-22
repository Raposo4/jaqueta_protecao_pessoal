#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#define PIN_WIRE_SDA (4)
#define PIN_WIRE_SCL (5)

static const uint8_t SDA = PIN_WIRE_SDA;
static const uint8_t SCL = PIN_WIRE_SCL;

#ifndef LED_BUILTIN
#define LED_BUILTIN 2
#endif
#define LED_BUILTIN_AUX 16

static const uint8_t D2   = 4;
static const uint8_t D3   = 0;
static const uint8_t D8   = 2;
static const uint8_t D7   = 13;
static const uint8_t D8   = 15;
static const uint8_t RX  = 3;
static const uint8_t TX  = 1;

#include "../generic/common.h"

#endif /* Pins_Arduino_h */

#include <WiFiUdp.h>
#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>

#define WIFI_SSID "Leandro"
#define WIFI_PASSWORD "Lizandro"

const String YOUR_PHONE = "557199921446"; //Without +
const String YOUR_WP_APIKEY = "51570805"; //Your API KEY
const String URL_WP = "http://api.whatabot.net/whatsapp/sendMessage?text=";

void wifiConnect() {
  Serial.begin(9600);
  WiFi.mode(WIFI_STA);
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);  // Connect to the network
  Serial.print("Connecting to ");
  Serial.print(WIFI_SSID);
  Serial.println(" ...");
  byte teller = 0;
  while (WiFi.status() != WL_CONNECTED) {  // Wait for the Wi-Fi to connect
    delay(1000);
    Serial.print(++teller);
    Serial.print(' ');
    if (teller % 40 == 0) {
      teller = 0;
      Serial.println();
    }
  }
  Serial.println('\n'); 
  Serial.println("Connection established");
  Serial.print("IP address: \t");
  Serial.println(WiFi.localIP());
}

void sendWhatsapp(String text) {
  WiFiClient client;
  HTTPClient https;
  String url = URL_WP + text + "&apikey=" + YOUR_WP_APIKEY + "&phone=" + YOUR_PHONE;
  Serial.println(url);
  https.begin(client, url);
  int httpCode = https.GET();
  https.end();
}

int sinal = 1;
int count = 0;
int timing = 5000;

void setup() {
  wifiConnect();
  sendWhatsapp("Conexão estabelecida");
  pinMode(4, OUTPUT);
  pinMode(0,INPUT);
  pinMode(15,OUTPUT);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  //Serial.println(digitalRead(0));
  sinal = digitalRead(0);
  if(sinal == 0){
    tone(15, 4500, timing);
    digitalWrite(4,HIGH);
    delay(1000);    
    digitalWrite(4,LOW);
    delay(1000);    
    digitalWrite(4,HIGH);
    delay(1000);
    digitalWrite(4,LOW);
    delay(1000);
    digitalWrite(4,HIGH);
    delay(1000);
    digitalWrite(4,LOW);
    sendWhatsapp("Mensagem de x pessoa: Por favor, ajuda");
    delay(timing);
  }else{
    digitalWrite(4,LOW);
  }
  Serial.println(sinal);
 }
