
@interface RBSNotPredicate : RBSProcessPredicateImpl {
    RBSProcessPredicateImpl * _predicate;
}

+ (bool)supportsRBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (id)initWithRBSXPCCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)matchesProcess:(id)arg1;
- (id)processIdentifier;
- (id)processIdentifiers;

@end
