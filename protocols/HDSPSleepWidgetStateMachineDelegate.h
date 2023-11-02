
@protocol HDSPSleepWidgetStateMachineDelegate <HKSPPersistentStateMachineDelegate>

@required

- (void)sleepWidgetShouldReload;
- (void)sleepWidgetStateDidChange:(long long)arg1 previousState:(long long)arg2;

@end
