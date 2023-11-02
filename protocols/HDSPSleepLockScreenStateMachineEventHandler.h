
@protocol HDSPSleepLockScreenStateMachineEventHandler <HKSPPersistentStateMachineEventHandler>

@required

- (void)dismissAlertForGoodMorning;
- (void)presentAlertForGoodMorning;
- (void)sleepModeDidChange:(long long)arg1 reason:(unsigned long long)arg2;

@end
