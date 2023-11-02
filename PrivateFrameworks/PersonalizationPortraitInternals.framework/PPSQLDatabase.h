
@interface PPSQLDatabase : NSObject <_PASDatabaseMigrationProtocol> {
    PPSQLDatabaseHandlePool * _handlePool;
    NSCondition * _handlePoolCond;
    unsigned char  _migrationCount;
    NSString * _parentDirectory;
    NSString * _path;
    NSRecursiveLock * _writeLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)createTempTableContainingRowsFromQuery:(id)arg1 descriptiveTableName:(id)arg2 txnWitness:(id)arg3 bind:(id /* block */)arg4;
+ (id)createTempViewContainingRowsFromQuery:(id)arg1 descriptiveTableName:(id)arg2 txnWitness:(id)arg3;
+ (void)dropTableWithName:(id)arg1 txnWitness:(id)arg2;
+ (void)dropViewWithName:(id)arg1 txnWitness:(id)arg2;
+ (id)nonMigratingToolsInstance;
+ (id)nonMigratingToolsInstanceWithParentDirectory:(id)arg1;
+ (id)sharedInstance;
+ (id)tableNameForTable:(unsigned char)arg1;

- (void).cxx_destruct;
- (id)_acquireReadOnlyHandleWithClient:(unsigned char)arg1;
- (id)_allTables;
- (void)_disableQueryLoggingForHandle:(id)arg1;
- (void)_enableQueryLoggingForHandle:(id)arg1;
- (bool)_handleCorruption;
- (id)_initInStandardParentDirectoryWithPerformMigrations:(bool)arg1;
- (id)_initWithPath:(id)arg1 performMigrations:(bool)arg2;
- (bool)_isCorruptionMarkerPresent;
- (id)_nullableHandleWithClient:(unsigned char)arg1;
- (id)_openFreshHandleForClient:(unsigned char)arg1;
- (bool)_prepareDatabaseHandleForMigration;
- (void)_releaseReadOnlyHandle:(id)arg1 client:(unsigned char)arg2;
- (bool)_removeCorruptionMarker;
- (id)checkWithError:(id*)arg1;
- (id)databaseHandle;
- (id)handleWithClient:(unsigned char)arg1;
- (id)init;
- (id)initWithParentDirectory:(id)arg1 performMigrations:(bool)arg2;
- (id)initWithTemporaryInMemoryDatabaseAndPerformMigrations:(bool)arg1;
- (bool)isInMemory;
- (unsigned long long)maxSchemaVersion;
- (bool)migrateToVersion:(unsigned int)arg1;
- (unsigned char)migration_ConvertLocationDescriptionsToLowercase;
- (id)migrations;
- (bool)optimizeDatabaseWithShouldContinueBlock:(id /* block */)arg1;
- (id)parentDirectory;
- (id)queriesToSkipFromEmptyToVersion:(unsigned int*)arg1;
- (void)readTransactionWithClient:(unsigned char)arg1 block:(id /* block */)arg2;
- (id)sourceStats:(unsigned long long)arg1;
- (id)sourceStats:(unsigned long long)arg1 forTableWithName:(id)arg2 txnWitness:(id)arg3;
- (id)stats;
- (bool)unmigrate;
- (bool)vacuumDatabaseWithShouldContinueBlock:(id /* block */)arg1;
- (void)writeTransactionWithClient:(unsigned char)arg1 block:(id /* block */)arg2;
- (bool)writeTransactionWithClient:(unsigned char)arg1 timeoutInSeconds:(double)arg2 block:(id /* block */)arg3;

@end
