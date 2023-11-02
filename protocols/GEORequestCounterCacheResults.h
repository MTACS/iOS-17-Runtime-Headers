
@protocol GEORequestCounterCacheResults <NSObject>

@required

- (NSString *)appId;
- (unsigned int)cacheExpiredCount;
- (unsigned int)cacheHitCount;
- (unsigned int)cacheMissCount;
- (int)requestType;
- (NSDateInterval *)timeRange;

@end
