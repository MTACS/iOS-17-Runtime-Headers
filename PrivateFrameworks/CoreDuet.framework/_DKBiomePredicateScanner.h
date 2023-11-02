
@interface _DKBiomePredicateScanner : NSObject <NSPredicateVisitor> {
    NSMutableSet * _matchedKeys;
    NSSet * _searchKeys;
}

+ (id)searchForKeys:(id)arg1 inPredicate:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithSearchKeys:(id)arg1;
- (void)visitPredicate:(id)arg1;
- (void)visitPredicateExpression:(id)arg1;
- (void)visitPredicateOperator:(id)arg1;

@end
