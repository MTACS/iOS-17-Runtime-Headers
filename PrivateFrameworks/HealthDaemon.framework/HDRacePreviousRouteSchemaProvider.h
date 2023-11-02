
@interface HDRacePreviousRouteSchemaProvider : NSObject

+ (long long)currentSchemaVersionForProtectionClass:(long long)arg1;
+ (id)databaseEntitiesForProtectionClass:(long long)arg1;
+ (void)registerMigrationStepsForProtectionClass:(long long)arg1 migrator:(id)arg2;

@end
