// notice!! command center, Nexus or Hachery must set as 0 key

/*
  ------------------------------------ Parts ---------------------------------

  Cherry Key Switch  http://amzn.to/2BEygaX
  Attiny85  http://amzn.to/2FvhOw6
  Keycap  http://amzn.to/2DO1ydg
  Micro USB cable http://amzn.to/2Enrycm
  Blu-Tack Reusable Adhesive  http://amzn.to/2DQgOlT
  Finished Product(soon)  https://www.etsy.com/people/xhjkunl8?ref=hdr_user_menu
  Material Kit(soon)  https://www.etsy.com/people/xhjkunl8?ref=hdr_user_menu

  ------------------------------------ Tools ---------------------------------

  Filament for 3d print (PLA 1.75mm) http://amzn.to/2DhxPpo
  Hot melt glue gun   http://amzn.to/2CMf8cE
  3D printer (P802MA) http://amzn.to/2CWuVZE
  Soldering Iron Kit  http://amzn.to/2Gv8UA3

  ------------------------------------ Instruction --------------------------


  Source Code https://github.com/happythingsmaker/HappyKeys
  3D model file (for 3d printer) https://www.thingiverse.com/thing:2777861
  Youtube https://youtu.be/Y8Oh4aj96gU
  Manual https://github.com/happythingsmaker/HappyKeys/blob/master/README.md
  Schematic https://github.com/happythingsmaker/HappyKeys

  ------------------------------------ Follow Me ---------------------------------

  Instagram:     https://www.instagram.com/happythingsmaker/
  Facebook:      https://www.facebook.com/happyThingsMaker/
  Blog : http://happyThingsMaker.com
*/
#include <TrinketHidCombo.h>
void setup()
{
  pinMode(0, OUTPUT);
  pinMode(2, INPUT_PULLUP);
  digitalWrite(0, LOW);

  TrinketHidCombo.begin(); // start the USB device engine and enumerate
}


const unsigned char delayMinValue = 30;
const unsigned char delayMaxValue = 40;

void loop()
{

  if (digitalRead(2) == LOW) {

    TrinketHidCombo.pressKey(KEYCODE_MOD_LEFT_CONTROL, KEYCODE_9); // save current state on 9
    delay(random(delayMinValue, delayMaxValue));       // some random delay is needed between orders
    TrinketHidCombo.pressKey(0, 0);                      // release key
    delay(random(delayMinValue, delayMaxValue));       // some random delay is needed between orders

    TrinketHidCombo.print("0");                       // call 0 (command center)
    delay(random(delayMinValue, delayMaxValue));       // some random delay is needed between orders
    TrinketHidCombo.print("s");                      // drone, scv or prove
    delay(random(delayMinValue, delayMaxValue));       // some random delay is needed between orders
    TrinketHidCombo.print("d");                      // drone, scv or prove
    delay(random(delayMinValue, delayMaxValue));       // some random delay is needed between orders
    TrinketHidCombo.print("p");                      // drone, scv or prove
    delay(random(delayMinValue, delayMaxValue));       // some random delay is needed between orders

    TrinketHidCombo.print("9");                       // call 9 (previous saved step)


  } else {
    TrinketHidCombo.poll(); // do nothing, check if USB needs anything done
  }
}
