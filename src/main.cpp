#include <Arduino.h>
#include <LiquidCrystal.h>
//ESTE DE CIMA É A BIBLIOTECA PARA FAZER O FUNCIONAMENTO DO  
//DISPLAY MAIS VAMOS PRECISAR DE OUTRAN QUANDO A GENTE USAR 
//O DISPLAT QUE TEM A CUMINACÇÃO SERIAL "QUE É O COM A PLAQUINHA ATRAS"

// DEFINIÇÃO DOS PINOS QUE ESTA CONECTADO NO ARDUINO PARA A BIBLIOTECA 

LiquidCrystal lcd(13, 12, 11, 10, 9, 8);

void setup() {
  lcd.begin(16, 2);
   
  lcd.setCursor(0, 1);
  lcd.print("LIGANDO SISTEMA");
  delay(400);
  
  lcd.setCursor(0, 0);
  lcd.print("##############");
  delay(400);
  
  lcd.setCursor(0, 0);
  lcd.print("############# ");
  delay(400);
  
  lcd.setCursor(0, 0);
  lcd.print("############  ");
  delay(400);
  
  lcd.setCursor(0, 0);
  lcd.print("###########   ");
  delay(400);
  
  lcd.setCursor(0, 0);
  lcd.print("##########    ");
  delay(400);
  
  lcd.setCursor(0, 0);
  lcd.print("#########     ");
  delay(400);
  
  lcd.setCursor(0, 0);
  lcd.print("########      ");
  delay(400);
  
  lcd.setCursor(0, 0);
  lcd.print("#######       ");
  delay(400);
  
  lcd.setCursor(0, 0);
  lcd.print("######        ");
  delay(400);
  
  lcd.setCursor(0, 0);
  lcd.print("#####         ");
  delay(400);
  
  lcd.setCursor(0, 0);
  lcd.print("####          ");
  delay(400);
  
  lcd.setCursor(0, 0);
  lcd.print("###           ");
  delay(400);
  
  lcd.setCursor(0, 0);
  lcd.print("##         ");
  delay(400);
  
  lcd.setCursor(0,0);
  lcd.print("#          ");
  delay(400);
  
  
  
}

void loop() {
  
  
  
}
 