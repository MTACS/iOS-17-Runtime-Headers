
@interface _NSMemoryStorePredicateRemapper : NSObject <NSPredicateVisitor> {
    NSManagedObjectContext * _context;
}

+ (id)defaultInstance;

- (id)createPredicateForFetchFromPredicate:(id)arg1;
- (id)createPredicateForFetchFromPredicate:(id)arg1 withContext:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)visitPredicate:(id)arg1;
- (void)visitPredicateExpression:(id)arg1;
- (void)visitPredicateOperator:(id)arg1;

@end
