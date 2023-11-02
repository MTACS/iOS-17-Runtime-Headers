
@protocol HDSPEnvironmentStateMachineInfoProvider <HKSPStateMachineInfoProvider>

@required

- (bool)isSystemReady;
- (bool)needsDataMigration;

@end
