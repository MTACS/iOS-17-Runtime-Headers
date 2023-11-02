
@interface RBSProcessIdentityPredicate : RBSProcessPredicateImpl {
    RBSProcessIdentity * _identity;
}

+ (bool)supportsRBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithRBSXPCCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)matchesProcess:(id)arg1;
- (id)processPredicate;

@end
