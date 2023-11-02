
@interface STStatusBarDataThermalEntry : STStatusBarDataEntry {
    long long  _color;
    bool  _sunlightMode;
}

@property (nonatomic, readonly) long long color;
@property (nonatomic, readonly) bool sunlightMode;

+ (id)entryWithColor:(long long)arg1 isSunlightMode:(bool)arg2;
+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (id)_equalsBuilderWithObject:(id)arg1;
- (id)_hashBuilder;
- (long long)color;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)succinctDescriptionBuilder;
- (bool)sunlightMode;

@end
