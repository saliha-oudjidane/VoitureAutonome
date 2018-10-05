

const char DOUT_MOTEUR_GAUCHE_EN  =  6;
const char DOUT_MOTEUR_DROIT_EN   = 9;
const char D0UT_MOTEUR_GAUCHE_1   = 5;
const char D0UT_MOTEUR_GAUCHE_2   = 7;
const char D0UT_MOTEUR_DROIT_3    = 8;
const char D0UT_MOTEUR_DROIT_4    = 10;
const char DOUT_ULTRASONIC_TRIG   = 2;
const char DIN_ULTRASONIC_ECHO    = 4;
const char PWM_SERVO              = 3;
const char SERVO_direction        = 1;
boolean VoitureArretee     = true;   


int PositiontoutDroit           = 90; //  position tout droit du servo
int PositionaDroite             = 60;  // position à droite du servo
int PositionaGauche             = 120; // position à droite du servo
int PositioncompletementADroite = 45;  //  chercher une issue completement à droite
int PositioncompletementAGauche = 135; // chercher une issue completement à gauche
int DureeRotationPostionnementServo = 200;// Durée attente pour la rotation du servo
int Distance       = 30;  // distance obstacle 30  
int dureePivoter    = 200;   
int dureeDemiTour    = 600;   // Durée  demi-tour en milliseconde  600
int     distanceMes         = 0;      // distance mesurée







