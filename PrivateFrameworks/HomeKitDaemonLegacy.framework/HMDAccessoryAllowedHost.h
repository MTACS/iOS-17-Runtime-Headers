
@interface HMDAccessoryAllowedHost : HMFObject <NSSecureCoding> {
    HMDNetworkRouterFirewallRuleWAN * _cachedWANRule;
    NSString * _jsonWANRule;
}

@property (readonly) NSSet *addresses;
@property (readonly) NSString *jsonWANRule;
@property (readonly) NSString *name;
@property (readonly) unsigned long long purpose;
@property (nonatomic, readonly) HMDNetworkRouterFirewallRuleWAN *wanRule;

+ (id)allowedHostForFullWANAccess;
+ (id)allowedHostsFromFirewallRuleConfiguration:(id)arg1;
+ (id)allowedHostsFromJSONFirewallWANRules:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_encodeForSPIEntitledXPCTransportWithCoder:(id)arg1;
- (id)addresses;
- (id)attributeDescriptions;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONFirewallWANRule:(id)arg1;
- (id)initWithWANRule:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonWANRule;
- (id)name;
- (unsigned long long)purpose;
- (id)wanRule;

@end
