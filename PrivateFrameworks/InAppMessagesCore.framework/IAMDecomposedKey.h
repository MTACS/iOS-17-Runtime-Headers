
@interface IAMDecomposedKey : NSObject {
    NSMutableDictionary * _ruleDestructuredIdentifiers;
    NSCompoundPredicate * compoundPredicate;
    bool  compoundPredicateNeedsInitialization;
    NSMutableArray * rawPredicateConditions;
}

@property (nonatomic, retain) NSMutableDictionary *ruleDestructuredIdentifiers;

- (void).cxx_destruct;
- (void)addPredicateCondition:(id)arg1;
- (void)constructCompoundPredicateIfNeeded;
- (bool)hasPredicates;
- (id)init;
- (bool)predicatesMatchFigaroEventProperties:(id)arg1;
- (id)ruleDestructuredIdentifiers;
- (void)setRuleDestructuredIdentifiers:(id)arg1;

@end
