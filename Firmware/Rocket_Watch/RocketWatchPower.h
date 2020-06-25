/*
 * DESCRIPTION
 */

#ifndef RocketWatchPower_h
#define RocketWatchPower_h

#include <Arduino.h>

class RocketWatchPower
{
  private:
    
  public:
    RocketWatchPower();
    
    void begin();
    
    bool isCharging();    
    uint16_t getBatteryVoltage();

    void enableGPS();
    void disableGPS();

    void enableMP3();
    void disableMP3();
};

#endif
