
@interface NSMemoryStoreInPredicateOperator : NSInPredicateOperator {
    NSManagedObjectContext * _context;
}

- (void)dealloc;
- (bool)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2;
- (void)setContext:(id)arg1;

@end
