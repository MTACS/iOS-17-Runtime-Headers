
@interface ML3UnaryPredicate : ML3Predicate {
    ML3Predicate * _predicate;
}

@property (nonatomic, retain) ML3Predicate *predicate;

+ (id)predicateWithPredicate:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)SQLJoinClausesForClass:(Class)arg1;
- (id)databaseStatementParameters;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPredicate:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)predicate;
- (void)setPredicate:(id)arg1;

@end