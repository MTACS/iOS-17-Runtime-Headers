
@interface NEVPN : NSObject <NEConfigurationLegacySupport, NEConfigurationValidating, NEPrettyDescription, NSCopying, NSSecureCoding> {
    bool  _disconnectOnDemandEnabled;
    bool  _enabled;
    NSArray * _exceptionApps;
    bool  _onDemandEnabled;
    NSArray * _onDemandRules;
    bool  _onDemandUserOverrideDisabled;
    NEVPNProtocol * _protocol;
    long long  _tunnelType;
}

@property (getter=isDisconnectOnDemandEnabled, nonatomic) bool disconnectOnDemandEnabled;
@property (getter=isEnabled) bool enabled;
@property (copy) NSArray *exceptionApps;
@property (getter=isOnDemandEnabled) bool onDemandEnabled;
@property (copy) NSArray *onDemandRules;
@property (getter=isOnDemandUserOverrideDisabled, nonatomic) bool onDemandUserOverrideDisabled;
@property (copy) NEVPNProtocol *protocol;
@property long long tunnelType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyLegacyDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)exceptionApps;
- (id)init;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isDisconnectOnDemandEnabled;
- (bool)isEnabled;
- (bool)isOnDemandEnabled;
- (bool)isOnDemandUserOverrideDisabled;
- (id)onDemandRules;
- (id)protocol;
- (void)setDisconnectOnDemandEnabled:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setExceptionApps:(id)arg1;
- (void)setOnDemandEnabled:(bool)arg1;
- (void)setOnDemandRules:(id)arg1;
- (void)setOnDemandUserOverrideDisabled:(bool)arg1;
- (void)setProtocol:(id)arg1;
- (void)setTunnelType:(long long)arg1;
- (long long)tunnelType;

@end
