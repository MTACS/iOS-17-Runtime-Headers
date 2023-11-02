
@interface _DKBiomePredicateValueScanner : NSObject <NSPredicateVisitor> {
    NSMutableSet * _matchedValues;
    NSSet * _searchKeys;
    unsigned long long  _state;
}

+ (id)searchForValuesForKey:(id)arg1 inPredicate:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithSearchKeys:(id)arg1;
- (void)visitPredicate:(id)arg1;
- (void)visitPredicateExpression:(id)arg1;
- (void)visitPredicateOperator:(id)arg1;

@end
