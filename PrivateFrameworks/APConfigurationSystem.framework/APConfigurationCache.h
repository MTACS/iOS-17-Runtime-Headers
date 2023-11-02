
@interface APConfigurationCache : NSObject <APPurgeableCacheNotifierP> {
    APInMemoryTTLCache * _purgeableCache;
}

@property (nonatomic, retain) APInMemoryTTLCache *purgeableCache;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)configurationForPath:(id)arg1;
- (id)init;
- (id)purgeableCache;
- (void)recentlyAccessedObject:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setPurgeableCache:(id)arg1;

@end
