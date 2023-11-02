
@interface RBSJetsamPriorityGrant : RBSGrant {
    unsigned long long  _band;
}

@property (nonatomic, readonly) unsigned long long band;

// Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices

+ (id)grantWithBackgroundPriority;
+ (id)grantWithBand:(unsigned long long)arg1;
+ (id)grantWithForegroundPriority;
+ (bool)supportsRBSXPCSecureCoding;

- (unsigned long long)band;
- (id)description;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithRBSXPCCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

// Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard

- (void)applyToProcessState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;
- (bool)isValidForContext:(id)arg1 withError:(id*)arg2;

@end
