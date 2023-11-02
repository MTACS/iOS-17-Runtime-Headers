
@protocol HDHealthMedicationsPluginDatabaseSchema <NSObject>

@required

- (long long)currentSchemaVersion;
- (NSArray *)databaseEntities;
- (void)registerMigrationStepsWithMigrator:(HDDatabaseMigrator *)arg1 schemaName:(NSString *)arg2;

@end
