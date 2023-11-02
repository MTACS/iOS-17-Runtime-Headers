
@interface EDRemoteContentPersistence : NSObject <EDPersistenceDatabaseProtectedSchemaProvider, EDPersistenceDatabaseSchemaProvider, EFContentProtectionObserver> {
    NSBackgroundActivityScheduler * _analyticsScheduler;
    NSObject<OS_dispatch_queue> * _contentProtectionQueue;
    long long  _currentRowCount;
    EDPersistenceDatabase * _database;
    unsigned long long  _maximumRemoteContentLinks;
    long long  _protectedRowCount;
    unsigned long long  _pruneThreshold;
    bool  _useAdditionalTable;
}

@property (nonatomic, readonly) NSBackgroundActivityScheduler *analyticsScheduler;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *contentProtectionQueue;
@property (nonatomic, readonly) EDPersistenceDatabase *database;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long maximumRemoteContentLinks;
@property (nonatomic) unsigned long long pruneThreshold;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool useAdditionalTable;

+ (id)_remoteContentLinksTableSchemaWithName:(id)arg1;
+ (id)protectedTablesAndForeignKeysToResolve:(id*)arg1;
+ (id)tablesAndForeignKeysToResolve:(id*)arg1 associationsToResolve:(id*)arg2;

- (void).cxx_destruct;
- (bool)_addRemoteContentLinks:(id)arg1 withDate:(id)arg2 toTable:(id)arg3 withConnection:(id)arg4 newLinks:(id*)arg5;
- (unsigned long long)_currentRowCount;
- (void)_decrementCurrentRowCountBy:(unsigned long long)arg1;
- (void)_decrementProtectedRowCountBy:(unsigned long long)arg1;
- (id)_getRemoteContentURLInfoForTable:(id)arg1 orderedBy:(long long)arg2 inReverseOrder:(bool)arg3 limit:(long long)arg4 connection:(id)arg5 error:(id*)arg6;
- (void)_incrementCurrentRowCountBy:(unsigned long long)arg1;
- (void)_incrementProtectedRowCountBy:(unsigned long long)arg1;
- (void)_initializeCurrentRowCount;
- (void)_initializeProtectedRowCount;
- (unsigned long long)_protectedRowCount;
- (void)_refillFromAdditionalTable;
- (long long)_rowCountForTable:(id)arg1;
- (bool)addRemoteContentLinks:(id)arg1 newLinks:(id*)arg2;
- (id)analyticsScheduler;
- (id)contentProtectionQueue;
- (void)contentProtectionStateChanged:(long long)arg1 previousState:(long long)arg2;
- (unsigned long long)countOfLinksLastSeenSince:(id)arg1;
- (unsigned long long)countOfUnrequestedLinks;
- (id)database;
- (void)dealloc;
- (id)getRemoteContentURLInfoOrderedBy:(long long)arg1 inReverseOrder:(bool)arg2 limit:(long long)arg3 error:(id*)arg4;
- (id)initWithDatabase:(id)arg1 useAdditionalTable:(bool)arg2;
- (unsigned long long)maximumRemoteContentLinks;
- (bool)pruneAllRemoteContentLinksWithMinimumCount:(unsigned long long)arg1;
- (unsigned long long)pruneThreshold;
- (id)remoteContentLinksBelowCount:(unsigned long long)arg1 limit:(unsigned long long)arg2;
- (void)setMaximumRemoteContentLinks:(unsigned long long)arg1;
- (void)setPruneThreshold:(unsigned long long)arg1;
- (void)test_tearDown;
- (bool)updateRequestCountForRemoteContentLinks:(id)arg1 updateLastSeen:(bool)arg2;
- (bool)useAdditionalTable;

@end
