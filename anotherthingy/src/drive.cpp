#include "drive.h"

void splitArcadeDrive(int deadband){
  float turningSpeed = 0.70;

  int motorSpeedL = 
    ((mainController.Axis3.position() + mainController.Axis1.position()) * turningSpeed);
  int motorSpeedR = 
    ((mainController.Axis3.position() - mainController.Axis1.position()) * turningSpeed);
  
  if (abs(motorSpeedL) > deadband || abs(motorSpeedR) > deadband){
    
    leftDrive.setVelocity(motorSpeedL, pct);
    rightDrive.setVelocity(motorSpeedR, pct);
  } else {

    leftDrive.setVelocity(0, pct);
    rightDrive.setVelocity(0, pct);

  }

  leftDrive.spin(fwd);
  rightDrive.spin(fwd);
}

void IntakeIn() {

  if (mainController.ButtonR1.pressing()){
    Intake.setVelocity(100, pct);
    Intake.spin(fwd);

  } else {

    Intake.stop();
  }
}

bool clampEnable = true;

void clampOpen() {
  if (clampEnable) {
    clampEnable = false;
    clamp.open();

  } else {
    clampEnable = true;
    clamp.close();
  }
}