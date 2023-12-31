
@interface ML3TruthPredicate : ML3Predicate {
    bool  _truthValue;
}

+ (id)falsePredicate;
+ (bool)supportsSecureCoding;
+ (id)truePredicate;

- (id)_predicateString;
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isFalseAlways;
- (bool)isTrueAlways;

@end
