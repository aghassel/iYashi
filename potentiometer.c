#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Servo.h> 

Servo myServo;
int POT = A4;
int output, angle;

void setup()
{
  myServo.attach(3);
  pinMode(POT, INPUT);
  Serial.begin(9600);
}

int readPot(){
  int curr;
  if(curr != output){
    output = analogRead(POT);
    curr = output;
  }
  return curr;
}

void mapServo(int pos){
  int curr;
  angle = map(pos, 0, 1023, 0, 180);
  delay(50);
}