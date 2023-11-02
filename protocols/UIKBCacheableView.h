
@protocol UIKBCacheableView <NSObject>

@required

- (long long)assetIdiom;
- (bool)cacheDeferable;
- (NSString *)cacheKey;
- (NSDictionary *)cacheKeysForRenderFlags:(NSArray *)arg1;
- (double)cachedWidth;
- (bool)keepNonPersistent;

@optional

- (long long)cacheDeferPriority;
- (void)drawContentsOfRenderers:(NSArray *)arg1;

@end
