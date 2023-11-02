
@interface AMSStorageDatabaseSchema : NSObject

+ (bool)createOrUpdateSchemaUsingConnection:(id)arg1;
+ (void)migrateVersion0to1WithMigration:(id)arg1;

@end
