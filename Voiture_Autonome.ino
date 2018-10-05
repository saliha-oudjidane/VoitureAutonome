
#include <Servo.h> 
#include "Arduino.h"
#include "ParametrageVariablesEntreesSorties.h"
#include "GestionServoMotorCapteur.h"
#include "FonctionAlgoNavigationAutonome.h"

/************************* Fonction Principale*************************/
void setup() {
  
    pinMode(D0UT_MOTEUR_GAUCHE_1, OUTPUT);
    digitalWrite(D0UT_MOTEUR_GAUCHE_1,OUTPUT);
    pinMode(D0UT_MOTEUR_GAUCHE_2, OUTPUT);
    digitalWrite(D0UT_MOTEUR_GAUCHE_2,OUTPUT);
    
    pinMode(D0UT_MOTEUR_DROIT_3 , OUTPUT);
    digitalWrite(D0UT_MOTEUR_DROIT_3,OUTPUT);
    pinMode(D0UT_MOTEUR_DROIT_4 , OUTPUT);
    digitalWrite(D0UT_MOTEUR_DROIT_4,OUTPUT);
    
    pinMode(DOUT_ULTRASONIC_TRIG, OUTPUT);
    digitalWrite(DOUT_ULTRASONIC_TRIG,OUTPUT);
    pinMode(DIN_ULTRASONIC_ECHO, INPUT);
    
    digitalWrite(DOUT_MOTEUR_GAUCHE_EN,OUTPUT);
    digitalWrite(DOUT_MOTEUR_DROIT_EN,OUTPUT);
    
    SERVO1.attach(SERVO_direction); 
   
    SERVO.attach(PWM_SERVO); 
     VoieLibre();
  
     /* VoieLibre();
      *  RegarderToutDroit();
*/
 
  
  
  
  }

/************************Execution de l'algo de navigation en boucle infenie *****************************************/

void loop() {  
   if(VoieLibre()){RegardertoutDroit(); 
  
            if(VoieLibre()){RegarderAGauche();
   
                   if(VoieLibre()){RegardertoutDroit();
                                                    
                            if(VoieLibre()){RegarderADroite(); 
                                     if(VoieLibre()){
                                          if(VoitureArretee) {AvanceEnLigneDroite();} }
    else{ChercheUneDeviation();}
    }
            else{ChercheUneDeviation();}
            }     
                   else{ChercheUneDeviation();} 
                   }  
                                   else{ChercheUneDeviation();} 
                                   delay(1);
                                   } }
