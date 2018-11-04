#include <RASLib/inc/common.h>
#include <RASLib/inc/gpio.h>
#include <RASLib/inc/time.h>
#include <RASLib/inc/motor.h>
#include "robotathon.h"

static tMotor *left;
static tMotor *right;
float left_speed = 0. right_speed = 0;
int left_direction = 1, right_direction = 1;


void turn_left(){
  SetMotor(left, 0.1);
  SetMotor(right, 0.5);
}

void turn_right(){
  SetMotor(right, 0.1);
  SetMotor(left, 0.5);
}

int main(void){
  left = InitializeServoMotor(PIN_B6, false);
  right = InitializeServoMotor(PIN_B7, true);
}
