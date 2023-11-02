
@interface NETransparentProxyNetworkSettings : NETunnelNetworkSettings {
    NSArray * _excludedNetworkRules;
    NSArray * _includedNetworkRules;
    bool  _isFullyTransparent;
}

@property (copy) NSArray *excludedNetworkRules;
@property (copy) NSArray *includedNetworkRules;
@property bool isFullyTransparent;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)excludedNetworkRules;
- (id)includedNetworkRules;
- (id)initWithCoder:(id)arg1;
- (bool)isFullyTransparent;
- (void)setExcludedNetworkRules:(id)arg1;
- (void)setIncludedNetworkRules:(id)arg1;
- (void)setIsFullyTransparent:(bool)arg1;

@end
