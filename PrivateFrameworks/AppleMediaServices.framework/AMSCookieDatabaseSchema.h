
@interface AMSCookieDatabaseSchema : NSObject

+ (bool)createOrUpdateSchemaUsingConnection:(id)arg1;
+ (void)migrateVersion0to1WithMigration:(id)arg1;
+ (bool)promptTapToRadarForSchemaMigrationFailureWithDescription:(id)arg1 error:(id*)arg2;

@end
