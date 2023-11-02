
@interface RBSPrewarmAttribute : RBSAttribute {
    RBSProcessIdentity * _identity;
    double  _interval;
}

@property (nonatomic, readonly) RBSProcessIdentity *identity;
@property (nonatomic, readonly) double interval;

// Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices

+ (id)attributeWithIdentity:(id)arg1 interval:(double)arg2;

- (void).cxx_destruct;
- (id)_initWithidentity:(id)arg1 interval:(double)arg2;
- (id)description;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identity;
- (id)initWithRBSXPCCoder:(id)arg1;
- (double)interval;
- (bool)isEqual:(id)arg1;

// Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard

- (bool)allowedWithAttribute:(id)arg1 error:(id*)arg2;
- (void)applyToAssertionIntransientState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;
- (void)applyToSystemState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;
- (bool)isValidForContext:(id)arg1 withError:(id*)arg2;

@end
