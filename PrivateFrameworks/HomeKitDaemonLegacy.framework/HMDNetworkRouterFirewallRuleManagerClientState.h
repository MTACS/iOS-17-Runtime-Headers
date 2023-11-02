
@interface HMDNetworkRouterFirewallRuleManagerClientState : NSObject {
    <HMDNetworkRouterFirewallRuleManagerClient> * _client;
    id /* block */  _startupCompletion;
}

@property (nonatomic) <HMDNetworkRouterFirewallRuleManagerClient> *client;
@property (nonatomic, copy) id /* block */ startupCompletion;

- (void).cxx_destruct;
- (id)client;
- (void)setClient:(id)arg1;
- (void)setStartupCompletion:(id /* block */)arg1;
- (id /* block */)startupCompletion;

@end
