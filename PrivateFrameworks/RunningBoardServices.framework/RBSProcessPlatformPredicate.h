
@interface RBSProcessPlatformPredicate : RBSProcessPredicateImpl {
    int  _platform;
}

@property (nonatomic, readonly) int platform;

+ (bool)supportsRBSXPCSecureCoding;

- (id)description;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithPlatform:(int)arg1;
- (id)initWithRBSXPCCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)matchesProcess:(id)arg1;
- (int)platform;
- (id)processPredicate;

@end
