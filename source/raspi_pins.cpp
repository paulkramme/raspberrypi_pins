#include<iostream>
//wiringPi Library can be optained from wiringpi.com
//PROGRAM HAS TO BE COMPILED WITH -lwiringPi FLAG!
#include<wiringPi.h>

//Pin definitions. Not nessesary, but good to have.
//WARNING! USES wiringPi PIN NUMBERS!
#define PIN1 1
#define PIN2 2
#define PIN3 3
#define PIN4 4

//Delay definition in Milliseconds. Not nessesary, but good to have.
#define standart_delay 2000

int main()
{
     //Sets up wiringPi
     wiringPiSetup();
     //Sets pin mode. Possible modes are OUTPUT, INPUT, PWM_OUTPUT and GPIO_CLOCK
     pinMode(PIN1, OUTPUT);
     pinMode(PIN2, OUTPUT);
     pinMode(PIN3, OUTPUT);
     pinMode(PIN4, OUTPUT);

     std::cout << "TESTING PIN1" << std::endl;
     //Sets the PIN to eather HIGH(1, true) or LOW(0, false)
     digitalWrite(PIN1, HIGH);
     delay(standart_delay);
     digitalWrite(PIN1, LOW);

     digitalWrite(PIN2, HIGH);
     delay(standart_delay);
     digitalWrite(PIN2, LOW);

     digitalWrite(PIN3, HIGH);
     delay(standart_delay);
     digitalWrite(PIN3, LOW);

     digitalWrite(PIN4, HIGH);
     delay(standart_delay);
     digitalWrite(PIN4, LOW);

     return 0;
}
