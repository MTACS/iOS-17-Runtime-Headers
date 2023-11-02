
@interface DNDSModeAssertionDateInvalidationPredicate : DNDSModeAssertionInvalidationPredicate {
    NSDate * _date;
}

@property (nonatomic, readonly, copy) NSDate *date;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)predicateType;

@end
