
@interface FMFMapImageCache : NSObject {
    NSCache * __cache;
}

@property (nonatomic, retain) NSCache *_cache;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_cache;
- (id)_imageForMap:(id)arg1;
- (id)_keyForHandles:(id)arg1;
- (id)_orientationKey;
- (void)cacheMap:(id)arg1 forHandles:(id)arg2;
- (id)cachedMapForHandles:(id)arg1;
- (void)dealloc;
- (void)set_cache:(id)arg1;

@end
