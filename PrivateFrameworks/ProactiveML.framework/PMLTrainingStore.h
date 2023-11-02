
@interface PMLTrainingStore : NSObject {
    bool  _allowSkipSchema;
    _PASSqliteDatabase * _db;
    NSString * _dbPath;
    id  _lockStateNotificationToken;
    unsigned long long  _maxTimesAccessed;
}

+ (long long)_migrate:(id)arg1 forStore:(id)arg2;
+ (bool)_runQueries:(id)arg1 andUpdateVersionTo:(unsigned int)arg2 inTransactionOnDb:(id)arg3 forStore:(id)arg4;
+ (id)_sessionDataToBatchWithNumberOfColumns:(unsigned long long)arg1 rowsData:(id)arg2 labelsData:(id)arg3;
+ (id)getSchema:(unsigned long long*)arg1;
+ (id)inMemoryStoreForTesting;
+ (double)lastUsedTimestampLimit;
+ (long long)migrate:(id)arg1 to:(id)arg2 forStore:(id)arg3;
+ (void)setLastUsedTimestampLimit:(double)arg1;

- (void).cxx_destruct;
- (void)_loadBatchForModel:(id)arg1 privacyBudgetRefreshPeriod:(double)arg2 labels:(id)arg3 batchSize:(unsigned long long)arg4 block:(id /* block */)arg5;
- (void)_loadDataForModel:(id)arg1 positiveRowId:(unsigned long long)arg2 negativeRowId:(unsigned long long)arg3 excludeItemIdsUsedWithin:(double)arg4 limit:(unsigned long long)arg5 onlyAppleInternal:(bool)arg6 positiveLabel:(unsigned long long)arg7 skew:(double)arg8 block:(id /* block */)arg9;
- (void)_loadDataForModel:(id)arg1 privacyBudgetRefreshPeriod:(double)arg2 labelAndStartRows:(id)arg3 batchSize:(unsigned long long)arg4 supportPerLabel:(unsigned long long)arg5 block:(id /* block */)arg6;
- (void)_loadDataFromLabelAndTuples:(id)arg1 model:(id)arg2 numberOfRows:(unsigned long long)arg3 numberOfColumns:(unsigned long long)arg4 lastUsedMax:(double)arg5 block:(id /* block */)arg6;
- (long long)_openDbIfUnlocked;
- (void)_registerUnlockHandler;
- (bool)_truncateDbIfCorrupted;
- (void)_unregisterUnlockHandler;
- (long long)_unsafeOpenDbIfUnlocked;
- (void)closeDbForTesting;
- (void)convertToBagOfIdsVectorForModel:(id)arg1;
- (bool)createSnapshot:(id)arg1;
- (id)dbForTesting;
- (void)dealloc;
- (void)deleteSessionsWithBundleId:(id)arg1;
- (void)deleteSessionsWithBundleId:(id)arg1 domainId:(id)arg2;
- (void)deleteSessionsWithBundleId:(id)arg1 itemId:(id)arg2;
- (void)enumerateSessionDescriptorsUsingBlock:(id /* block */)arg1;
- (id)getSchema:(unsigned long long*)arg1;
- (id)init;
- (id)initWithPath:(id)arg1;
- (id)initWithPath:(id)arg1 allowSkipSchema:(bool)arg2;
- (bool)isDbOpen;
- (id)lastTrainingFeaturizationForModelName:(id)arg1 andLocale:(id)arg2;
- (void)limitSessionsByLastUsedTTL:(double)arg1;
- (void)limitSessionsByMaxTimesAccessed;
- (void)limitSessionsForEachLabelWithSessionDescriptor:(id)arg1 totalSessionLimit:(unsigned long long)arg2;
- (void)limitSessionsWithSessionDescriptor:(id)arg1 withLabel:(id)arg2 limit:(unsigned long long)arg3;
- (void)loadDataForModel:(id)arg1 excludeItemIdsUsedWithin:(double)arg2 limit:(unsigned long long)arg3 onlyAppleInternal:(bool)arg4 positiveLabel:(unsigned long long)arg5 skew:(double)arg6 block:(id /* block */)arg7;
- (void)loadDataForModel:(id)arg1 privacyBudgetRefreshPeriod:(double)arg2 labels:(id)arg3 batchSize:(unsigned long long)arg4 block:(id /* block */)arg5;
- (void)loadSessionsForModel:(id)arg1 excludeItemIdsUsedWithin:(double)arg2 limit:(unsigned long long)arg3 onlyAppleInternal:(bool)arg4 block:(id /* block */)arg5;
- (void)loadSessionsForModel:(id)arg1 excludeItemIdsUsedWithin:(double)arg2 limit:(unsigned long long)arg3 onlyAppleInternal:(bool)arg4 positiveLabel:(unsigned long long)arg5 skew:(double)arg6 block:(id /* block */)arg7;
- (void)loadSessionsForModel:(id)arg1 excludeItemIdsUsedWithin:(double)arg2 withSkew:(double)arg3 andLimit:(int)arg4 block:(id /* block */)arg5;
- (void)loadSessionsForModel:(id)arg1 privacyBudgetRefreshPeriod:(double)arg2 labels:(id)arg3 batchSize:(unsigned long long)arg4 block:(id /* block */)arg5;
- (void)logDbNotOpenEvent;
- (long long)migrateTo:(id)arg1;
- (unsigned long long)numberOfRowsInTable:(id)arg1;
- (unsigned long long)sessionDescriptorIdFor:(id)arg1;
- (id)sessionDimensionsForModel:(id)arg1 startingRowId:(unsigned long long)arg2 onlyAppleInternal:(bool)arg3 labelFilter:(id)arg4;
- (id)sessionStats;
- (id)sessionStatsForSessionDescriptor:(id)arg1;
- (void)setMaxTimesAccessed:(unsigned long long)arg1;
- (void)storeSession:(id)arg1 label:(long long)arg2 model:(id)arg3;
- (void)storeSession:(id)arg1 label:(long long)arg2 model:(id)arg3 bundleId:(id)arg4 domainId:(id)arg5 itemIds:(id)arg6 isAppleInternal:(bool)arg7;
- (void)updateLastTrainingFeaturizationForModel:(id)arg1 andData:(id)arg2;
- (void)vacuumDbWithDeferralBlock:(id /* block */)arg1;

@end
