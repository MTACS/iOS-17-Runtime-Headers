
@interface BCSDomainConfigItem : BCSConfigItem {
    NSURL * _domainMegaShardURL;
    long long  _domainShardCount;
    long long  _filterShardCount;
}

@property (nonatomic, readonly) NSURL *domainMegaShardURL;
@property (nonatomic, readonly) long long domainShardCount;

+ (id)keysRequestedForCloudKitFetch;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)domainMegaShardURL;
- (long long)domainShardCount;
- (void)encodeWithCoder:(id)arg1;
- (long long)filterShardCount;
- (id)initWithBuckets:(long long)arg1 domainShards:(long long)arg2 filterShards:(long long)arg3 expirationDate:(id)arg4;
- (id)initWithBuckets:(long long)arg1 domainShards:(long long)arg2 filterShards:(long long)arg3 expirationDate:(id)arg4 filterMegaShardURL:(id)arg5 domainMegaShardURL:(id)arg6 itemTTL:(id)arg7;
- (id)initWithBuckets:(long long)arg1 shards:(long long)arg2 expirationDate:(id)arg3 filterMegaShardURL:(id)arg4 itemTTL:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONObj:(id)arg1;
- (id)initWithRecord:(id)arg1;

@end
