
@interface BCSShardItem : NSObject <BCSShardItemProtocol, NSCopying, NSSecureCoding> {
    NSString * _base64EncodedString;
    NSDate * _expirationDate;
    long long  _shardCount;
    long long  _startIndex;
    long long  _type;
}

@property (nonatomic, retain) NSString *base64EncodedString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDate *expirationDate;
@property (getter=isExpired, nonatomic, readonly) bool expired;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long shardCount;
@property (nonatomic) long long startIndex;
@property (readonly) Class superclass;
@property (nonatomic) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)base64EncodedString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (id)initWithBase64EncodedString:(id)arg1 shardType:(long long)arg2 startIndex:(long long)arg3 shardCount:(long long)arg4 expirationDate:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (bool)isExpired;
- (void)setBase64EncodedString:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setShardCount:(long long)arg1;
- (void)setStartIndex:(long long)arg1;
- (void)setType:(long long)arg1;
- (long long)shardCount;
- (long long)startIndex;
- (long long)type;

@end
