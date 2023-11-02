
@interface _HDSPSleepModeTurnedOnState : _HDSPSleepModeOnState

- (long long)sleepMode;
- (void)sleepScheduleStateChangedToBedtime:(unsigned long long)arg1 fromState:(unsigned long long)arg2;
- (void)sleepScheduleStateChangedToDisabled;
- (void)sleepScheduleStateChangedToWakeUp:(unsigned long long)arg1 fromState:(unsigned long long)arg2;
- (void)sleepScheduleStateChangedToWindDown:(unsigned long long)arg1 fromState:(unsigned long long)arg2;
- (void)updateState;

@end
