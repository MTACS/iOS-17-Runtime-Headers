
@interface ATXInformationHeuristicRefreshContextChangeTrigger : ATXInformationHeuristicRefreshTrigger <NSSecureCoding> {
    _CDContextualKeyPath * _contextKeyPath;
    _CDContextualPredicate * _predicate;
    _CDContextualChangeRegistration * _registration;
    NSString * _registrationIdentifier;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_start;
- (void)_stop;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCDContextualKeyPath:(id)arg1;
- (id)initWithCDContextualKeyPath:(id)arg1 equalToValue:(id)arg2 withMinimumDurationInPreviousState:(double)arg3;
- (id)initWithCDContextualKeyPath:(id)arg1 predicate:(id)arg2 registrationIdentifier:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
