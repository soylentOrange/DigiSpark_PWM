/* DigiSpark_PWM Library
   soylentOrange - https://github.com/soylentOrange/Forced-BMX280
*/

#ifndef __DIGISPARK_PWM_HPP
#define __DIGISPARK_PWM_HPP

#include <Arduino.h>


class DigiSpark_PWM {
protected:
  uint16_t _frequency;
  uint8_t _OCR1B_value;
  uint8_t _dutyCyclePercent;

public:
  DigiSpark_PWM();

  uint8_t begin(uint16_t frequency = 25000, uint8_t dutyCyclePercent = 50);
  uint8_t setDutyCycle(uint8_t dutyCyclePercent = 50);
  uint8_t setFrequency(uint16_t frequency = 25000);
};

#endif  //__DIGISPARK_PWM_HPP
