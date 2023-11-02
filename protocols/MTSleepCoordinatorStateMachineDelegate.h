
@protocol MTSleepCoordinatorStateMachineDelegate <MTStateMachineDelegate>

@required

- (void)stateMachine:(MTSleepCoordinatorStateMachine *)arg1 dismissWakeUpAlarm:(NSDate *)arg2 dismissAction:(unsigned long long)arg3;
- (void)stateMachine:(MTSleepCoordinatorStateMachine *)arg1 shouldScheduleAlarmTimeoutForSecondsFromNow:(double)arg2;
- (void)stateMachineUserWentToBed:(MTSleepCoordinatorStateMachine *)arg1;
- (void)stateMachineUserWokeUp:(MTSleepCoordinatorStateMachine *)arg1;

@end
