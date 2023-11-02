
@interface PLFetchRecorderPredicateVisitor : NSObject <NSPredicateVisitor> {
    bool  _foundOperatorIN;
}

@property (nonatomic, readonly) bool foundOperatorIN;

- (void)examinePredicate:(id)arg1;
- (bool)foundOperatorIN;
- (void)reset;
- (void)visitPredicate:(id)arg1;
- (void)visitPredicateExpression:(id)arg1;
- (void)visitPredicateOperator:(id)arg1;

@end
