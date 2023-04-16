#include<SPI.h>
#include <nRF24L01.h>
#include<RF24.h>
#include<stdio.h>

// create the radio object 
RF24 radio(9,10);

const byte Transmitter_Address[6] = "00001";
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
radio.begin();
radio.openWritingPipe(Transmitter_Address);
// radio.setPALevel(RF24_PA_MIN);
radio.stopListening();

}

void loop() {
  // put your main code here, to run repeatedly:
    
const int level= 800;

radio.write(&level,sizeof(level));

Serial.println(level);
delay(3000);
}
