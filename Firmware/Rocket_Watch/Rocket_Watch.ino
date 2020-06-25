#include "RocketWatchPower.h"

RocketWatchPower pwr;

void setup() {

  pwr.begin();

}

void loop() {

  pwr.isCharging();
  pwr.getBatteryVoltage();
  //print this info to watch screen

  
}
