
@interface RBSDomainAttribute : RBSAttribute {
    NSString * _domain;
    NSString * _name;
    NSString * _sourceEnvironment;
}

@property (nonatomic, copy) NSString *domain;
@property (nonatomic, readonly, copy) NSString *fullyQualifiedName;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *sourceEnvironment;

// Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices

+ (id)attributeWithDomain:(id)arg1 name:(id)arg2;
+ (id)attributeWithDomain:(id)arg1 name:(id)arg2 sourceEnvironment:(id)arg3;

- (void).cxx_destruct;
- (id)description;
- (id)domain;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (id)fullyQualifiedName;
- (unsigned long long)hash;
- (id)initWithRBSXPCCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)name;
- (void)setDomain:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSourceEnvironment:(id)arg1;
- (id)sourceEnvironment;

// Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard

- (void)applyToAcquisitionContext:(id)arg1;
- (void)applyToAssertionIntransientState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;
- (void)applyToAssertionTransientState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;
- (void)applyToProcessState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;
- (void)applyToSystemState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;
- (id)effectiveAttributesWithContext:(id)arg1;
- (bool)isValidForContext:(id)arg1 withError:(id*)arg2;

@end
