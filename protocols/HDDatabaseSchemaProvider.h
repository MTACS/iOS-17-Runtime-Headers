
@protocol HDDatabaseSchemaProvider

@required

- (long long)currentSchemaVersionForProtectionClass:(long long)arg1;
- (NSArray *)databaseEntitiesForProtectionClass:(long long)arg1;
- (void)registerMigrationStepsForProtectionClass:(long long)arg1 migrator:(HDDatabaseMigrator *)arg2;
- (NSString *)schemaName;

@end
