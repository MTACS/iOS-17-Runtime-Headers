
@interface PLCloudResourcePrefetchPredicateOptions : NSObject <NSCopying> {
    bool  _excludeDynamicResources;
    PLPrefetchConfiguration * _prefetchConfiguration;
    long long  _prefetchMode;
    long long  _prefetchOptimizeMode;
}

@property (nonatomic) bool excludeDynamicResources;
@property (nonatomic, retain) PLPrefetchConfiguration *prefetchConfiguration;
@property (nonatomic) long long prefetchMode;
@property (nonatomic) long long prefetchOptimizeMode;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)excludeDynamicResources;
- (id)initWithPrefetchMode:(long long)arg1 prefetchOptimizeMode:(long long)arg2 excludeDynamicResources:(bool)arg3 prefetchConfiguration:(id)arg4;
- (id)prefetchConfiguration;
- (long long)prefetchMode;
- (long long)prefetchOptimizeMode;
- (void)setExcludeDynamicResources:(bool)arg1;
- (void)setPrefetchConfiguration:(id)arg1;
- (void)setPrefetchMode:(long long)arg1;
- (void)setPrefetchOptimizeMode:(long long)arg1;

@end
