#ifndef SOAR_IMU_h
#define SOAR_IMU_h
#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BNO055.h>
#include <utility/imumaths.h>


class SOAR_IMU {
  public:
    SOAR_IMU(); // Constructor
    // Declare methods and variables here
    void BNO_SETUP();
    float* GET_ACCELERATION();

  private:
    // Declare private variables and methods here
    Adafruit_BNO055 bno;
    uint16_t fail_count;
};

#endif
