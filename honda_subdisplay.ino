#include "navi_subdisplay.h"

NaviSubDisplay subDisplay;

void setup() {
  subDisplay.begin();               // initialize sub display
}

void loop() {
  subDisplay.clear();               // clear previous values, important

  subDisplay.clock(10, 0, true);    // set clock, first value for hours, from 0 to 23, second for minutes from 0 to 59, third is to show or not colons on clock
  subDisplay.setClimatTemp(0, 1);   // receive values from 0 which means Lo to 17 which means Hi. Each increment is the next value. Available values - Lo, 16 - 31 degree and High
  
  subDisplay.text("HELLO");         // Render text on display, not all symbols available
  subDisplay.render();              // render function

}
