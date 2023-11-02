
@interface SCNAssetCatalog : NSObject {
    NSMutableDictionary * _cache;
    NSURL * _catalogURL;
    NSDictionary * _db;
}

@property (nonatomic, readonly) NSURL *catalogURL;

+ (id)assetCatalogForResourceURL:(id)arg1;
+ (id)assetCatalogNamed:(id)arg1;
+ (id)assetCatalogWithURL:(id)arg1;
+ (void)clearCache;
+ (id)objectWithName:(id)arg1 class:(Class)arg2;
+ (id)recursivePathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2;

- (id)URLOfResourceNamed:(id)arg1;
- (id)actionNamed:(id)arg1;
- (id)animationNamed:(id)arg1;
- (void)cacheObject:(id)arg1 withTimestamp:(double)arg2 forKey:(id)arg3;
- (id)catalogURL;
- (void)dealloc;
- (id)particleSystemNamed:(id)arg1;
- (id)pathByMakingURLRelativeToCatalog:(id)arg1;
- (id)sceneNamed:(id)arg1;
- (id)sceneWithURL:(id)arg1;

@end
