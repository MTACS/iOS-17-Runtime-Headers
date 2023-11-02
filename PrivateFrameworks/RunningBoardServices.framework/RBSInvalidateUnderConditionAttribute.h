
@interface RBSInvalidateUnderConditionAttribute : RBSAttribute {
    NSString * _condition;
    long long  _minValue;
}

@property (nonatomic, readonly, copy) NSString *condition;
@property (nonatomic, readonly) long long minValue;

// Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices

+ (id)attributeWithCondition:(id)arg1 minValue:(long long)arg2;

- (void).cxx_destruct;
- (id)condition;
- (id)description;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithRBSXPCCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)minValue;

// Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard

- (void)applyToAssertionIntransientState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;
- (bool)isValidForContext:(id)arg1 withError:(id*)arg2;

@end
