
@interface _NSPersistentHistoryPredicateRemapper : NSObject <NSPredicateVisitor> {
    bool  _previousKeyPathExpressionWasToken;
    NSString * _storeID;
}

+ (id)defaultInstance;

- (id)createPredicateForFetchFromPredicate:(id)arg1;
- (id)createPredicateForFetchFromPredicate:(id)arg1 withContext:(id)arg2;
- (void)dealloc;
- (id)initWithStoreIdentifier:(id)arg1;
- (void)visitPredicate:(id)arg1;
- (void)visitPredicateExpression:(id)arg1;
- (void)visitPredicateOperator:(id)arg1;

@end
