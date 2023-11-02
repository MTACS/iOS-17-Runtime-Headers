
@interface WebApplicationCache : NSObject

+ (long long)defaultOriginQuota;
+ (void)deleteAllApplicationCaches;
+ (void)deleteCacheForOrigin:(id)arg1;
+ (long long)diskUsageForOrigin:(id)arg1;
+ (void)initializeWithBundleIdentifier:(id)arg1;
+ (long long)maximumSize;
+ (id)originsWithCache;
+ (void)setDefaultOriginQuota:(long long)arg1;
+ (void)setMaximumSize:(long long)arg1;

@end
