
@interface CTDataUsagePoliciesWrapper : NSObject <NSCopying, NSSecureCoding> {
    NSSet * _policies;
}

@property (nonatomic, readonly) NSSet *policies;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPolicies:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)policies;

@end
