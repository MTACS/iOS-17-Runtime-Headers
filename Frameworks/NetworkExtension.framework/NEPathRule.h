
@interface NEPathRule : NEAppRule <NEConfigurationValidating, NEPrettyDescription> {
    NSNumber * _aggregateEnterpriseCellular;
    NSNumber * _aggregateEnterpriseWiFi;
    NSNumber * _aggregatePersonalCellular;
    NSNumber * _aggregatePersonalWiFi;
    bool  _denyAll;
    bool  _denyCellularFallback;
    bool  _denyMulticast;
    long long  _internalCellularBehavior;
    long long  _internalWiFiBehavior;
    bool  _isIdentifierExternal;
    bool  _multicastPreferenceSet;
}

@property long long cellularBehavior;
@property (getter=isDefaultPathRule, readonly) bool defaultPathRule;
@property bool denyAll;
@property bool denyCellularFallback;
@property bool denyMulticast;
@property bool isIdentifierExternal;
@property bool multicastPreferenceSet;
@property long long wifiBehavior;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addCellularBehavior:(long long)arg1 grade:(long long)arg2;
- (void)addWiFiBehavior:(long long)arg1 grade:(long long)arg2;
- (long long)cellularBehavior;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)denyAll;
- (bool)denyCellularFallback;
- (bool)denyMulticast;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initDefaultPathRule;
- (id)initWithCoder:(id)arg1;
- (bool)isDefaultPathRule;
- (bool)isEqual:(id)arg1;
- (bool)isIdentifierExternal;
- (bool)multicastPreferenceSet;
- (void)setCellularBehavior:(long long)arg1;
- (void)setDenyAll:(bool)arg1;
- (void)setDenyCellularFallback:(bool)arg1;
- (void)setDenyMulticast:(bool)arg1;
- (void)setIsIdentifierExternal:(bool)arg1;
- (void)setMulticastPreferenceSet:(bool)arg1;
- (void)setWifiBehavior:(long long)arg1;
- (bool)signingIdentifierAllowed:(id)arg1 domainsOrAccountsRequired:(out bool*)arg2;
- (bool)supportsCellularBehavior:(long long)arg1;
- (bool)supportsWiFiBehavior:(long long)arg1;
- (long long)wifiBehavior;

@end
