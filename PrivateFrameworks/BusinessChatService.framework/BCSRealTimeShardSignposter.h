
@interface BCSRealTimeShardSignposter : BCSRealTimeSignposter {
    long long  _shardType;
}

@property (nonatomic, readonly) long long shardType;

- (id)_initWithShardType:(long long)arg1 signpostIdentifier:(unsigned long long)arg2;
- (long long)shardType;

@end
