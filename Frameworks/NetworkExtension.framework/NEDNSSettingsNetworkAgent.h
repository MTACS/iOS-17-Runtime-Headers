
@interface NEDNSSettingsNetworkAgent : NENetworkAgent {
    NEDNSSettings * _settings;
}

@property (retain) NEDNSSettings *settings;

+ (id)agentDomain;
+ (id)agentFromData:(id)arg1;
+ (id)agentType;

- (void).cxx_destruct;
- (id)agentDescription;
- (id)copyAgentData;
- (void)setSettings:(id)arg1;
- (id)settings;

@end
