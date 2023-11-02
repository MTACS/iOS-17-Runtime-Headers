
@interface ACHPredicateExpressionValidator : NSObject <NSPredicateVisitor> {
    NSMutableArray * _issues;
    bool  _operatorsValid;
    bool  _predicateExpressionValid;
}

- (void).cxx_destruct;
- (void)_addIssue:(id)arg1;
- (id)validateExpressionString:(id)arg1;
- (id)validateTemplate:(id)arg1;
- (void)visitPredicate:(id)arg1;
- (void)visitPredicateExpression:(id)arg1;
- (void)visitPredicateExpression:(id)arg1 keyPathScope:(id)arg2 key:(id)arg3;
- (void)visitPredicateOperator:(id)arg1;

@end
