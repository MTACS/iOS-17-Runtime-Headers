
@interface HDSPEnvironmentMigrationState : HDSPEnvironmentState

- (void)dataMigrationDidComplete;
- (void)didEnter;
- (id)stateName;

@end
