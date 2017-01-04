#include "Write.h"

void writeLetter(LedControl *lc, byte *letter)
{
  for(int i = 0; i < 8; i++)
  {
    lc->setRow(0,i,letter[i]);
  }
  
  delay(300);
}

void writeDemo(LedControl *lc)
{
  byte _blank[8]={B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000};
  
  byte _F[8]={B00000000,B00000000,B10001000,B10001000,B10001000,B11111111,B00000000,B00000000};
  byte _c[8]={B00000000,B00000000,B00010010,B00010010,B00010010,B00001100,B00000000,B00000000};
  byte _k[8]={B00000000,B00000000,B00000010,B00010100,B00001000,B01111110,B00000000,B00000000};
  byte _o[8]={B00000000,B00001100,B00010010,B00010010,B00010010,B00001100,B00000000,B00000000};
  byte _u[8]={B00000000,B00000000,B00011110,B00000010,B00000010,B00011100,B00000000,B00000000};
  byte _y[8]={B00000000,B00000000,B00011110,B00000101,B00000101,B00011001,B00000000,B00000000};
  
  writeLetter(lc, _F);
  writeLetter(lc, _u);
  writeLetter(lc, _c);
  writeLetter(lc, _k);
  writeLetter(lc, _blank);
  writeLetter(lc, _blank);
  writeLetter(lc, _y);
  writeLetter(lc, _o);
  writeLetter(lc, _u);
  writeLetter(lc, _blank);
  writeLetter(lc, _blank);
  writeLetter(lc, _blank);
}
