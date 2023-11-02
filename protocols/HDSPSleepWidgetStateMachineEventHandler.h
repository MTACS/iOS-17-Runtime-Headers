
@protocol HDSPSleepWidgetStateMachineEventHandler <HKSPPersistentStateMachineEventHandler>

@required

- (void)significantTimeChangeOccurred;
- (void)sleepModeDidChange:(long long)arg1 isUserRequested:(bool)arg2;
- (void)sleepScheduleModelDidChange:(HKSPSleepScheduleModel *)arg1;
- (void)sleepScheduleStateDidChange:(unsigned long long)arg1;

@end
