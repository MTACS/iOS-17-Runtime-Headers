
@interface SPAssetCacheSyncData : NSObject {
    NSString * _cacheIdentifier;
    SPAssetCacheAssets * _permanentCache;
    SPAssetCacheAssets * _transientCache;
}

@property (nonatomic, retain) NSString *cacheIdentifier;
@property (nonatomic, retain) SPAssetCacheAssets *permanentCache;
@property (nonatomic, retain) SPAssetCacheAssets *transientCache;

+ (id)fromProto:(id)arg1;
+ (id)toProto:(id)arg1;

- (void).cxx_destruct;
- (id)cacheIdentifier;
- (id)init;
- (id)permanentCache;
- (void)setCacheIdentifier:(id)arg1;
- (void)setPermanentCache:(id)arg1;
- (void)setTransientCache:(id)arg1;
- (id)transientCache;

@end
