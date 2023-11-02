
@interface NSMatchingPredicateOperator : NSStringPredicateOperator {
    int  _contextLock;
    struct { id x1; void *x2; long long x3; } * _regexContext;
}

- (void)_clearContext;
- (bool)_shouldEscapeForLike;
- (void)dealloc;
- (id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 variant:(unsigned long long)arg3;
- (bool)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2;
- (SEL)selector;
- (id)symbol;

@end
