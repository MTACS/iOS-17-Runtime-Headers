
@interface _OSLogPredicateMapper : NSObject <NSPredicateVisitor> {
    unsigned long long  _flags;
    int  _pass;
    NSPredicate * _predicate;
    NSMutableArray * _stack;
    NSMutableArray * _validationErrors;
}

@property (nonatomic, readonly) unsigned long long flags;
@property (nonatomic, readonly) NSPredicate *mappedPredicate;
@property (nonatomic, retain) NSMutableArray *stack;
@property (nonatomic, readonly) NSMutableSet *validKeyPaths;
@property (nonatomic, readonly) NSArray *validationErrors;

- (void).cxx_destruct;
- (unsigned long long)flags;
- (id)initWithPredicate:(id)arg1;
- (id)initWithPredicate:(id)arg1 andValidate:(bool)arg2;
- (id)mapEventTypeExpression:(id)arg1;
- (id)mapKeywordToConstantExpression:(id)arg1 keywordMap:(id)arg2;
- (void)mapLeftExpression:(id*)arg1 andRightExpression:(id*)arg2;
- (id)mapMessageTypeExpression:(id)arg1;
- (id)mapSignpostScopeExpression:(id)arg1;
- (id)mapSignpostTypeExpression:(id)arg1;
- (id)mappedPredicate;
- (void)processComparisonPredicate:(id)arg1;
- (void)processCompoundPredicate:(id)arg1;
- (void)setStack:(id)arg1;
- (id)stack;
- (id)validKeyPaths;
- (void)validateExpression:(id)arg1;
- (id)validationErrors;
- (void)visitPredicate:(id)arg1;
- (void)visitPredicateExpression:(id)arg1;
- (void)visitPredicateOperator:(id)arg1;

@end
