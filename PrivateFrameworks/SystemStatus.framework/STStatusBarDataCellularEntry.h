
@interface STStatusBarDataCellularEntry : STStatusBarDataNetworkEntry {
    NSString * _badgeString;
    bool  _callForwardingEnabled;
    NSString * _crossfadeString;
    bool  _isBootstrapCellular;
    bool  _showsSOSWhenDisabled;
    bool  _sosAvailable;
    NSString * _string;
    long long  _type;
    bool  _wifiCallingEnabled;
}

@property (nonatomic, readonly, copy) NSString *badgeString;
@property (nonatomic, readonly) bool callForwardingEnabled;
@property (nonatomic, readonly, copy) NSString *crossfadeString;
@property (nonatomic, readonly) bool isBootstrapCellular;
@property (nonatomic, readonly) bool showsSOSWhenDisabled;
@property (nonatomic, readonly) bool sosAvailable;
@property (nonatomic, readonly, copy) NSString *string;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) bool wifiCallingEnabled;

+ (id)entryWithType:(long long)arg1 stringValue:(id)arg2 crossfadeStringValue:(id)arg3 badgeStringValue:(id)arg4 wifiCalling:(bool)arg5 callForwarding:(bool)arg6 showsSOSWhenDisabled:(bool)arg7 sosAvailable:(bool)arg8 isBootstrapCellular:(bool)arg9 status:(long long)arg10 lowDataMode:(bool)arg11 rawValue:(long long)arg12 displayValue:(long long)arg13 displayRawValue:(bool)arg14;
+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_equalsBuilderWithObject:(id)arg1;
- (id)_hashBuilder;
- (id)badgeString;
- (bool)callForwardingEnabled;
- (id)crossfadeString;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isBootstrapCellular;
- (bool)showsSOSWhenDisabled;
- (bool)sosAvailable;
- (id)string;
- (id)succinctDescriptionBuilder;
- (long long)type;
- (bool)wifiCallingEnabled;

@end
