
@interface ASCLockupViewGroup : NSObject {
    NSMutableDictionary * _deferredRequests;
    bool  _hasScheduledBatchRequest;
    ASCLockupFetcher * _lockupFetcher;
    NSString * _name;
    NSMutableArray * _prefetchSpansIfLoaded;
}

@property (nonatomic, readonly) NSMutableDictionary *deferredRequests;
@property (nonatomic) bool hasScheduledBatchRequest;
@property (nonatomic, readonly) ASCLockupFetcher *lockupFetcher;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) NSMutableArray *prefetchSpans;
@property (nonatomic, retain) NSMutableArray *prefetchSpansIfLoaded;

+ (void)createConnectionWithCompletionBlock:(id /* block */)arg1;
+ (id)log;

- (void).cxx_destruct;
- (void)_cacheLockupsWithCollectionRequest:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)_cacheLockupsWithRequests:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)_lockupDictionaryForRequest:(id)arg1 includingKeys:(id)arg2 withCompletionBlock:(id /* block */)arg3;
- (void)_lockupRequestForBundleID:(id)arg1 withContext:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)_prefetchLockupsWithRequests:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (id)deferredRequests;
- (id)description;
- (bool)hasScheduledBatchRequest;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 lockupFetcher:(id)arg2;
- (id)lockupFetcher;
- (id)lockupWithRequest:(id)arg1;
- (id)name;
- (void)performBatchRequests;
- (id)prefetchSpans;
- (id)prefetchSpansIfLoaded;
- (void)scheduleBatchRequestsIfNeeded;
- (void)setHasScheduledBatchRequest:(bool)arg1;
- (void)setPrefetchSpansIfLoaded:(id)arg1;

@end
