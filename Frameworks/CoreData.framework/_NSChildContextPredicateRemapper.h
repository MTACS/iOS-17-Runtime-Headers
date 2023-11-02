
@interface _NSChildContextPredicateRemapper : NSObject <NSPredicateVisitor> {
    NSManagedObjectContext * _context;
}

- (id)createPredicateForFetchFromPredicate:(id)arg1 withContext:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithContext:(id)arg1;
- (void)visitPredicate:(id)arg1;
- (void)visitPredicateExpression:(id)arg1;
- (void)visitPredicateOperator:(id)arg1;

@end
