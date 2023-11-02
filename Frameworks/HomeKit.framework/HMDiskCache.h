
@interface HMDiskCache : HMFObject <HMPersistentCache> {
    NSString * _cachePath;
}

@property (readonly, copy) NSString *cachePath;

- (void).cxx_destruct;
- (id)cachePath;
- (id)initWithCachePath:(id)arg1;
- (id)loadCachedObjectsForCacheWithName:(id)arg1;
- (bool)storeCachedObjects:(id)arg1 forCacheName:(id)arg2;

@end
