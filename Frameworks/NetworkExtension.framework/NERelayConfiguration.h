
@interface NERelayConfiguration : NSObject <NEConfigurationValidating, NEPrettyDescription, NSCopying, NSSecureCoding> {
    bool  _enabled;
    NSArray * _excludedDomains;
    NSArray * _matchDomains;
    NSArray * _onDemandRules;
    NEPerApp * _perApp;
    NSArray * _relays;
}

@property (getter=isEnabled) bool enabled;
@property (copy) NSArray *excludedDomains;
@property (copy) NSArray *matchDomains;
@property (copy) NSArray *onDemandRules;
@property (copy) NEPerApp *perApp;
@property (copy) NSArray *relays;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)excludedDomains;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEnabled;
- (id)matchDomains;
- (id)onDemandRules;
- (bool)overlapsWithAppVPNConfiguration:(id)arg1;
- (bool)overlapsWithRelayConfiguration:(id)arg1;
- (bool)overlapsWithVPNConfiguration:(id)arg1;
- (id)perApp;
- (id)relays;
- (void)setEnabled:(bool)arg1;
- (void)setExcludedDomains:(id)arg1;
- (void)setMatchDomains:(id)arg1;
- (void)setOnDemandRules:(id)arg1;
- (void)setPerApp:(id)arg1;
- (void)setRelays:(id)arg1;

@end
