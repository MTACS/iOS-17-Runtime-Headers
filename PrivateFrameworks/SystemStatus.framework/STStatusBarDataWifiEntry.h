
@interface STStatusBarDataWifiEntry : STStatusBarDataNetworkEntry {
    long long  _type;
}

@property (nonatomic, readonly) long long type;

+ (id)entryWithType:(long long)arg1 status:(long long)arg2 lowDataMode:(bool)arg3 rawValue:(long long)arg4 displayValue:(long long)arg5 displayRawValue:(bool)arg6;
+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (id)_equalsBuilderWithObject:(id)arg1;
- (id)_hashBuilder;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)succinctDescriptionBuilder;
- (long long)type;

@end
