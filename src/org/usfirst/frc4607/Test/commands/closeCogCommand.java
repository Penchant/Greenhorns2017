package org.usfirst.frc4607.Test.commands;

import org.usfirst.frc4607.Test.Robot;

import edu.wpi.first.wpilibj.command.Command;

public class closeCogCommand extends Command {

	protected void closeCogCommand(){
		
	}
	
	protected void initialize(){
		Robot.cogCollector.initDefaultCommand();
    	setTimeout(15);
	}
	
	protected void execute(){
		Robot.cogCollector.openGate();
	}
	@Override
	protected boolean isFinished() {
		// TODO Auto-generated method stub
		return isTimedOut();
	}
	
	protected void end(){
		Robot.cogCollector.closeGate();
	}

}
