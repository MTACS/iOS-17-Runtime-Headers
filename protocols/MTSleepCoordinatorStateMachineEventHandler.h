
@protocol MTSleepCoordinatorStateMachineEventHandler <MTStateMachineEventHandler>

@required

- (void)updateState;
- (void)userBedTimeReached:(NSDate *)arg1;
- (void)userWakeTimeReached:(NSDate *)arg1;
- (void)userWakeUpAlarmFired;
- (void)userWentToBed;
- (void)userWokeUp;
- (void)wakeUpAlarmTimedOut;

@end
