#include "HiAnxiety.h"

void paintFrame(LedControl *lc, byte *frame)
{
  for(int i = 0; i < 8; i++)
  {
    lc->setRow(0,i,frame[i]);
  }
  
  delay(70);
}

void paintScene(LedControl *lc)
{
  byte _blank[8]={B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000};
    
  byte _F1[8]={B11111111,B10000001,B10000001,B10000001,B10000001,B10000001,B10000001,B11111111};
  byte _F2[8]={B00000000,B01111110,B01000010,B01000010,B01000010,B01000010,B01111110,B00000000};
  byte _F3[8]={B00000000,B00000000,B00111100,B00100100,B00100100,B00111100,B00000000,B00000000};
  byte _F4[8]={B00000000,B00000000,B00000000,B00011000,B00011000,B00000000,B00000000,B00000000};

  paintFrame(lc, _F1);
  paintFrame(lc, _F2);
  paintFrame(lc, _F3);
  paintFrame(lc, _F4);
  paintFrame(lc, _blank);
    
}

void hiAnxiety(LedControl *lc)
{
  for( int i = 0; i < 20; i++)
    paintScene(lc);
}

