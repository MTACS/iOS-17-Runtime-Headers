
@protocol MTSleepModeStateMachineDelegate <MTStateMachineDelegate>

@required

- (bool)stateMachine:(MTSleepModeStateMachine *)arg1 disengageSleepModeUserRequested:(bool)arg2;
- (bool)stateMachine:(MTSleepModeStateMachine *)arg1 engageSleepModeUntilDate:(NSDate *)arg2 userEngaged:(bool)arg3;
- (void)stateMachine:(MTSleepModeStateMachine *)arg1 keepSleepModeOffUntilDate:(NSDate *)arg2;
- (void)stateMachine:(MTSleepModeStateMachine *)arg1 scheduleUpdateForSecondsFromNow:(double)arg2;
- (void)stateMachineClearKeepSleepModeOff:(MTSleepModeStateMachine *)arg1;

@end
