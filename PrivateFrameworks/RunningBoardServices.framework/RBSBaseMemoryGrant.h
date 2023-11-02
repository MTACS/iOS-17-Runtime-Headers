
@interface RBSBaseMemoryGrant : RBSGrant {
    NSString * _category;
    unsigned char  _strength;
}

@property (nonatomic, readonly, copy) NSString *category;
@property (nonatomic, readonly) unsigned char strength;

// Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices

+ (id)grantWithActiveLimit;
+ (id)grantWithCategory:(id)arg1 strength:(unsigned char)arg2;
+ (bool)supportsRBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)category;
- (id)description;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithRBSXPCCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned char)strength;

// Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard

- (void)applyToProcessState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;
- (bool)isValidForContext:(id)arg1 withError:(id*)arg2;

@end
