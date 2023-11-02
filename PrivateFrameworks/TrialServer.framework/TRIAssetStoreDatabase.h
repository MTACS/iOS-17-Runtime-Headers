
@interface TRIAssetStoreDatabase : NSObject <_PASDatabaseMigrationProtocol> {
    NSString * _databasePath;
    _PASSqliteDatabase * _db;
    NSUserDefaults * _defaults;
    _Atomic bool  _isQueryPlanLoggingEnabled;
    _PASKVOHandler * _kvoHandler;
    <TRIPaths> * _paths;
    <TRIStorageManagementProtocol> * _storageManagement;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_disableQueryPlanLogging;
- (void)_enableQueryPlanLogging;
- (void)_updateQueryPlanLogging;
- (bool)addReferenceToAutoAssetId:(id)arg1 forLifetimeOfPath:(id)arg2;
- (void)closePermanently;
- (id)databaseHandle;
- (bool)dropTableWithName:(id)arg1 transaction:(id)arg2;
- (bool)enumerateAllAutoAssetReferencesWithBlock:(id /* block */)arg1;
- (void)enumerateAssetIdsWithoutLiveReferencesUsingBlock:(id /* block */)arg1;
- (void)enumerateOnDiskMAReferencesWithoutCorrespondingDatabaseEntriesUsingBlock:(id /* block */)arg1;
- (id)init;
- (id)initInMemoryAndPerformMigrations:(bool)arg1;
- (id)initWithPaths:(id)arg1 assetStorePath:(id)arg2 storageManagement:(id)arg3;
- (id)initWithPaths:(id)arg1 databasePath:(id)arg2 storageManagement:(id)arg3 performMigrations:(bool)arg4;
- (id)initWithPaths:(id)arg1 storageManagement:(id)arg2;
- (bool)migrateToVersion:(unsigned int)arg1;
- (id)migrations;
- (id)queriesToSkipFromEmptyToVersion:(unsigned int*)arg1;
- (bool)vacuum;

@end
