
@interface RBSProcessStringPredicate : RBSProcessPredicateImpl {
    NSString * _identifier;
}

@property (nonatomic, readonly, copy) NSString *identifier;

+ (bool)supportsRBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithRBSXPCCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)matchesProcess:(id)arg1;
- (id)processPredicate;

@end
