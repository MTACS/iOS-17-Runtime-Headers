
@protocol BCSFilterShardItemIdentifying <BCSShardItemIdentifying>

@required

- (long long)shardCount;
- (long long)startIndex;

@end
