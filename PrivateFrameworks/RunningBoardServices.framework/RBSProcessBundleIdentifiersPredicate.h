
@interface RBSProcessBundleIdentifiersPredicate : RBSProcessCollectionPredicateImpl

- (id)initWithIdentifiers:(id)arg1;
- (id)initWithRBSXPCCoder:(id)arg1;
- (bool)matchesProcess:(id)arg1;

@end
