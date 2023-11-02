
@interface DNDNotificationFilterPredicateValidator : NSObject <NSPredicateVisitor> {
    NSString * _compileTimeIssues;
}

- (void).cxx_destruct;
- (bool)validatePredicate:(id)arg1 compileTimeIssues:(id*)arg2 runTimeIssues:(id*)arg3;
- (void)visitPredicate:(id)arg1;
- (void)visitPredicateExpression:(id)arg1;
- (void)visitPredicateOperator:(id)arg1;

@end
