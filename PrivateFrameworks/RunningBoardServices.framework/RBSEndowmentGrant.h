
@interface RBSEndowmentGrant : RBSGrant {
    NSObject<OS_xpc_object> * _encodedEndowment;
    NSString * _endowmentNamespace;
}

@property (nonatomic, readonly) NSObject<OS_xpc_object> *encodedEndowment;
@property (nonatomic, readonly, copy) NSString *endowmentNamespace;

// Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices

+ (id)grantWithNamespace:(id)arg1 endowment:(id)arg2;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (id)encodedEndowment;
- (id)endowmentNamespace;
- (unsigned long long)hash;
- (id)initWithRBSXPCCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

// Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard

- (void)applyToProcessState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;
- (bool)isValidForContext:(id)arg1 withError:(id*)arg2;

@end
