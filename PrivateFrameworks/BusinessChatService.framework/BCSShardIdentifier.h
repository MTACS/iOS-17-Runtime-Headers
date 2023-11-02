
@interface BCSShardIdentifier : NSObject <BCSFilterShardItemIdentifying, NSCopying> {
    long long  _shardCount;
    long long  _startIndex;
    long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long shardCount;
@property (nonatomic) long long startIndex;
@property (readonly) Class superclass;
@property (nonatomic) long long type;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)setShardCount:(long long)arg1;
- (void)setStartIndex:(long long)arg1;
- (void)setType:(long long)arg1;
- (long long)shardCount;
- (long long)startIndex;
- (long long)type;

@end
