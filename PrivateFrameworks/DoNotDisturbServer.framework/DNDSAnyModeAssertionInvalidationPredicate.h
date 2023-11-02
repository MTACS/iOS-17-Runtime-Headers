
@interface DNDSAnyModeAssertionInvalidationPredicate : DNDSModeAssertionInvalidationPredicate

+ (id)sharedInstance;
+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)predicateType;

@end
