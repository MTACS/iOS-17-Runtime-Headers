
@interface RBSProcessIntPredicate : RBSProcessPredicateImpl {
    unsigned long long  _identifier;
}

@property (nonatomic, readonly) unsigned long long identifier;

+ (bool)supportsRBSXPCSecureCoding;

- (id)description;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)identifier;
- (id)initWithIdentifier:(unsigned long long)arg1;
- (id)initWithRBSXPCCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)matchesProcess:(id)arg1;
- (id)processPredicate;

@end
