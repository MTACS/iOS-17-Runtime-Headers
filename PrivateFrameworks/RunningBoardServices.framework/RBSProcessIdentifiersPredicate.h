
@interface RBSProcessIdentifiersPredicate : RBSProcessCollectionPredicateImpl

@property (nonatomic, readonly) NSSet *processIdentifiers;

- (id)initWithIdentifiers:(id)arg1;
- (id)initWithRBSXPCCoder:(id)arg1;
- (bool)matchesProcess:(id)arg1;
- (id)processIdentifiers;

@end
