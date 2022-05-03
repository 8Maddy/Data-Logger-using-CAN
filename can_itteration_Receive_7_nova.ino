//URAT Slave
#include <SPI.h>
#include <LiquidCrystal_I2C.h>
#include <Wire.h> 
LiquidCrystal_I2C lcd(0x27,20,4);  // set the LCD address to 0x27 after finding it from serial monitor (see comment above) for a 16 chars and 2 line display


// initializing the variables
float Speed = 0;
float Voltage = 0;
float CT = 0;
float MT = 0;
float Range = 0;
float RPM = 0;
float current = 0;
float Throttle = 0;
float X1 = 0;
float REV = 0;
float m = 0;
char inChar;

//unsigned long previousMillis = 0;
//const long interval = 3000;

void setup()
{
  Serial.begin(115200);
  //For LCD
  lcd.init();                      // initialize the lcd 
  lcd.init(); 
  // Print a message to the LCD.
  lcd.backlight();
  lcd.setBacklight(HIGH);
}

void loop()
{
  while (Serial.available() > 0)
  {
    // wait until the serial reading encounters character 'a'
    // this marks the beginning of data
    inChar = Serial.read();
    if (inChar == 'a')
    {
      Speed = Serial.parseFloat();
    }
    // when character 'a' is encountered, read the floating data till the next character
    
    // run if the next character is 'b' (it will always be 'b', unless someone messes with the sender code)
    if (inChar == 'b')
    {
      // read floating value till  next character
      RPM = Serial.parseFloat();
    }
        if (inChar == 'c')
    {
      // read floating value till next character
      MT = Serial.parseFloat();
    }
        if (inChar == 'd')
    {
      // read floating value till next character
      CT = Serial.parseFloat();
    }
       if (inChar == 'e')
    {
      // read floating value till next character
      Voltage = Serial.parseFloat();
    }
       if (inChar == 'f')
    {
      // read floating value till next character
      current = Serial.parseFloat();
    }
       if (inChar == 'h')
    {
      // read floating value till next character
      Throttle = Serial.parseFloat();
    }
       if (inChar == 'i')
    {
      // read floating value till next character
      X1 = Serial.parseFloat();
    }
       if (inChar == 'j')
    {
      // read floating value till next character
      REV = Serial.parseFloat();
    }
       if (inChar == 'k')
    {
      // read floating value till next character
      m = Serial.parseFloat();
    }
       if (inChar == 'l')
    {
      // read floating value till next character
      Range = Serial.parseFloat();
    }
    // break out of the loop once character 'e' is encountered
    if (inChar == 'm')
    {
    
     Serial.print("Speed: ");
     Serial.print(Speed);
     Serial.print(" ");
     Serial.print("RPM: ");
     Serial.print(RPM);
     Serial.print(" ");  
     Serial.print("M.T: ");
     Serial.print(MT); 
     Serial.print(" "); 
     Serial.print("C.T: ");
     Serial.print(CT); 
     Serial.print(" ");
     Serial.print("Voltage: ");
     Serial.print(Voltage);
     Serial.print(" ");
     Serial.print("Current: ");
     Serial.print(current);
     Serial.print(" ");
     Serial.print("Throttle: ");
     Serial.print(Throttle);
     Serial.print(" "); 
     Serial.print("X1: ");
     Serial.print(X1);
     Serial.print(" "); 
     Serial.print("REV: ");
     Serial.print(REV,5);
     Serial.print(" ");
     Serial.print("m: ");
     Serial.print(m);
     Serial.print(" ");     
     Serial.print("Range: ");
     Serial.print(Range,5);
     Serial.println(" ");  
   

 lcd.clear();
 lcd.setCursor(0,0);
    lcd.print("Speed  :");
    lcd.print(Speed,0);
    lcd.setCursor(12,0);
    lcd.print("Kmph");

    lcd.setCursor(0,1);
    lcd.print("Voltage:");
    lcd.print(Voltage);
    lcd.setCursor(13,1);
    lcd.print("V");
    
    lcd.setCursor(-4,2);
    lcd.print("Current:");
    lcd.print(current);
    lcd.setCursor(9,2);
    lcd.print("A");
    
    lcd.setCursor(-4,3);
    lcd.print("Range  :");
    lcd.print(Range);
    lcd.setCursor(9,3);
    lcd.print("Km");

    delay(100);
    }
  }
}
