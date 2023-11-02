
@protocol HDSPEnvironmentStateMachineEventHandler <HKSPStateMachineEventHandler>

@required

- (void)dataMigrationDidComplete;
- (void)systemDidBecomeReady;

@end
