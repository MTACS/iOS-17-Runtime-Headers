
@interface _HDSPSleepModeTurnedOffState : HDSPSleepModeOffState

- (bool)_shouldUpdateSleepModeStateForState:(unsigned long long)arg1 changeReason:(unsigned long long)arg2 previousState:(unsigned long long)arg3;
- (id)expirationDate;
- (void)sleepScheduleStateChangedToBedtime:(unsigned long long)arg1 fromState:(unsigned long long)arg2;
- (void)sleepScheduleStateChangedToWindDown:(unsigned long long)arg1 fromState:(unsigned long long)arg2;
- (void)stateDidExpire;
- (void)updateState;

@end
