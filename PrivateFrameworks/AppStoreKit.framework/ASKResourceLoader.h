
@interface ASKResourceLoader : NSObject {
    NSOperationQueue * _accessQueue;
    ASKResourceCache * _cachedResources;
    bool  _isInBackground;
    NSOperationQueue * _notificationQueue;
    NSMutableDictionary * _pendingOperations;
    long long  _requestCountMap;
    NSOperationQueue * _requestQueue;
    NSMapTable * _requestsByCacheKey;
}

@property (nonatomic, readonly) NSOperationQueue *accessQueue;
@property (nonatomic, readonly) ASKResourceCache *cachedResources;
@property (nonatomic, readonly) bool isIdle;
@property (nonatomic, readonly) bool isInBackground;
@property (nonatomic, readonly) NSOperationQueue *notificationQueue;
@property (nonatomic, readonly) NSMutableDictionary *pendingOperations;
@property (nonatomic, readonly) NSOperationQueue *requestQueue;
@property (nonatomic, readonly) NSMapTable *requestsByCacheKey;

- (void).cxx_destruct;
- (void)_commonInit;
- (id)accessQueue;
- (void)addResource:(id)arg1 forCacheKey:(id)arg2;
- (id)cachedResources;
- (id)cachedResourcesForCacheKey:(id)arg1;
- (void)cancelAllRequests;
- (void)cancelRequestForCacheKey:(id)arg1;
- (long long)currentQualityOfService;
- (void)dealloc;
- (id)description;
- (void)enterBackground;
- (void)enterForeground;
- (void)finishLoadForRequest:(id)arg1 withResource:(id)arg2 error:(id)arg3;
- (id)init;
- (id)initWithParentResourceLoader:(id)arg1;
- (id)initWithRequestQueue:(id)arg1 accessQueue:(id)arg2 notificationQueue:(id)arg3 cacheLimit:(long long)arg4;
- (bool)isIdle;
- (bool)isIdleForReason:(long long)arg1;
- (bool)isInBackground;
- (bool)loadResourceWithRequest:(id)arg1 reason:(long long)arg2;
- (id)notificationQueue;
- (id)pendingOperations;
- (void)postDidBeginLoadingForReason:(long long)arg1 requestKey:(id)arg2;
- (void)postDidBeginLoadingIfIdle;
- (void)postDidFinishLoadingForReason:(long long)arg1 requestKey:(id)arg2;
- (void)postDidIdleIfIdle;
- (void)postDidLoadAllForReason:(long long)arg1;
- (void)removeAllCachedResources;
- (void)reprioritizeOperations;
- (id)requestKeyForCacheKey:(id)arg1;
- (id)requestQueue;
- (id)requestsByCacheKey;
- (bool)setReason:(long long)arg1 forRequestWithKey:(id)arg2;
- (void)updateLoadReason:(long long)arg1 forOperation:(id)arg2 requestKey:(id)arg3;

@end
