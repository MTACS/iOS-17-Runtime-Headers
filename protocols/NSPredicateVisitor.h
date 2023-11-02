
@protocol NSPredicateVisitor

@required

- (void)visitPredicate:(NSPredicate *)arg1;
- (void)visitPredicateExpression:(NSExpression *)arg1;
- (void)visitPredicateOperator:(NSPredicateOperator *)arg1;

@optional

- (void)visitPredicateExpression:(NSExpression *)arg1 keyPathScope:(NSString *)arg2 key:(NSString *)arg3;

@end
