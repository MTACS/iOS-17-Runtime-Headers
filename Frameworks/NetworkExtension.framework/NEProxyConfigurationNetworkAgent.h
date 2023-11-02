
@interface NEProxyConfigurationNetworkAgent : NENetworkAgent {
    NSData * _agentData;
}

+ (id)agentDomain;
+ (id)agentFromData:(id)arg1;
+ (id)agentType;

- (void).cxx_destruct;
- (id)agentDescription;
- (id)copyAgentData;
- (id)initWithProxyConfiguration:(id)arg1;

@end
