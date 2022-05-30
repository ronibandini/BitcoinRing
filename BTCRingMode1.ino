// Attiny85 Crypto Ring
// Mode #1 Plain Pr Key 
// Version 0.1
// Roni Bandini @RoniBandini
// May 25 2022 Buenos Aires, Argentina
// MIT License
// ASCII Art based on Quarter by Joan G. Stark

#include "DigiKeyboard.h"

void setup() {

  // on board led
  pinMode(1, OUTPUT);

  DigiKeyboard.delay(5000); 
  
  // turn on led              
  digitalWrite(1, HIGH); 
  
  DigiKeyboard.sendKeyStroke(0);            
  DigiKeyboard.println("        _.-'~~`~~'-._");       
  DigiKeyboard.println("     .'`  B   E   R  `-.");   
  DigiKeyboard.println("    / I               T \ "); 
  DigiKeyboard.println("  /        .-`~*-.        \ "); 
  DigiKeyboard.println(" ; L      / `-    \      Y ;"); 
  DigiKeyboard.println(";        />  `.  -.|        ;"); 
  DigiKeyboard.println("|       /_     '-.__)       |");   
  DigiKeyboard.println("|        |-  _.' \ |        |"); 
  DigiKeyboard.println(";        `~~;     \\        ;"); 
  DigiKeyboard.println(" ;  BTC WE  /      \\)P    ;"); 
  DigiKeyboard.println(" `   TRUST '.___.-'`#     /");      
  
  // split private key in 3 lines, up to 18 chars each
  DigiKeyboard.println("XXXXXXXXXXXXXXXXX"); 
  DigiKeyboard.println("XXXXXXXXXXXXXXXXX");  
  DigiKeyboard.println("XXXXXXXXXXXXXXXXX");  
  
  // turn off led  
  digitalWrite(1, LOW);
      
}


void loop() {
    

}
