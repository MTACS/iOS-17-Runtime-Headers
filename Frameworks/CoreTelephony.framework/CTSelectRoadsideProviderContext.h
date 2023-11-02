
@interface CTSelectRoadsideProviderContext : NSObject <NSCopying, NSSecureCoding> {
    long long  _providerId;
}

@property (nonatomic) long long providerId;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCTSelectRoadsideProviderContext:(id)arg1;
- (long long)providerId;
- (void)setProviderId:(long long)arg1;

@end
