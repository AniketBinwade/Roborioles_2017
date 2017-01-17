// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"


// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
std::shared_ptr<CANTalon> RobotMap::driveBaseLeft1;
std::shared_ptr<CANTalon> RobotMap::driveBaseLeft2;
std::shared_ptr<CANTalon> RobotMap::driveBaseRight1;
std::shared_ptr<CANTalon> RobotMap::driveBaseRight2;
std::shared_ptr<RobotDrive> RobotMap::driveBaseRobotDrive41;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION

void RobotMap::init() {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    LiveWindow *lw = LiveWindow::GetInstance();

    driveBaseLeft1.reset(new CANTalon(12));
    lw->AddActuator("DriveBase", "Left1", driveBaseLeft1);
    
    driveBaseLeft2.reset(new CANTalon(13));
    lw->AddActuator("DriveBase", "Left2", driveBaseLeft2);
    
    driveBaseRight1.reset(new CANTalon(10));
    lw->AddActuator("DriveBase", "Right1", driveBaseRight1);
    
    driveBaseRight2.reset(new CANTalon(11));
    lw->AddActuator("DriveBase", "Right2", driveBaseRight2);
    
    driveBaseRobotDrive41.reset(new RobotDrive(driveBaseLeft1, driveBaseLeft2,
              driveBaseRight1, driveBaseRight2));
    
    driveBaseRobotDrive41->SetSafetyEnabled(true);
        driveBaseRobotDrive41->SetExpiration(0.1);
        driveBaseRobotDrive41->SetSensitivity(0.5);
        driveBaseRobotDrive41->SetMaxOutput(1.0);



    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}
