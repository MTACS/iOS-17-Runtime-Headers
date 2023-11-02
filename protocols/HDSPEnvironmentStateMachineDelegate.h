
@protocol HDSPEnvironmentStateMachineDelegate <HKSPStateMachineDelegate>

@required

- (void)environmentDidBecomeReady;
- (void)environmentShouldMigrateData;

@end
