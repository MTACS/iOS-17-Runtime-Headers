
@protocol HDSPSleepScheduleStateCoordinatorStateMachineDelegate <HKSPStateMachineDelegate>

@required

- (void)sleepScheduleStateDidChange:(unsigned long long)arg1 previousState:(unsigned long long)arg2 context:(HDSPSleepScheduleStateCoordinatorStateMachineContext *)arg3;
- (void)snoozeFireDateShouldBeReset;

@end
