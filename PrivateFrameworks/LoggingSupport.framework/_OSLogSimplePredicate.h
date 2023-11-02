
@interface _OSLogSimplePredicate : NSObject <NSPredicateVisitor> {
    NSSet * _keys;
    NSSet * _operators;
    NSPredicate * _predicate;
    NSMutableArray * _stack;
}

@property (nonatomic, readonly) NSPredicate *predicate;

- (void).cxx_destruct;
- (id)initWithPredicate:(id)arg1 supportedKeys:(id)arg2 supportedOperators:(id)arg3;
- (bool)isSupportedExpression:(id)arg1;
- (id)predicate;
- (void)processComparisonPredicate:(id)arg1;
- (void)processCompoundPredicate:(id)arg1;
- (void)visitPredicate:(id)arg1;
- (void)visitPredicateExpression:(id)arg1;
- (void)visitPredicateOperator:(id)arg1;

@end
