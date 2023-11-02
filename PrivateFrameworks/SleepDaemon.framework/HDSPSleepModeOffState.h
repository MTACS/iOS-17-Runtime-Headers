
@interface HDSPSleepModeOffState : HDSPSleepModeStateMachineState

- (void)automationTurnedOffSleepModeWithReason:(unsigned long long)arg1;
- (void)sleepModeTurnedOffForUnknownReason;
- (id)stateName;
- (void)userTurnedOffSleepModeWithReason:(unsigned long long)arg1;

@end
