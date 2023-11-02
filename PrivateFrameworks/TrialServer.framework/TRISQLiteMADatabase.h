
@interface TRISQLiteMADatabase : NSObject <_PASDatabaseMigrationProtocol> {
    NSString * _assetDir;
    _PASSqliteDatabase * _db;
    NSString * _parentDir;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_predicateForAssetSelector:(id)arg1;
- (void)addAutoAssetWithId:(id)arg1 atPath:(id)arg2;
- (unsigned long long)assetSizeForSelector:(id)arg1;
- (void)closePermanently;
- (id)databaseHandle;
- (bool)dropTableWithName:(id)arg1 transaction:(id)arg2;
- (void)eliminateAllForSelector:(id)arg1 completion:(id /* block */)arg2;
- (void)eliminatePromotedNeverLockedForSelector:(id)arg1 completion:(id /* block */)arg2;
- (void)endAllPreviousLocksOfReasonSync:(id)arg1 forAssetSelector:(id)arg2;
- (void)endAllPreviousLocksOfSelectorSync:(id)arg1 forClientName:(id)arg2;
- (id)init;
- (id)initWithParentDir:(id)arg1;
- (id)lockContentSync:(id)arg1 forAssetSelector:(id)arg2 withUsagePolicy:(id)arg3 withTimeout:(long long)arg4 lockedAssetSelector:(id*)arg5 newerInProgress:(id*)arg6 error:(id*)arg7;
- (id)locksForSelector:(id)arg1;
- (bool)migrateToVersion:(unsigned int)arg1;
- (id)migrations;
- (id)queriesToSkipFromEmptyToVersion:(unsigned int*)arg1;
- (bool)vacuum;

@end
