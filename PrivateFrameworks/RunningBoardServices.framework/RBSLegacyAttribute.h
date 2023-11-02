
@interface RBSLegacyAttribute : RBSAttribute {
    unsigned long long  _flags;
    unsigned long long  _reason;
    unsigned long long  _requestedReason;
}

@property (nonatomic, readonly) unsigned long long flags;
@property (nonatomic) unsigned long long reason;
@property (nonatomic, readonly) unsigned long long requestedReason;

// Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices

+ (id)attributeWithReason:(unsigned long long)arg1 flags:(unsigned long long)arg2;

- (id)description;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (unsigned long long)flags;
- (unsigned long long)hash;
- (id)initWithRBSXPCCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)reason;
- (unsigned long long)requestedReason;
- (void)setReason:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard

- (bool)allowedWithAttribute:(id)arg1 error:(id*)arg2;
- (void)applyToAcquisitionContext:(id)arg1;
- (void)applyToAssertionIntransientState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;
- (void)applyToAssertionTransientState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;
- (void)applyToProcessState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;
- (bool)isValidForContext:(id)arg1 withError:(id*)arg2;
- (bool)preventsSuspension;

@end
