
@interface FCCachePolicy : NSObject <NSCopying> {
    unsigned long long  _cachePolicy;
    double  _maximumCachedAge;
}

@property (nonatomic) unsigned long long cachePolicy;
@property (nonatomic) double maximumCachedAge;
@property (nonatomic, readonly) NSDate *oldestAllowedDate;

+ (id)cachePolicyWithSoftMaxAge:(double)arg1;
+ (id)cachedOnlyCachePolicy;
+ (id)defaultCachePolicy;
+ (id)ignoreCacheCachePolicy;

- (unsigned long long)cachePolicy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)maximumCachedAge;
- (id)oldestAllowedDate;
- (void)setCachePolicy:(unsigned long long)arg1;
- (void)setMaximumCachedAge:(double)arg1;

@end
