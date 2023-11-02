
@interface DNDModeAssertionUserRequestedLifetime : DNDModeAssertionLifetime

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)lifetimeType;

@end
