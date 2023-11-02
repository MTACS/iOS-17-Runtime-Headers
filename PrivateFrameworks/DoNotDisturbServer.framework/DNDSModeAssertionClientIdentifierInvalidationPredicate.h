
@interface DNDSModeAssertionClientIdentifierInvalidationPredicate : DNDSModeAssertionInvalidationPredicate {
    NSArray * _clientIdentifiers;
}

@property (nonatomic, readonly, copy) NSArray *clientIdentifiers;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)clientIdentifiers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;
- (unsigned long long)hash;
- (id)initWithClientIdentifiers:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)predicateType;

@end
