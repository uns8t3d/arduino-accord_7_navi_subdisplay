# arduino-accord_7_navi_subdisplay
Arduino library to interact with Honda Accord 7 Navi sub display

Subdisplay wiring:
Subdisplay comes with 10pin header with next pin out:
1. GND (Connect to Arduino GND)
2. +5V (Connect to Arduino +5V)
3. not used
4. not used
5. CLOCK (Connect to Arduino D13 pin)
6. DATA (Connect to Arduino D11 pin)
7. CE (Connect to Arduino D3 pin)
8. not used
9. Display illuimination -12V (Could be connected separately, controlled by PWM on car to adjust brightness)
10. Display illumination +12V (Could be connected separately)



Usage: Place this lib into arduino/libraries folder or directly to your project folder

Import lib in your sketch:

#include "navi_subdisplay.h"

And initialize in setup function:
subDisplay.begin();

Configure SLAVE_PIN in navi_subdisplay.h if you use not digital pin 3
