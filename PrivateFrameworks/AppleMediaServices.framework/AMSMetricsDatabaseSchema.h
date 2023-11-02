
@interface AMSMetricsDatabaseSchema : NSObject

+ (bool)createOrUpdateSchemaUsingConnection:(id)arg1;
+ (void)migrateVersion0to1WithMigration:(id)arg1;
+ (void)migrateVersion1to2WithMigration:(id)arg1;
+ (void)migrateVersion2to3WithMigration:(id)arg1;
+ (void)migrateVersion3to4WithMigration:(id)arg1;
+ (void)migrateVersion4to5WithMigration:(id)arg1;

@end
