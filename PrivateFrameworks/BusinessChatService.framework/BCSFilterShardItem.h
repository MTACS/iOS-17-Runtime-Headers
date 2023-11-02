
@interface BCSFilterShardItem : BCSShardItem <BCSFilterShardItemProtocol, NSCopying, NSSecureCoding> {
    _PASBloomFilter * _bloomFilter;
}

@property (nonatomic, readonly) NSString *base64EncodedString;
@property (nonatomic, readonly) _PASBloomFilter *bloomFilter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDate *expirationDate;
@property (getter=isExpired, nonatomic, readonly) bool expired;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long shardCount;
@property (nonatomic, readonly) long long startIndex;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bloomFilter;
- (bool)containsItemMatching:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBloomFilter:(id)arg1 bloomFilterString:(id)arg2 startIndex:(long long)arg3 shardCount:(long long)arg4 type:(long long)arg5 expirationDate:(id)arg6;
- (id)initWithBloomFilterString:(id)arg1 startIndex:(long long)arg2 shardCount:(long long)arg3 type:(long long)arg4 expirationDate:(id)arg5;
- (id)initWithBusinessCallerShardItem:(id)arg1;
- (id)initWithBusinessLinkShardItem:(id)arg1;
- (id)initWithChatSuggestShardItem:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONObj:(id)arg1 type:(long long)arg2;
- (id)initWithRecord:(id)arg1 type:(long long)arg2;
- (id)initWithURL:(id)arg1 type:(long long)arg2;
- (bool)isExpired;

@end
