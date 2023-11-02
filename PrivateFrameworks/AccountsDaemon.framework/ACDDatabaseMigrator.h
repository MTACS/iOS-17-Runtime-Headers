
@interface ACDDatabaseMigrator : NSObject {
    NSURL * _databaseURL;
    NSManagedObjectContext * _migrationContext;
    NSPersistentStoreCoordinator * _persistentStoreCoordinator;
    NSPersistentStoreCoordinator * _privateCoordinator;
    NSDictionary * _storeOptions;
}

@property (nonatomic, readonly) NSURL *databaseURL;
@property (nonatomic, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (nonatomic, readonly, copy) NSDictionary *storeOptions;

+ (id)new;

- (void).cxx_destruct;
- (id)_compatibleModelForStoreAtURL:(id)arg1;
- (id)_fetchAllAuthorizationEntitiesForModelVersion:(long long)arg1;
- (id)_fetchAllDataclassEntitles;
- (void)_migrateAccessAuthorizationsToTCCFromModelVersion:(long long)arg1;
- (void)_migrateNameAttributeOfDataclassEntities;
- (void)_migrateOptionsAttributeOfAuthorizatinEntitiesFromModelVersion:(long long)arg1;
- (void)_postProcessMigrationFromVersion:(long long)arg1 migrationData:(id)arg2;
- (id)_setUpContextForMigration;
- (long long)_versionForModel:(id)arg1;
- (id)databaseURL;
- (id)init;
- (id)initForDatabaseAtURL:(id)arg1 persistentStoreCoordinator:(id)arg2 storeOptions:(id)arg3;
- (id)persistentStoreCoordinator;
- (bool)runReturningError:(id*)arg1;
- (id)storeOptions;

@end
