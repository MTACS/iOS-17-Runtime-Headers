
@interface HMDNetworkRouterWANFirewallConfiguration : NSObject <HAPTLVProtocol, NSCopying> {
    HMDNetworkRouterWANFirewallRuleList * _ruleList;
    HMDNetworkRouterWANFirewall * _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMDNetworkRouterWANFirewallRuleList *ruleList;
@property (readonly) Class superclass;
@property (nonatomic, retain) HMDNetworkRouterWANFirewall *type;

+ (id)configurationFromFirewallRuleConfiguration:(id)arg1;
+ (id)configurationWithFullAccess;
+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithType:(id)arg1 ruleList:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)ruleList;
- (id)serializeWithError:(id*)arg1;
- (void)setRuleList:(id)arg1;
- (void)setType:(id)arg1;
- (id)type;

@end
