
@protocol BCSShardCaching <BCSBatchable>

@required

- (void)deleteExpiredShardItemsOfType:(long long)arg1;
- (void)deleteShardItemMatching:(id <BCSShardItemIdentifying>)arg1;
- (void)deleteShardItemsOfType:(long long)arg1;
- (<BCSShardItemProtocol> *)shardItemMatching:(id <BCSShardItemIdentifying>)arg1;
- (void)updateShardItem:(id <BCSShardItemProtocol>)arg1 withShardIdentifier:(id <BCSShardItemIdentifying>)arg2;

@end
