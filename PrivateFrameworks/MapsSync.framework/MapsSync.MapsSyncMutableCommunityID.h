
@interface MapsSync.MapsSyncMutableCommunityID : MapsSync.MapsSyncMutableBaseItem {
    void _proxyObject;
}

@property (nonatomic, copy) NSString *communityIdentifier;
@property (nonatomic) bool expired;
@property (nonatomic) long long usedCount;

- (void).cxx_destruct;
- (id)communityIdentifier;
- (bool)expired;
- (id)initWithProxyObject:(id)arg1;
- (void)setCommunityIdentifier:(id)arg1;
- (void)setExpired:(bool)arg1;
- (void)setUsedCount:(long long)arg1;
- (long long)usedCount;

@end
