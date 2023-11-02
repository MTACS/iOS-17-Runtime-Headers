
@interface PKIconImageCache : NSObject {
    NSObject<OS_dispatch_queue> * _cacheAccessQueue;
    NSDictionary * _iconCache;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *cacheAccessQueue;
@property (nonatomic, retain) NSDictionary *iconCache;

+ (id)_cacheKeyToApplicationBundleIdentifierLookup;
+ (id)_cacheKeyToGraphicIconIdentifierLookup;
+ (id)settingsIconCache;
+ (id)settingsIconCacheWithScale:(double)arg1;

- (void).cxx_destruct;
- (id)allImageIconKeys;
- (id)cacheAccessQueue;
- (id)iconCache;
- (id)imageForKey:(id)arg1;
- (id)initWithPath:(id)arg1 scale:(double)arg2;
- (void)setCacheAccessQueue:(id)arg1;
- (void)setIconCache:(id)arg1;

@end
