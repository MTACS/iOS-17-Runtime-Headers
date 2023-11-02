
@interface MTAVAssetCache : MTSingleton {
    AVAssetCache * _assetCache;
}

@property (nonatomic, readonly) AVAssetCache *assetCache;

+ (void)_asyncPrewarm;

- (void).cxx_destruct;
- (id)assetCache;
- (id)init;

@end
