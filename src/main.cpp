#include <Arduino.h>

#define MOTOR_OUT_1 D1
#define MOTOR_OUT_2 D2
#define PUSH_BUTTON_1 D5
#define PUSH_BUTTON_2 D6

/**
 * 
*/
void setup() 
{
  /* Input pin config */
  pinMode(PUSH_BUTTON_1, INPUT);
  pinMode(PUSH_BUTTON_1, INPUT);

  /* Output pin config */
  pinMode(MOTOR_OUT_1, OUTPUT);
  pinMode(MOTOR_OUT_2, OUTPUT);
  
  /* Configure button interrupts */
  /* Can bounce library configure this? Look at example */

}

void loop() 
{
  /*
    freq[3] = {0, 1000, 500};
    static int speed_setting = 0;
    static bool current_setting = false;
    if(cycle_fan)
    {
      speed_setting = (speed_setting + 1) % 3;
      analogWriteFreq(freq[speed_setting]);
      cycle_fan = false;
    }

    if(toggle_direction)
    {
      current_setting = !current_setting
      digitalWrite(motorOut1,current_setting)
      digitalWrite(motorOut2, current_setting)
    }


   */
}

void cycle_fan_speed()
{

}

void toggle_fan_direction()
{
  
}

void set_default_settings()
{

}























//VSS is logic
//VS is load power