
@interface DNDModeAssertionCurrentLocationLifetime : DNDModeAssertionLifetime

+ (id)sharedInstance;
+ (bool)supportsSecureCoding;

- (id)awakeAfterUsingCoder:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)lifetimeType;

@end
