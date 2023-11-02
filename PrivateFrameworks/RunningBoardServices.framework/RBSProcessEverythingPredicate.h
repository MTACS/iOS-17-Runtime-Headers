
@interface RBSProcessEverythingPredicate : RBSProcessPredicateImpl

+ (id)everythingPredicate;

- (bool)isEqual:(id)arg1;
- (bool)matchesProcess:(id)arg1;

@end
