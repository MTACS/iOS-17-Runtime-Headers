
@interface EDThreadScopeManager : NSObject <EFLoggable> {
    <EDThreadScopeManagerDataSource> * _dataSource;
    <EFScheduler> * _evictionScheduler;
    NSMutableDictionary * _threadScopes;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _threadScopesLock;
}

@property (nonatomic, readonly) <EDThreadScopeManagerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <EFScheduler> *evictionScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *threadScopes;

+ (id)log;
+ (id)mailboxTypesToPrecompute;

- (void).cxx_destruct;
- (void)_evictAtLeast:(unsigned long long)arg1 upTo:(unsigned long long)arg2 fromThreadScopesWithDatabaseIDs:(id)arg3;
- (double)_evictionScoreForCount:(unsigned long long)arg1 timeInterval:(double)arg2;
- (void)_initializeThreadScopesIfNeeded;
- (id)_mailboxFromPrecomputedMailboxScope:(id)arg1 mailboxProvider:(id)arg2 mailboxPredicate:(id*)arg3;
- (id)_mailboxScopeFromPredicate:(id)arg1;
- (unsigned long long)_numberOfThreadScopesToEvictFrom:(id)arg1 upTo:(unsigned long long*)arg2;
- (id)_precomputedMailboxScopeForFilterPredicate:(id)arg1 mailboxProvider:(id)arg2 foundPredicates:(unsigned long long*)arg3;
- (bool)_shouldPrecomputeMailboxType:(id)arg1;
- (bool)_shouldPrecomputeMailboxWithObjectID:(id)arg1;
- (id)_threadScopeInfoForThreadScope:(id)arg1;
- (id)_threadScopesWithLastViewedOlderThanLimit;
- (void)addThreadScope:(id)arg1 withDatabaseID:(long long)arg2 needsUpdate:(bool)arg3 lastViewedDate:(id)arg4;
- (id)dataSource;
- (long long)databaseIDForThreadScope:(id)arg1;
- (id)evictionScheduler;
- (id)initWithDataSource:(id)arg1;
- (bool)isThreadScopePrecomputed:(id)arg1 mailboxProvider:(id)arg2 shouldMigrate:(bool*)arg3;
- (id)precomputedMailboxScopeForThreadScope:(id)arg1 mailboxProvider:(id)arg2 foundPredicates:(unsigned long long*)arg3;
- (void)removeAllThreadScopes;
- (void)removeThreadScope:(id)arg1;
- (void)removeThreadScopesForMailboxScope:(id)arg1;
- (void)setLastViewedDate:(id)arg1 forThreadScope:(id)arg2;
- (void)setNeedsUpdate:(bool)arg1 forThreadScope:(id)arg2;
- (id)threadScopeFromPrecomputedMailboxScope:(id)arg1 predicates:(unsigned long long)arg2 mailboxProvider:(id)arg3;
- (id)threadScopes;
- (id)threadScopesByDatabaseID;

@end
