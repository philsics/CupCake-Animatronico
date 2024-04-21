// Codigo CupCake Animatrónico

#include <Servo.h> 

Servo ojo; //Servomotor que controla los ojos
Servo boca;  //Servomotor que controla la boca
int pos = 90; //Ángulo inicial
int pulsador = 7; //Pin del bóton usado para iniciar los movimientos
int estado=0; // Estado inicial del botón, comienza en estado 0
int vela=4; //Pin del led asociado a la vela
int izq=5; //Pin asociado al ojo izquierdo
int der=6; //Pin asociado al ojo derecho

void setup()
{ 
pinMode(vela, OUTPUT);  //Configura el pin de la vela como salida
pinMode(izq, OUTPUT);  //Configura el pin del ojo izquierdo como salida
pinMode(der, OUTPUT);  //Configura el pin del ojo derecho como salida
pinMode(pulsador, INPUT);  //Configura el pin del botón como entrada
ojo.attach(2); // Adjunta el objeto servo de los ojos en el pin 2
boca.attach(3); // Adjunta el objeto servo de los ojos en el pin 3
pos = (90); //Redunda posición al iniciar
ojo.write(pos); // Configura al servo de los ojos para encontrarse
                //En la posición inicial
boca.write(pos); // Configura al servo de la boca para encontrarse
                //En la posición inicial
delay(1000); //Tiempo de retraso
}


void loop()
{

  digitalWrite(vela, LOW); //Establece la salida del led de la vela
  digitalWrite(izq, LOW); //Establece la salida del led de los ojos
  digitalWrite(der, LOW);  //Establece la salida del led de la boca
  delay(100); //Tiempo de retraso


  estado = digitalRead(pulsador); //Lectura del estado
  if (estado == 1) {     

  
    digitalWrite(vela, HIGH); //Secuencia de luces 1
    digitalWrite(izq, LOW);  
    digitalWrite(der, LOW); 
    delay(500);  //Retraso
    digitalWrite(vela, LOW); //Secuencia de luces 2
    digitalWrite(izq, HIGH); 
    digitalWrite(der, HIGH); 
    delay(500);  //Retraso
    digitalWrite(vela, HIGH); //Secuencia de luces 3
    digitalWrite(izq, LOW);
    digitalWrite(der, HIGH);
    delay(500);  //Retraso
    digitalWrite(vela, HIGH); //Secuencia de luces 4
    digitalWrite(izq, HIGH);
    digitalWrite(der, LOW);
    delay(500);  //Retraso
     
    digitalWrite(vela, HIGH); //Secuencia de luces 5
    digitalWrite(izq, HIGH);
    digitalWrite(der, HIGH);
    pos = (80); //Cambio de posición ojos
    ojo.write(pos);
    pos = (120);
    boca.write(pos); //Cambio de posición boca
    delay (1000);

    digitalWrite(vela, HIGH); //Secuencia de luces 6
    digitalWrite(izq, HIGH);
    digitalWrite(der, HIGH);
    pos = (110); //Cambio de posición de ojos y boca
    ojo.write(pos);
    boca.write(pos);
    delay (800); //Retraso

    digitalWrite(vela, HIGH); //Secuencia de luces 6
    digitalWrite(izq, HIGH);
    digitalWrite(der, HIGH);
    pos = (130); //Cambio de posición de ojos y boca
    ojo.write(pos);
    boca.write(pos);
    delay (800); //Retraso

    digitalWrite(vela, HIGH); //Secuencia de luces 7 
    digitalWrite(izq, HIGH);
    digitalWrite(der, HIGH);
    pos = (65); //Cambio de posición en los ojos
    ojo.write(pos);
    pos = (110); //Cambio de posición de la boca
    boca.write(pos);
    delay (800); //Retraso

    pos = (130); //Cambio de posición de ojos y boca
    ojo.write(pos);
    boca.write(pos);
    delay (800); //Retraso

    pos = (65); //Cambio de la posición de los ojos
    ojo.write(pos);
    pos = (110); //Cambio de posición de la boca
    boca.write(pos);
    delay (800); //Retraso

    pos = (135); //Cambio de la posición de los ojos
    ojo.write(pos);
    pos = (60);//Cambio de posición de la boca
    boca.write(pos);
    delay (800); //Retraso
  }
  
 
}
 
