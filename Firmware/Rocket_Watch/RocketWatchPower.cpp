#include "RocketWatchPower.h"
const uint8_t chrgPin = 27;
const uint8_t battPin = A4;

RocketWatchPower::RocketWatchPower()
{

}

    void RocketWatchPower::begin()
    {
    
    }
     
    //Returns whether or not the battery is charging
    bool RocketWatchPower::isCharging()
    {
      return !digitalRead(chrgPin);  //return 0 if charging, 1 if not charging
    }
    uint16_t RocketWatchPower::getBatteryVoltage()
    {
      uint16_t val = analogRead(battPin); //10-bit ADC, will return values from 0(0V)-1023(3.3V)
      uint16_t voltage = 3300*val/1023;

      return 2*voltage;
      //return 2*3300*(analogRead(battPin)/1023);
    }

    void RocketWatchPower::enableGPS()
    {
      
    }
    void RocketWatchPower::disableGPS()
    {
      
    }

    void RocketWatchPower::enableMP3()
    {
      
    }
    void RocketWatchPower::disableMP3()
    {
      
    }
