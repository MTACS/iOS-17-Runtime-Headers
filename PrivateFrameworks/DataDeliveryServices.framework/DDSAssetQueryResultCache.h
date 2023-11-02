
@interface DDSAssetQueryResultCache : NSObject <DDSCacheDelegate> {
    DDSCache * _cache;
}

@property (nonatomic, readonly) DDSCache *cache;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cache;
- (void)cache:(id)arg1 willEvictObjects:(id)arg2;
- (void)cacheAssets:(id)arg1 forQuery:(id)arg2;
- (id)cachedAssetsForQuery:(id)arg1;
- (void)clearCache;
- (void)clearCacheForAssetType:(id)arg1;
- (id)init;

@end
