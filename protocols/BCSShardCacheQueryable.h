
@protocol BCSShardCacheQueryable <BCSShardCaching>

@required

- (long long)countOfExpiredShardsOfType:(long long)arg1;
- (long long)countOfShardsOfType:(long long)arg1;

@end
