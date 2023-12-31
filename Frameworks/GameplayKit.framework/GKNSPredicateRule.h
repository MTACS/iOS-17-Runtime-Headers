
@interface GKNSPredicateRule : GKRule {
    NSPredicate * _predicate;
}

@property (nonatomic, readonly, retain) NSPredicate *predicate;

- (void).cxx_destruct;
- (bool)evaluatePredicateWithSystem:(id)arg1;
- (id)initWithPredicate:(id)arg1;
- (id)predicate;

@end
