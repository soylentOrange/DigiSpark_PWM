/// @file

/* DigiSpark_PWM Library
   soylentOrange - https://github.com/soylentOrange/DigiSpark_PWM
*/

#include "DigiSpark_PWM.h"


/// \brief
/// Constructor of DigiSpark_PWM
/// \details
/// This creates a DigiSpark_PWM object.
DigiSpark_PWM::DigiSpark_PWM(USI_TWI& bus, const uint8_t address) {
  /*..*/
}

/// \brief
/// begin
/// \details
/// Initializes the library
uint8_t DigiSpark_PWM::begin(uint16_t frequency = 25000, uint8_t dutyCyclePercent = 50) {
  return 0;
}

/// \brief
/// setDutyCycle
/// \details
/// Initializes the library
uint8_t DigiSpark_PWM::setDutyCycle(uint8_t dutyCyclePercent = 50) {
  return 0;
}

/// \brief
/// setFrequency
/// \details
/// Initializes the library
uint8_t DigiSpark_PWM::setFrequency(uint16_t frequency = 25000) {
  return 0;
}
