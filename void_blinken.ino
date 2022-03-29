#include <TimerOne.h>
#include <Wire.h>
#include <MultiFuncShield.h>

void setup() {
  // put your setup code here, to run once:
  Timer1.initialize();
  MFS.initialize(&Timer1);    // initialize multi-function shield library
  MFS.write (-100);
delay (2000);
MFS.write (3.141,3); // 3 Nachkommastell.
delay (2000);
MFS.write (-15.8,1); // 1 Nachkommastelle
delay (2000);
MFS.write ("COOL"); 
delay (2000);
MFS.write (""); 
  ...
}