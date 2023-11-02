
@interface BCSConfigItem : NSObject <BCSExpiring, NSCopying, NSSecureCoding> {
    long long  _buckets;
    NSDate * _expirationDate;
    NSURL * _filterMegaShardURL;
    NSNumber * _itemTTL;
    long long  _shards;
}

@property (nonatomic, readonly) long long buckets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDate *expirationDate;
@property (getter=isExpired, nonatomic, readonly) bool expired;
@property (nonatomic, readonly) NSURL *filterMegaShardURL;
@property (nonatomic, readonly) long long filterShardCount;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *itemTTL;
@property (readonly) Class superclass;

+ (id)keysRequestedForCloudKitFetch;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_extractItemTTLFromConfigRecord:(id)arg1;
- (long long)buckets;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (id)filterMegaShardURL;
- (long long)filterShardCount;
- (id)initWithBuckets:(long long)arg1 shards:(long long)arg2 expirationDate:(id)arg3;
- (id)initWithBuckets:(long long)arg1 shards:(long long)arg2 expirationDate:(id)arg3 filterMegaShardURL:(id)arg4 itemTTL:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONObj:(id)arg1;
- (id)initWithRecord:(id)arg1;
- (bool)isExpired;
- (id)itemTTL;

@end
