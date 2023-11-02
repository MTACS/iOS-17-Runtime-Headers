
@interface RBSProcessHandlePredicateImpl : RBSProcessPredicateImpl {
    RBSProcessIdentity * _identity;
    int  _pid;
}

+ (bool)supportsRBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithHandle:(id)arg1;
- (id)initWithRBSXPCCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)matchesProcess:(id)arg1;
- (id)processIdentifier;
- (id)processPredicate;

@end
