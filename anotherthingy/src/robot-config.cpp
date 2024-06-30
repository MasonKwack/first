#include "vex.h"

using namespace vex;

// A global instance of brain used for printing to the V5 brain screen
brain Brain;
controller mainController;

// drivetrain motors
motor BackL = motor(PORT1, ratio6_1, true);
motor MidL = motor(PORT2, ratio6_1, true);
motor FrontL = motor(PORT3, ratio6_1, true);

motor BackR = motor(PORT4, ratio6_1, false);
motor MidR = motor(PORT5, ratio6_1, false);
motor FrontR = motor(PORT6, ratio6_1, false);

// intake motor
motor Intake = motor(PORT7, ratio6_1, true);

motor_group leftDrive = motor_group(BackL, MidL, FrontL);
motor_group rightDrive = motor_group(BackR, MidR, FrontR);

pneumatics clamp = pneumatics(Brain.ThreeWirePort.A);




/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 *
 * This should be called at the start of your int main function.
 */
void vexcodeInit(void) {
  // Nothing to initialize
}