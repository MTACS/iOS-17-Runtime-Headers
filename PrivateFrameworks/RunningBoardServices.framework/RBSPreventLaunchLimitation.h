
@interface RBSPreventLaunchLimitation : RBSLimitation {
    RBSProcessPredicate * _allow;
    RBSProcessPredicate * _predicate;
}

@property (nonatomic, readonly) RBSProcessPredicate *allow;
@property (nonatomic, readonly) RBSProcessPredicate *predicate;

// Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices

+ (id)limitationWithPredicate:(id)arg1;
+ (id)limitationWithPredicate:(id)arg1 andException:(id)arg2;

- (void).cxx_destruct;
- (id)allow;
- (id)description;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithRBSXPCCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)predicate;

// Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard

- (bool)allowedWithAttribute:(id)arg1 error:(id*)arg2;
- (void)applyToAcquisitionContext:(id)arg1;
- (void)applyToAssertionIntransientState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;
- (void)applyToSystemState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;
- (bool)isValidForContext:(id)arg1 withError:(id*)arg2;

@end
