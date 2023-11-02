
@interface ML3NegationPredicate : ML3UnaryPredicate

+ (bool)supportsSecureCoding;

- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;
- (id)description;

@end
