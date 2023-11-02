
@interface PXDisplayAssetCountsByPlaybackStyle : NSObject <NSCopying> {
    NSMutableDictionary * _countsByPlaybackStyle;
}

@property (nonatomic, readonly) long long totalCount;

- (void).cxx_destruct;
- (void)addPlaybackStyle:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)countForPlaybackStyle:(long long)arg1;
- (void)enumerateCountsUsingBlock:(id /* block */)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAssetFetchResult:(id)arg1;
- (id)initWithCountsByPlaybackStyle:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setCount:(long long)arg1 forPlaybackStyle:(long long)arg2;
- (long long)totalCount;

@end
