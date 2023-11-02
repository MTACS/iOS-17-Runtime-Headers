
@interface ATXHeuristicCacheContextStoreExpirer : ATXHeuristicCacheExpirer <NSSecureCoding> {
    _CDContextualKeyPath * _contextKeyPath;
    _CDContextualPredicate * _predicate;
    _CDContextualChangeRegistration * _registration;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_start;
- (void)_stop;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCDContextualKeyPath:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
