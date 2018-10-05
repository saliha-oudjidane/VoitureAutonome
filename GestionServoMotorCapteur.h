#ifndef DRIVERSERVO_H_INCLUDED
#define DRIVERSERVO_H_INCLUDED


#define ANGLE_RIGHT_HALF 60
#define ANGLE_LEFT_HALF  50
#define ANGLE_SERVO1_MIDDLE 85

Servo SERVO;
Servo SERVO1;


/***************Servo regarde en face **********************/


void RegardertoutDroit()
{
  SERVO.write(PositiontoutDroit);
   
  delay(DureeRotationPostionnementServo);
}

/****************Servo regarde à gauche**********************/

void RegarderAGauche()
{
 SERVO.write(PositionaGauche);

  delay(DureeRotationPostionnementServo);
}

/***********Servo regarde à droite******************/

void RegarderADroite()
{
  SERVO.write(PositionaDroite);
  
  delay(DureeRotationPostionnementServo);
}

/*******************chercher issue à gauche**********************/

void ChercheUneDeviationAGauche()
{
  SERVO.write(PositioncompletementAGauche);

  delay(DureeRotationPostionnementServo);
}

/****************chercher issue à droite********************/

void ChercheUneDeviationADroite()
{
  SERVO.write(PositioncompletementADroite);
  
  delay(DureeRotationPostionnementServo);
}

/******************Avancer en ligne droite************************/


void AvanceEnLigneDroite()
{
   
  digitalWrite(D0UT_MOTEUR_GAUCHE_1,LOW);
  digitalWrite(D0UT_MOTEUR_GAUCHE_2,HIGH);
  digitalWrite(D0UT_MOTEUR_DROIT_3,LOW);
  digitalWrite(D0UT_MOTEUR_DROIT_4,HIGH);

  digitalWrite(DOUT_MOTEUR_GAUCHE_EN,HIGH);
  digitalWrite(DOUT_MOTEUR_DROIT_EN,HIGH);
   SERVO1.attach(SERVO_direction);
  VoitureArretee = false;
 
}

/***************l'arret de la voiture *********************/

void Arret()
{
  digitalWrite(D0UT_MOTEUR_GAUCHE_1,LOW);
  digitalWrite(D0UT_MOTEUR_GAUCHE_2,LOW);
  digitalWrite(D0UT_MOTEUR_DROIT_3,LOW);
  digitalWrite(D0UT_MOTEUR_DROIT_4,LOW);

  digitalWrite(DOUT_MOTEUR_GAUCHE_EN,LOW);
  digitalWrite(DOUT_MOTEUR_DROIT_EN,LOW);

  VoitureArretee = true;

}

/*****************braquer la voiture à gauche *******************/

void tournerAGauche()
{
  digitalWrite(D0UT_MOTEUR_GAUCHE_1,HIGH);
  digitalWrite(D0UT_MOTEUR_GAUCHE_2,LOW);
  digitalWrite(D0UT_MOTEUR_DROIT_3,LOW);
  digitalWrite(D0UT_MOTEUR_DROIT_4,HIGH);

  digitalWrite(DOUT_MOTEUR_GAUCHE_EN,HIGH);
  digitalWrite(DOUT_MOTEUR_DROIT_EN,HIGH);
  SERVO1.attach(SERVO_direction);

  delay(dureePivoter);

 digitalWrite(DOUT_MOTEUR_GAUCHE_EN,LOW);
 digitalWrite(DOUT_MOTEUR_DROIT_EN,LOW);

  digitalWrite(D0UT_MOTEUR_GAUCHE_1,LOW);
  digitalWrite(D0UT_MOTEUR_GAUCHE_2,LOW);
  digitalWrite(D0UT_MOTEUR_DROIT_3,LOW);
  digitalWrite(D0UT_MOTEUR_DROIT_4,LOW);

  VoitureArretee = true;

}

/**************braquer à droite ****************************/

void tournerADroite()
{
  digitalWrite(D0UT_MOTEUR_GAUCHE_1,LOW);
  digitalWrite(D0UT_MOTEUR_GAUCHE_2,HIGH);
  digitalWrite(D0UT_MOTEUR_DROIT_3,HIGH);
  digitalWrite(D0UT_MOTEUR_DROIT_4,LOW);
  
  digitalWrite(DOUT_MOTEUR_GAUCHE_EN,HIGH);
  digitalWrite(DOUT_MOTEUR_DROIT_EN,HIGH);
  SERVO1.attach(SERVO_direction);
  delay(dureePivoter);
  

  digitalWrite(DOUT_MOTEUR_GAUCHE_EN,LOW);
  digitalWrite(DOUT_MOTEUR_DROIT_EN,LOW);


  digitalWrite(D0UT_MOTEUR_GAUCHE_1,LOW);
  digitalWrite(D0UT_MOTEUR_GAUCHE_2,LOW);
  digitalWrite(D0UT_MOTEUR_DROIT_3,LOW);
  digitalWrite(D0UT_MOTEUR_DROIT_4,LOW);

  VoitureArretee = true;


}

/*********************retour en arriere*********************************/

void DemiTour()
{  
  digitalWrite(D0UT_MOTEUR_GAUCHE_1,LOW);
  digitalWrite(D0UT_MOTEUR_GAUCHE_2,HIGH);
  digitalWrite(D0UT_MOTEUR_DROIT_3,LOW);
  digitalWrite(D0UT_MOTEUR_DROIT_4,HIGH);
  digitalWrite(DOUT_MOTEUR_GAUCHE_EN,HIGH);
  digitalWrite(DOUT_MOTEUR_DROIT_EN,HIGH);
  
  SERVO1.attach(SERVO_direction, 100,100);
  delay(dureeDemiTour);

  digitalWrite(DOUT_MOTEUR_GAUCHE_EN,LOW);
  digitalWrite(DOUT_MOTEUR_DROIT_EN,LOW);

  digitalWrite(D0UT_MOTEUR_GAUCHE_1,LOW);
  digitalWrite(D0UT_MOTEUR_GAUCHE_2,LOW);
  digitalWrite(D0UT_MOTEUR_DROIT_3,LOW);
  digitalWrite(D0UT_MOTEUR_DROIT_4,LOW);

  VoitureArretee = true;

}


#endif 
