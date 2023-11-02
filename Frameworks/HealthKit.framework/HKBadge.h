
@interface HKBadge : NSObject <NSCopying, NSSecureCoding> {
    long long  _count;
    long long  _type;
}

@property (getter=isErrorBadge, nonatomic, readonly) bool errorBadge;
@property (getter=isIndicatorBadge, nonatomic, readonly) bool indicatorBadge;
@property (nonatomic, readonly, copy) NSNumber *keyValueRepresentation;
@property (getter=isNumberBadge, nonatomic, readonly) bool numberBadge;
@property (nonatomic, readonly, copy) NSString *stringValue;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly, copy) <NSObject> *value;
@property (getter=isZeroBadge, nonatomic, readonly) bool zeroBadge;

+ (id)badgeFromKeyValueRepresentation:(id)arg1;
+ (id)errorBadge;
+ (id)indicatorBadge;
+ (id)numberBadgeWithCount:(long long)arg1;
+ (bool)supportsSecureCoding;
+ (id)zeroBadge;

- (id)badgeByAggregatingWithBadge:(id)arg1;
- (id)badgeByIncrementingByCount:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 count:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isErrorBadge;
- (bool)isIndicatorBadge;
- (bool)isNumberBadge;
- (bool)isZeroBadge;
- (id)keyValueRepresentation;
- (id)stringValue;
- (long long)type;
- (id)value;

@end
