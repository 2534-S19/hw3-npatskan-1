/*
 * GPIO.c
 *
 *  Created on:3/5/20
 *      Author:Nathan Patskan
 */

// For the code you place here, you may use your code that uses register references.
// However, I encourage you to start using the Driver Library as soon as possible.

#include <ti/devices/msp432p4xx/driverlib/driverlib.h>
#include "myGPIO.h"

// TODO: Create a function to initialize the GPIO.
// Even though this assignment does not use all of the pushbuttons, you should write one function that does a complete GPIO init.
void initGPIO()
{
    // Launchpad S1
    P1DIR = P1DIR & ~LaunchPad_S1;
    P1REN = P1REN | LaunchPad_S1;
    P1OUT = P1OUT | LaunchPad_S1;

    // Launchpad S2
    P1DIR = P1DIR & ~LaunchPad_S2;
    P1REN = P1REN | LaunchPad_S2;
    P1OUT = P1OUT | LaunchPad_S2;

    // Boosterpack S1
    P5DIR = P5DIR & ~Booster_S1;
    P5REN = P5REN | Booster_S1;
    P5OUT = P5OUT | Booster_S1;

    // Boosterpack S2
    P3DIR = P3DIR & ~Booster_S2;
    P3REN = P3REN | Booster_S2;
    P3OUT = P3OUT | Booster_S2;

    // Launchpad LED1
    P1DIR = P1DIR | LED1;

    // Launchpad LED2 Red
    P2DIR = P2DIR | LED2_Red;

    // Launchpad LED2 Green
    P2DIR = P2DIR | LED2_Green;

    // Launchpad LED2 Blue
    P2DIR = P2DIR | LED2_Blue;


    // Boosterpack LED Red
    P2DIR = P2DIR | BLED_Red;

    // Boosterpack LED Green
    P2DIR = P2DIR | BLED_Green;

    // Boosterpack LED Blue
    P5DIR = P5DIR | BLED_Blue;

    // Turn off all LEDs at the start.
    P1OUT &= ~LED1;
    P1OUT &= ~LED2_Red;
    P1OUT &= ~LED2_Green;
    P1OUT &= ~LED2_Blue;
    P1OUT &= ~BLED_Red;
    P1OUT &= ~BLED_Green;
    P1OUT &= ~BLED_Blue;
}

// TODO: Create a function to return the status of Launchpad Pushbutton S1
unsigned char checkStatus_LaunchpadS1()
{
  return P1IN & LaunchPad_S1;
}

// TODO: Create a function to return the status of Launchpad Pushbutton S2
unsigned char checkStatus_LaunchpadS2()
{
    return P1IN & LaunchPad_S2;
}

// TODO: Create a function to return the status of Boosterpack Pushbutton S1
unsigned char checkStatus_BoosterpackS1()
{
    return P5IN & Booster_S1;
}

// TODO: Create a function to return the status of Boosterpack Pushbutton S2
unsigned char checkStatus_BoosterpackS2()
{
    return P3IN & Booster_S2;
}

// TODO: Create a function to turn on Launchpad LED1.
void turnOn_LaunchpadLED1()
{
    P1OUT |= LED1;
}

// TODO: Create a function to turn off Launchpad LED1.
void turnOff_LaunchpadLED1()
{
    P1OUT &= ~LED1;
}

// TODO: Create a function to turn on the Red Launchpad LED2.
void turnOn_LaunchpadLED2Red()
{
    P2OUT |= LED2_Red;
}

// TODO: Create a function to turn off the Red Launchpad LED2.
void turnOff_LaunchpadLED2Red()
{
    P2OUT &= ~LED2_Red;
}

// TODO: Create a function to turn on the Green Launchpad LED2.
void turnOn_LaunchpadLED2Green()
{
    P2OUT |= LED2_Green;
}

// TODO: Create a function to turn off the Green Launchpad LED2.
void turnOff_LaunchpadLED2Green()
{
    P2OUT &= ~LED2_Green;
}

// TODO: Create a function to turn on the Blue Launchpad LED2.
void turnOn_LaunchpadLED2Blue()
{
    P2OUT |= LED2_Blue;
}

// TODO: Create a function to turn off the Blue Launchpad LED2.
void turnOff_LaunchpadLED2Blue()
{
    P2OUT &= ~LED2_Blue;
}

// TODO: Create a function to turn on the Red Boosterpack LED2.
void turnOn_BoosterpackLEDRed()
{
    P2OUT |= BLED_Red;
}

// TODO: Create a function to turn off the Red Boosterpack LED2.
void turnOff_BoosterpackLEDRed()
{
    P2OUT &= ~BLED_Red;
}

// TODO: Create a function to turn on the Green Boosterpack LED2.
void turnOn_BoosterpackLEDGreen()
{
    P2OUT |= BLED_Green;
}

// TODO: Create a function to turn off the Green Boosterpack LED2.
void turnOff_BoosterpackLEDGreen()
{
    P2OUT &= ~BLED_Green;
}

// TODO: Create a function to turn on the Blue Boosterpack LED2.
void turnOn_BoosterpackLEDBlue()
{
    P5OUT |= BLED_Blue;
}

// TODO: Create a function to turn off the Green Boosterpack LED2.
void turnOff_BoosterpackLEDBlue()
{
    P5OUT &= ~BLED_Blue;
}
