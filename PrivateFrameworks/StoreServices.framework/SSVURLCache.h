
@interface SSVURLCache : NSObject {
    NSObject<OS_dispatch_queue> * _accessSerialQueue;
    struct __CFURLStorageSession { } * _cacheStorageSession;
    SSVURLCacheConfiguration * _configuration;
    struct _CFURLCache { } * _urlCache;
}

- (void).cxx_destruct;
- (id)cachedConnectionResponseForRequestProperties:(id)arg1;
- (id)cachedConnectionResponseForRequestProperties:(id)arg1 cachedResponse:(id*)arg2;
- (id)cachedResponseForRequest:(id)arg1;
- (void)configureRequest:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (void)loadMemoryCacheFromDisk;
- (void)removeAllCachedResponses;
- (void)saveMemoryCacheToDisk;
- (void)storeCachedResponse:(id)arg1 forRequest:(id)arg2;
- (void)storeConnectionResponse:(id)arg1 forRequestProperties:(id)arg2;
- (void)storeConnectionResponse:(id)arg1 forRequestProperties:(id)arg2 userInfo:(id)arg3;

@end
