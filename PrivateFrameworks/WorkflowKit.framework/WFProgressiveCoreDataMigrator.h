
@interface WFProgressiveCoreDataMigrator : NSObject

+ (id)customModificationsStepForSchemaWithIdentifier:(id)arg1;
+ (bool)migrateDatabaseAtPersistentStoreDescription:(id)arg1 useLockFile:(bool)arg2 error:(id*)arg3;

@end
