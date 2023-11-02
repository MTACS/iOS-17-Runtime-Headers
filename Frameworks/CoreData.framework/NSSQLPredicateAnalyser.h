
@interface NSSQLPredicateAnalyser : NSObject <NSPredicateVisitor> {
    NSMutableArray * _allModifierPredicates;
    bool  _compoundPredicate;
    NSMutableArray * _keys;
    NSMutableArray * _setExpressions;
    NSMutableArray * _subqueries;
}

- (void)dealloc;
- (id)init;
- (void)visitPredicate:(id)arg1;
- (void)visitPredicateExpression:(id)arg1;
- (void)visitPredicateOperator:(id)arg1;

@end
