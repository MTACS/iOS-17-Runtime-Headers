
@protocol HDSPSleepModeStateMachineEventHandler <HKSPStateMachineEventHandler>

@required

- (void)automationTurnedOffSleepModeWithReason:(unsigned long long)arg1;
- (void)automationTurnedOnSleepModeWithReason:(unsigned long long)arg1;
- (void)sleepModeTurnedOffForUnknownReason;
- (void)sleepModeTurnedOnForUnknownReason;
- (void)sleepScheduleStateChangedToBedtime:(unsigned long long)arg1 fromState:(unsigned long long)arg2;
- (void)sleepScheduleStateChangedToDisabled;
- (void)sleepScheduleStateChangedToWakeUp:(unsigned long long)arg1 fromState:(unsigned long long)arg2;
- (void)sleepScheduleStateChangedToWindDown:(unsigned long long)arg1 fromState:(unsigned long long)arg2;
- (void)userTurnedOffSleepModeWithReason:(unsigned long long)arg1;
- (void)userTurnedOnSleepModeWithReason:(unsigned long long)arg1;

@end
