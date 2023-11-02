
@interface ATXTimeIntelligenceCache : NSObject {
    ATXGenericFileBasedCache * _cache;
}

@property (nonatomic, retain) ATXGenericFileBasedCache *cache;

- (void).cxx_destruct;
- (id)cache;
- (void)cacheEvents:(id)arg1;
- (id)cachedEvents;
- (void)evictCachedEvents;
- (id)init;
- (void)setCache:(id)arg1;

@end
