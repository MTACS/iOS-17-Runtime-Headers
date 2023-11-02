
@interface HMDNetworkRouterFirewallRuleConfiguration : HMFObject <HMFLogging> {
    HMDNetworkRouterFirewallRuleAccessoryIdentifier * _accessoryIdentifier;
    bool  _fullAccessLAN;
    bool  _fullAccessWAN;
    NSArray * _lanRules;
    NSDate * _lastModifiedTime;
    NSArray * _wanRules;
}

@property (nonatomic, readonly) HMDNetworkRouterFirewallRuleAccessoryIdentifier *accessoryIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=hasFullAccessToLAN, nonatomic, readonly) bool fullAccessLAN;
@property (getter=hasFullAccessToWAN, nonatomic, readonly) bool fullAccessWAN;
@property (nonatomic, readonly) bool hasAirplayRules;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *lanRules;
@property (nonatomic, readonly) NSDate *lastModifiedTime;
@property (nonatomic, readonly) NSDictionary *prettyJSONDictionary;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *wanRules;

+ (bool)__decodeFullAccessFromNetworkDeclarations:(id)arg1 key:(id)arg2 fullAccess:(bool*)arg3;
+ (bool)__decodeNetworkDeclarationsFromJSONDictionary:(id)arg1 networkDeclarations:(id*)arg2;
+ (id)__decodeRulesFromNetworkDeclarations:(id)arg1 key:(id)arg2 class:(Class)arg3 required:(bool)arg4;
+ (id)logCategory;

- (void).cxx_destruct;
- (id)accessoryIdentifier;
- (id)attributeDescriptions;
- (bool)hasAirplayRules;
- (bool)hasFullAccessToLAN;
- (bool)hasFullAccessToWAN;
- (unsigned long long)hash;
- (id)initWithAccessoryIdentifier:(id)arg1 jsonDictionary:(id)arg2;
- (id)initWithAccessoryIdentifier:(id)arg1 lastModifiedTime:(id)arg2 fullAccessLAN:(bool)arg3 lanRules:(id)arg4 fullAccessWAN:(bool)arg5 wanRules:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)lanRules;
- (id)lastModifiedTime;
- (id)prettyJSONDictionary;
- (id)wanRules;

@end
