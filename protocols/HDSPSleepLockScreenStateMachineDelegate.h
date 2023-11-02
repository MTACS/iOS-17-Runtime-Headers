
@protocol HDSPSleepLockScreenStateMachineDelegate <HKSPPersistentStateMachineDelegate>

@required

- (void)sleepLockScreenStateDidChange:(long long)arg1 previousState:(long long)arg2;

@end
