
@interface CKSQLiteCacheTable : CKSQLiteTable {
    double  _cacheExpirationTime;
    bool  _dataExpireScheduled;
    unsigned long long  _dataSizeLimit;
    unsigned long long  _entryCountLimit;
    bool  _expireCheckPending;
    double  _expireDelay;
    CKSQLiteCacheTableTrackingTable * _trackingTable;
}

@property (nonatomic, readonly) double cacheExpirationTime;
@property (nonatomic, readonly) unsigned long long dataSizeLimit;
@property (nonatomic, readonly) unsigned long long entryCountLimit;
@property (nonatomic, readonly) double expireDelay;

+ (id)dataSizeProperties;
+ (id)dbProperties;

- (void).cxx_destruct;
- (void)activityTriggerWasRolledBack;
- (void)activityTriggered:(id)arg1;
- (double)cacheExpirationTime;
- (id)createTableSQL;
- (unsigned long long)dataSizeLimit;
- (id)didCreateDatabaseTable;
- (unsigned long long)entryCount;
- (unsigned long long)entryCountLimit;
- (unsigned long long)entryDataSize;
- (void)expire:(id)arg1;
- (unsigned long long)expireByCount:(id)arg1;
- (unsigned long long)expireByDataSize:(id)arg1;
- (unsigned long long)expireByTime:(id)arg1;
- (double)expireDelay;
- (id)extendExpiration:(id)arg1;
- (id)extraGroupTables:(id)arg1;
- (void)fetchExpirationDate:(id)arg1;
- (id)initWithLogicalTableName:(id)arg1 entryCountLimit:(unsigned long long)arg2 dataSizeLimit:(unsigned long long)arg3 expirationTime:(double)arg4 expireDelay:(double)arg5;
- (id)insertObject:(id)arg1;
- (id)insertObject:(id)arg1 orUpdateProperties:(id)arg2 label:(id)arg3;
- (id)oldestFirstEnumerator;
- (void)periodicExpire;
- (id)setEntryExpiration:(id)arg1 date:(id)arg2;
- (unsigned long long)setProperties:(id)arg1 valuesToStore:(id)arg2 inEntriesMatching:(id)arg3 label:(id)arg4 error:(id*)arg5 predicate:(id /* block */)arg6;
- (id)trackingEntry;
- (void)transactionExpireCheck;
- (id)wakeFromDatabase;

@end
