// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.

#ifndef DRIVETRAIN_H
#define DRIVETRAIN_H
#include "Commands/Subsystem.h"
#include "WPILib.h"
#include "AHRS.h"
/**
 *
 *
 * @author ExampleAuthor
 */
class Drivetrain: public Subsystem {
private:
	// It's desirable that everything possible is private except
	// for methods that implement subsystem capabilities
	std::shared_ptr<SpeedController> frontLeft;
	std::shared_ptr<SpeedController> frontRight;
	std::shared_ptr<SpeedController> rearRight;
	std::shared_ptr<SpeedController> rearLeft;
	std::shared_ptr<RobotDrive> robotDrive;
	std::shared_ptr<SpeedController> strafe;
	std::shared_ptr<AHRS> navX;

public:
	Drivetrain();
	void DriveWithJoystick(std::shared_ptr<Joystick>);
	void InitDefaultCommand();
	int orient;
};

#endif
