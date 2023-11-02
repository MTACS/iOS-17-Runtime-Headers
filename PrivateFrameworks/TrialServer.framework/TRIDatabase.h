
@interface TRIDatabase : NSObject <_PASDatabaseMigrationProtocol> {
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
- (void)closePermanently;
- (id)createTempTableContainingRowsFromQuery:(id)arg1 bind:(id /* block */)arg2 namePrefix:(id)arg3 transaction:(id)arg4;
- (id)databaseHandle;
- (bool)dropTableWithName:(id)arg1 transaction:(id)arg2;
- (id /* block */)generalErrorHandlerWithOutError:(id*)arg1;
- (id)init;
- (id)initInMemoryAndPerformMigrations:(bool)arg1;
- (id)initWithPaths:(id)arg1 databasePath:(id)arg2 storageManagement:(id)arg3 performMigrations:(bool)arg4;
- (id)initWithPaths:(id)arg1 storageManagement:(id)arg2;
- (bool)migrateToVersion:(unsigned int)arg1;
- (unsigned char)migration_addTaskCapability;
- (unsigned char)migration_conditionallyRemoveBMLTFactorPackInfo;
- (id)migrations;
- (id)queriesToSkipFromEmptyToVersion:(unsigned int*)arg1;
- (struct _PASDBTransactionCompletion_ { bool x1; })readTransactionWithFailableBlock:(id /* block */)arg1;
- (bool)vacuum;
- (struct _PASDBTransactionCompletion_ { bool x1; })writeTransactionWithFailableBlock:(id /* block */)arg1;

@end
