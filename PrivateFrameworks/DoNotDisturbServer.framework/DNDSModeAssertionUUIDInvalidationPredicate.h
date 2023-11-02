
@interface DNDSModeAssertionUUIDInvalidationPredicate : DNDSModeAssertionInvalidationPredicate {
    NSArray * _UUIDs;
}

@property (nonatomic, readonly, copy) NSArray *UUIDs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUIDs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUIDs:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)predicateType;

@end
