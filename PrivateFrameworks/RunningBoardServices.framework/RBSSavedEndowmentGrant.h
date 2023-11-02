
@interface RBSSavedEndowmentGrant : RBSGrant {
    NSString * _endowmentNamespace;
    NSString * _key;
}

@property (nonatomic, readonly, copy) NSString *endowmentNamespace;
@property (nonatomic, readonly) NSString *key;

// Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices

+ (id)grantWithNamespace:(id)arg1 key:(id)arg2;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (id)endowmentNamespace;
- (unsigned long long)hash;
- (id)initWithRBSXPCCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)key;

// Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard

- (void)applyToProcessState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;
- (bool)isValidForContext:(id)arg1 withError:(id*)arg2;

@end
