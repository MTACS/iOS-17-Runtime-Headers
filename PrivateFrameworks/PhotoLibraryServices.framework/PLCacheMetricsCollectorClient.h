
@interface PLCacheMetricsCollectorClient : NSObject

- (void)incrementImageCacheHitCount;
- (void)incrementImageCacheMissCount;
- (void)incrementVideoComplementCacheHitCount;
- (void)incrementVideoComplementCacheMissCount;
- (id)initWithAssetsdClient:(id)arg1;

@end
