
@interface STStatusBarDataNetworkEntry : STStatusBarDataIntegerEntry {
    bool  _lowDataModeActive;
    long long  _status;
}

@property (nonatomic, readonly) bool lowDataModeActive;
@property (nonatomic, readonly) long long status;

+ (id)entryWithStatus:(long long)arg1 lowDataMode:(bool)arg2 rawValue:(long long)arg3 displayValue:(long long)arg4 displayRawValue:(bool)arg5;
+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (id)_equalsBuilderWithObject:(id)arg1;
- (id)_hashBuilder;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)lowDataModeActive;
- (long long)status;
- (id)succinctDescriptionBuilder;

@end
