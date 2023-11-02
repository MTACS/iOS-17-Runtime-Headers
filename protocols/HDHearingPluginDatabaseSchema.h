
@protocol HDHearingPluginDatabaseSchema <NSObject>

@required

- (long long)currentSchemaVersion;
- (NSArray *)databaseEntities;
- (void)registerMigrationStepsForSchemaName:(NSString *)arg1 migrator:(HDDatabaseMigrator *)arg2;

@end
