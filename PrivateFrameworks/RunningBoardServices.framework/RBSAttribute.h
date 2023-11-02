
@interface RBSAttribute : NSObject <NSCopying, RBSXPCSecureCoding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices

+ (bool)supportsRBSXPCSecureCoding;

- (id)_init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (id)init;
- (id)initWithRBSXPCCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

// Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard

+ (bool)allowedForPrimitiveAttributeForProcessTarget:(id)arg1 withError:(id*)arg2;

- (bool)allowedWithAttribute:(id)arg1 error:(id*)arg2;
- (void)applyToAcquisitionContext:(id)arg1;
- (void)applyToAssertionIntransientState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;
- (void)applyToAssertionTransientState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;
- (void)applyToProcessState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;
- (void)applyToSystemState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;
- (id)effectiveAttributesWithContext:(id)arg1;
- (bool)hasMandatoryAttributes:(id)arg1 error:(id*)arg2;
- (bool)isValidForContext:(id)arg1 withError:(id*)arg2;
- (bool)preventsSuspension;

@end
