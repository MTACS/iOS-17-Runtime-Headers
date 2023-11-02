
@interface RBSConditionAttribute : RBSAttribute {
    NSString * _condition;
    long long  _value;
}

@property (nonatomic, readonly, copy) NSString *condition;
@property (nonatomic, readonly) long long value;

// Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices

+ (id)attributeWithCondition:(id)arg1 value:(long long)arg2;

- (void).cxx_destruct;
- (id)condition;
- (id)description;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithRBSXPCCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)value;

// Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard

- (void)applyToSystemState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;
- (bool)isValidForContext:(id)arg1 withError:(id*)arg2;

@end
