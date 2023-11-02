
@interface NSSQLSubqueryExpressionIntermediatePredicateVisitor : NSObject {
    bool  _foundKeypath;
    NSSQLIntermediate * _scope;
}

- (bool)checkPredicate:(id)arg1;
- (void)dealloc;
- (void)visitPredicate:(id)arg1;
- (void)visitPredicateExpression:(id)arg1;

@end
