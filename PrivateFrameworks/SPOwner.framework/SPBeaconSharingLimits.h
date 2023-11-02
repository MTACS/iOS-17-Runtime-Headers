
@interface SPBeaconSharingLimits : NSObject <NSCopying, NSSecureCoding> {
    long long  _maxCircleMembers;
}

@property (nonatomic) long long maxCircleMembers;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMaxCircleMembers:(long long)arg1;
- (long long)maxCircleMembers;
- (void)setMaxCircleMembers:(long long)arg1;

@end
