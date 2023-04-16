#include<SPI.h>
#include <nRF24L01.h>
#include<RF24.h>
#include<stdio.h>

// create the radio object 
RF24 radio(9,10);

const byte Receiver_Address[6] = "00001";
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
radio.begin();
radio.openReadingPipe(0,Receiver_Address);
// radio.setPALevel(RF24_PA_MIN);
radio.startListening();

}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(radio.available());
if(radio.available())
{
int moisture_level;
radio.read(&moisture_level,sizeof(moisture_level));
Serial.println(moisture_level);
Serial.println("moisture_level received");
}else if(!radio.available())
{
Serial.println("None received");
delay(3000);
}
}