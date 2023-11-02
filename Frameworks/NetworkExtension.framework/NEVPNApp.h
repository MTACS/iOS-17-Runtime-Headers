
@interface NEVPNApp : NEVPN {
    NSArray * _appRules;
    NSArray * _excludedDomains;
    bool  _noRestriction;
    bool  _restrictDomains;
}

@property (copy) NSArray *appRules;
@property (copy) NSArray *excludedDomains;
@property bool noRestriction;
@property bool restrictDomains;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appRules;
- (bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyAppRuleByID:(id)arg1;
- (id)copyAppRuleBySigningIdentifier:(id)arg1;
- (id)copyAppRuleIDs;
- (id)copyLegacyDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)excludedDomains;
- (id)init;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)installSigningIdentifiersWithFlowDivertControlSocket:(int)arg1;
- (bool)noRestriction;
- (bool)removeAppRuleByID:(id)arg1;
- (bool)restrictDomains;
- (void)setAppRules:(id)arg1;
- (void)setExcludedDomains:(id)arg1;
- (void)setNoRestriction:(bool)arg1;
- (void)setRestrictDomains:(bool)arg1;
- (void)updateAppRulesForUID:(unsigned int)arg1;

@end
