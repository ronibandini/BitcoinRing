// Attiny85 Crypto Ring
// Mode #2 Obfuscated keys
// Version 0.1
// Roni Bandini @RoniBandini
// May 25 2022 Buenos Aires, Argentina
// MIT License

#include "DigiKeyboard.h"

int x=0;
// used for obfuscation, you can change it by a random string
char bb[] = {"QwErTyUiOpAsDfGhJkLzXcVbNm"};
static int myRandom;

// Replace by your pr and pub keys
static String pubKey  ="XXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
static String prKey   ="XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
  
void setup() {

  randomSeed(analogRead(1));
  myRandom=random(4, 12);

  pinMode(1, OUTPUT);
 
  DigiKeyboard.delay(5000); 
         
  x=0;
  
  announce();
    
  DigiKeyboard.sendKeyStroke(0);   
  DigiKeyboard.println("BTC Attiny85 Ring v0.1");                             
  
  // print public key   
  noiseChars();
  DigiKeyboard.print(pubKey);    
  noiseChars();   
  
  DigiKeyboard.println("");
    
  // print private key   
  noiseChars();
  DigiKeyboard.print(prKey);
  noiseChars();   
         
  
}

void noiseChars(){
   // add noise chars
    x=0;
    while (x<myRandom){
      DigiKeyboard.print(bb[random(0, 25)]);
     x++;
    }
}

void announce(){
    // announce # of noise chars using led 
    while (x<myRandom){
      digitalWrite(1, HIGH); 
      DigiKeyboard.delay(300);
      digitalWrite(1, LOW);  
      DigiKeyboard.delay(300);
      x++;      
      }  
}

void loop() {
    

}
