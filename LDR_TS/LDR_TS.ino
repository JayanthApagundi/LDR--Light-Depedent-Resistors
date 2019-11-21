#include <ESP8266WiFi.h>;
#include <WiFiClient.h>;
#include <ThingSpeak.h>;
const char* ssid = "JioFi2_12C19E"; //Your Network SSID
const char* password = "ihmi9en3bd"; //Your Network Password
int val;
int LDRpin = A0; //LDR Pin Connected at A0 Pin 
WiFiClient client;
unsigned long myChannelNumber = 883762; //Your Channel Number (Without Brackets)
const char * myWriteAPIKey = "7EP9B29LW697YEGB"; //Your Write API Key
void setup()
{
Serial.begin(9600);
delay(10);
WiFi.begin(ssid, password); // Connect to WiFi network
ThingSpeak.begin(client);
}
void loop()
{
val = analogRead(LDRpin); //Read Analog values and Store in val variable
Serial.print(val); //Print on Serial Monitor
delay(1000);
ThingSpeak.writeField(myChannelNumber, 1,val, myWriteAPIKey); //Update in ThingSpeak
delay(100);
}
