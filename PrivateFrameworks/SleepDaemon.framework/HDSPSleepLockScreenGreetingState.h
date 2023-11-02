
@interface HDSPSleepLockScreenGreetingState : HDSPSleepLockScreenStateMachineState

- (void)dismissAlertForGoodMorning;
- (long long)sleepLockScreenState;
- (id)stateName;
- (void)updateState;

@end
