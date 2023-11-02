
@interface NSPredicateRule : NURule {
    NSPredicate * _predicate;
}

@property (nonatomic, readonly, retain) NSPredicate *predicate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (bool)evaluatePredicateWithSystem:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPredicate:(id)arg1;
- (id)predicate;

@end
