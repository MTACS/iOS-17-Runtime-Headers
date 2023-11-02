
@interface RBSCPUAccessGrant : RBSGrant {
    unsigned char  _role;
}

@property (nonatomic, readonly) unsigned char role;

// Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices

+ (id)grant;
+ (id)grantUserInitiated;
+ (id)grantWithRole:(unsigned char)arg1;
+ (id)grantWithUserInteractivity;
+ (id)grantWithUserInteractivityAndFocus;

- (id)description;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithRBSXPCCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned char)role;

// Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard

- (void)applyToAssertionIntransientState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;
- (void)applyToProcessState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;
- (bool)isValidForContext:(id)arg1 withError:(id*)arg2;
- (bool)preventsSuspension;

@end
