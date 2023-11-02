
@interface HDSPSleepWidgetBedtimeInProgressState : HDSPSleepWidgetStateMachineState

- (void)sleepModeDidChange:(long long)arg1 isUserRequested:(bool)arg2;
- (void)sleepScheduleStateDidChange:(unsigned long long)arg1;
- (id)stateName;
- (long long)widgetState;

@end
