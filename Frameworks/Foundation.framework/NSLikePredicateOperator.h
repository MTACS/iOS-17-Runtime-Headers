
@interface NSLikePredicateOperator : NSMatchingPredicateOperator

- (bool)_shouldEscapeForLike;
- (SEL)selector;
- (id)symbol;

@end
