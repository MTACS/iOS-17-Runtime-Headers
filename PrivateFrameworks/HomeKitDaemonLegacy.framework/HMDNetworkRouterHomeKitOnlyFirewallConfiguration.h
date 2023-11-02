
@interface HMDNetworkRouterHomeKitOnlyFirewallConfiguration : HMDNetworkRouterFirewallRuleConfiguration {
    bool  _isFiltered;
    bool  _useFallbackForHDS;
    bool  _useFallbackForRTP;
}

+ (id)fallbackConfigurationForRuleset:(id)arg1;
+ (id)fallbackIdentifier;

- (id)description;
- (id)initWithAccessory:(id)arg1 sourceConfiguration:(id)arg2;

@end
