#ifndef ALGORITHMEQUICHERCHEUNEISSUE_H_INCLUDED
#define ALGORITHMEQUICHERCHEUNEISSUE_H_INCLUDED

boolean VoieLibre()
{
  digitalWrite(DOUT_ULTRASONIC_TRIG, LOW);
  delayMicroseconds(2); 
  digitalWrite(DOUT_ULTRASONIC_TRIG, HIGH);
  delayMicroseconds(4);
  digitalWrite(DOUT_ULTRASONIC_TRIG, LOW);

  distanceMes = pulseIn(DIN_ULTRASONIC_ECHO, HIGH) / 58;

  if(Distance < distanceMes)
  {return true;}
  else
  {return false;}
}



void ChercheUneDeviation()
{
  Arret();
 
  ChercheUneDeviationAGauche();
 if(VoieLibre())
 {
   tournerAGauche();

 }
 else
 {
   ChercheUneDeviationADroite();
   if(VoieLibre())
   {
      tournerADroite();
   
   }
   else
   {
      DemiTour();
   
   }
 }
}

#endif 
