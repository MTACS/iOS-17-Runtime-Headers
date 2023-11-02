
@interface NERelayNetworkAgent : NENetworkAgent {
    NSObject<OS_nw_proxy_config> * _proxyConfig;
}

@property (retain) NSObject<OS_nw_proxy_config> *proxyConfig;

+ (id)agentDomain;
+ (id)agentFromData:(id)arg1;
+ (id)agentType;

- (void).cxx_destruct;
- (id)agentDescription;
- (id)copyAgentData;
- (id)proxyConfig;
- (void)setProxyConfig:(id)arg1;

@end
