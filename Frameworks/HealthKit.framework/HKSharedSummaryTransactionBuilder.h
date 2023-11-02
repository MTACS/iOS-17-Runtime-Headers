
@interface HKSharedSummaryTransactionBuilder : NSObject <_HKXPCExportable> {
    NSMutableSet * _cachedSummaries;
    bool  _cachingEnabled;
    NSMutableSet * _fallbackCachedSummaries;
    bool  _hasPrimedCache;
    bool  _hasPrimedFallbackCache;
    HKHealthStore * _healthStore;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HKTaskServerProxyProvider * _proxyProvider;
    NSUUID * _transactionUUID;
    NSMutableArray * _workPendingCachePrime;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *transactionUUID;

+ (id)clientInterface;
+ (id)serverInterface;

- (void).cxx_destruct;
- (void)_considerRunningCachePendingWork;
- (void)_lock_addFallbackSummariesToCache:(id)arg1;
- (void)_lock_addSummariesToCache:(id)arg1;
- (bool)_lock_cacheIsPrimed;
- (id)_lock_cachedAddedSummariesWithPackage:(id)arg1 names:(id)arg2 error:(id*)arg3;
- (void)addMetadata:(id)arg1 completion:(id /* block */)arg2;
- (void)addSummaries:(id)arg1 completion:(id /* block */)arg2;
- (void)addedSummariesWithPackage:(id)arg1 names:(id)arg2 resultsHandler:(id /* block */)arg3;
- (void)commitAsUrgent:(bool)arg1 completion:(id /* block */)arg2;
- (void)commitWithCompletion:(id /* block */)arg1;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (void)discardWithCompletion:(id /* block */)arg1;
- (void)enableCachingAndPrewarmWithFallbackTransactionFilter:(id /* block */)arg1;
- (id)exportedInterface;
- (id)initWithHealthStore:(id)arg1;
- (id)initWithHealthStore:(id)arg1 transactionUUID:(id)arg2;
- (id)initWithHealthStore:(id)arg1 transactionUUID:(id)arg2 allowCommitted:(bool)arg3;
- (id)isCommittedWithError:(id*)arg1;
- (id)remoteInterface;
- (void)removeAllSummariesWithPackage:(id)arg1 completion:(id /* block */)arg2;
- (void)removeSummariesWithPackage:(id)arg1 names:(id)arg2 completion:(id /* block */)arg3;
- (void)removeSummariesWithUUIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)reuseAllSummariesWithPackage:(id)arg1 completion:(id /* block */)arg2;
- (void)reuseSummaries:(id)arg1 completion:(id /* block */)arg2;
- (void)reuseSummariesWithPackage:(id)arg1 names:(id)arg2 completion:(id /* block */)arg3;
- (void)reuseSummariesWithUUIDs:(id)arg1 completion:(id /* block */)arg2;
- (id)transactionUUID;

@end
