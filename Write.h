#ifndef WRITE_H
#define WRITE_H

#include "LedControl.h"


  /* here is the data for the characters */

//  byte d[5]={B00011100,B00100010,B00100010,B00010010,B11111110};
//  byte u[5]={B00111100,B00000010,B00000010,B00000100,B00111110};
//  byte i[5]={B00000000,B00100010,B10111110,B00000010,B00000000};
//  byte n[5]={B00111110,B00010000,B00100000,B00100000,B00011110};
//  byte o[5]={B00011100,B00100010,B00100010,B00100010,B00011100};

void writeLetter(LedControl *lc, byte *letter);

void writeDemo(LedControl *lc);

#endif // WRITE_H


