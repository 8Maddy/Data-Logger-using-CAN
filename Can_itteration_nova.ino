#include <SoftwareSerial.h>
#include <SPI.h>
#include <SD.h>
#include <mcp2515.h>
#include <LiquidCrystal_I2C.h> // LCD library using from  https://www.ardumotive.com/i2clcden.html for the i2c LCD library 
#include <Wire.h> 

struct can_frame canMsg;
MCP2515 mcp2515(10);
const int chipSelect = 4;
LiquidCrystal_I2C lcd(0x27,20,4);  // set the LCD address to 0x27 after finding it from serial monitor (see comment above) for a 16 chars and 2 line display

int DC_Voltage_LSB = 0b00000000;
int DC_Voltage_MSB = 0b00000000;
int DC_Current_LSB = 0b00000000;
int DC_Current_MSB = 0b00000000;
int Throttle_Percent_LSB=0;
int Throttle_Percent_MSB=0;
int Motor_RPM_LSB = 0;
int Motor_RPM_MSB = 0;
int Motor_Temperature_LSB = 0;
int Controller_Temperature_MSB = 0;
int Subtotal_LSB =0;
int Subtotal_MSB =0;

int X=0;
int X1=0;
int Y=0;
int m=0;
int flag = 1;
int REV = 0;
float Range = 0;
int kmph=0;
int RPM=0;
int MT=0;
int CT=0;
float Voltage=0;
float current=0;
int Throttle=0;

SoftwareSerial BluetoothSerial(0, 1);

void setup()
{
  Serial.begin(115200);  
}

void loop(){

Serial.println('a'); 
Serial.println("11");
Serial.println('b');
Serial.println("22");
Serial.println('c');
Serial.println("33");
Serial.println('d');
Serial.println("44");
Serial.println('e');
Serial.println("55");
Serial.println('f');
Serial.println("66");
Serial.println('h');
Serial.println("77");
Serial.println('i');
Serial.println("88");
Serial.println('j');
Serial.println("99");
Serial.println('k');
Serial.println("100");
Serial.println('l');
Serial.println("110");
Serial.println('m');
}
