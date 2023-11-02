
@interface HMDTransientRuleManagerClient : NSObject <HMDNetworkRouterFirewallRuleManagerClient> {
    NSString * _description;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDescription:(id)arg1;

@end
