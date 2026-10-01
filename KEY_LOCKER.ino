#include <LiquidCrystal.h>
LiquidCrystal lcd(A5, A4, A3, A2, A1, A0);
const byte COLS = 3;
const byte ROWS = 4;

String correctPIN = "1234";
String enteredPIN = "";

int keys[ROWS][COLS] = {

  { 1, 2, 3 },
  { 4, 5, 6 },
  { 7, 8, 9 },
  { 10, 0, 11 }
};

byte rowPins[ROWS] = { 5, 4, 3, 2 };
byte colPins[COLS] = { 6, 7, 8 };

int getKeypad() {

  for (int c = 0; c < COLS; c++) {
    digitalWrite(colPins[c], 0);
    delay(1);
    for (int r = 0; r < ROWS; r++) {
      if (digitalRead(rowPins[r]) == 0) {
        while (digitalRead(rowPins[r]) == 0);
        return keys[r][c];
      }
    }
    delay(1);
    digitalWrite(colPins[c], 1);
    delay(1);
  }
  return -1;
}

void setup() {
  lcd.begin(16, 2);
  for (int r = 0; r < ROWS; r++) {
    pinMode(rowPins[r], INPUT_PULLUP);
    delay(1);
  }
  for (int c = 0; c < COLS; c++) {

    pinMode(colPins[c], OUTPUT);
    delay(1);
    digitalWrite(colPins[c], 1);
    delay(1);
  }
}

void loop() {
  int Key = getKeypad();
  if (Key != -1) {

    if(Key>=0 && Key<=9){
      enteredPIN += String(Key);
      lcd.print("*"); 
    }

    else if(Key==10){
  
      enteredPIN="";
      lcd.clear();
      lcd.print("ENTER PIN:");
    }
    
    else if(Key==11){

      if(enteredPIN== correctPIN){
        lcd.clear();
        lcd.print("UNLOCKED SUCCESSFULLY");
      }

      else{

        lcd.clear();
        lcd.print("WRONG PIN");
      }
      delay(1500);
      enteredPIN="";
      lcd.clear();
      lcd.print("ENTER PIN:");
    }
  }
}
