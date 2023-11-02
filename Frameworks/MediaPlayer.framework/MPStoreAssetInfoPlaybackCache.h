
@interface MPStoreAssetInfoPlaybackCache : NSObject {
    NSMutableArray * _accessOrderedRequests;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _requestToCachedResponse;
}

+ (id)sharedCache;

- (void).cxx_destruct;
- (id)_init;
- (void)addCachedResponse:(id)arg1 forRequest:(id)arg2;
- (id)cachedResponseForRequest:(id)arg1;
- (void)updateForPlaybackOfFileAsset:(id)arg1 fromResponse:(id)arg2;
- (void)withSyncLock:(id /* block */)arg1;

@end
