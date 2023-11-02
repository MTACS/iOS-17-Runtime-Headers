
@interface _HDSPSleepModeOnState : HDSPSleepModeStateMachineState

- (void)automationTurnedOnSleepModeWithReason:(unsigned long long)arg1;
- (void)sleepModeTurnedOnForUnknownReason;
- (void)userTurnedOnSleepModeWithReason:(unsigned long long)arg1;

@end
