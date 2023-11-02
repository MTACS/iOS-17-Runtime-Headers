
@interface STStatusBarDataIntegerEntry : STStatusBarDataEntry {
    bool  _displayRawValue;
    long long  _displayValue;
    long long  _rawValue;
}

@property (nonatomic, readonly) bool displayRawValue;
@property (nonatomic, readonly) long long displayValue;
@property (nonatomic, readonly) long long rawValue;

+ (id)entryWithRawValue:(long long)arg1 displayValue:(long long)arg2 displayRawValue:(bool)arg3;
+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (id)_equalsBuilderWithObject:(id)arg1;
- (id)_hashBuilder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)displayRawValue;
- (long long)displayValue;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)rawValue;
- (id)succinctDescriptionBuilder;

@end
