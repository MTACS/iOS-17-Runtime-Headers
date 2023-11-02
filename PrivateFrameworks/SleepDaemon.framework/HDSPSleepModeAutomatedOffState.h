
@interface HDSPSleepModeAutomatedOffState : _HDSPSleepModeTurnedOffState

- (void)_automationTurnedOnSleepModeWithReason:(unsigned long long)arg1;
- (void)automationTurnedOnSleepModeWithReason:(unsigned long long)arg1;
- (unsigned long long)defaultChangeReason;
- (void)sleepModeTurnedOnForUnknownReason;
- (id)stateName;

@end
