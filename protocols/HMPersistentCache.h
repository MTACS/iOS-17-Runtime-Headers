
@protocol HMPersistentCache

@required

- (NSDictionary *)loadCachedObjectsForCacheWithName:(NSString *)arg1;
- (bool)storeCachedObjects:(NSDictionary *)arg1 forCacheName:(NSString *)arg2;

@end
