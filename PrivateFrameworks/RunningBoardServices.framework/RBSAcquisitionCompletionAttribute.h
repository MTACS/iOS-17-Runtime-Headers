
@interface RBSAcquisitionCompletionAttribute : RBSAttribute {
    unsigned long long  _policy;
}

@property (nonatomic, readonly) unsigned long long policy;

// Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices

+ (id)attributeWithCompletionPolicy:(unsigned long long)arg1;

- (id)description;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithRBSXPCCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)policy;

// Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard

- (void)applyToAcquisitionContext:(id)arg1;

@end
