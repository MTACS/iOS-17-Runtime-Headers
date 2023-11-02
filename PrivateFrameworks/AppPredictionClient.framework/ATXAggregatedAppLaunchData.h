
@interface ATXAggregatedAppLaunchData : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _rawLaunchCount;
    unsigned long long  _uniqueDaysLaunched;
}

@property (nonatomic, readonly) unsigned long long rawLaunchCount;
@property (nonatomic, readonly) unsigned long long uniqueDaysLaunched;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRawLaunchCount:(unsigned long long)arg1 uniqueDaysLaunched:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isGreaterThanOrEqualTo:(id)arg1;
- (unsigned long long)rawLaunchCount;
- (unsigned long long)uniqueDaysLaunched;

@end
