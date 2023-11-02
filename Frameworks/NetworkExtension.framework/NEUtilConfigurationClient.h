
@interface NEUtilConfigurationClient : NSObject <NEConfigurationCommandHandling> {
    NSString * _clientName;
    NSMutableArray * _createdConfigurations;
    NEConfiguration * _currentConfiguration;
    NSMutableArray * _currentConfigurations;
    NSMutableArray * _identities;
    bool  _isAlwaysOn;
    NEConfigurationManager * _manager;
}

@property (readonly) NEAppPush *appPush;
@property (readonly) NSString *clientName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disconnectOnDemandEnabled;
@property (readonly) NEDNSProxyProviderProtocol *dnsProxyConfiguration;
@property (readonly) NEDNSSettingsBundle *dnsSettingsBundle;
@property bool enabled;
@property (readonly) NEFilterProviderConfiguration *filterConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) bool isAlwaysOn;
@property bool onDemandEnabled;
@property (copy) NSArray *onDemandRules;
@property bool onDemandUserOverrideDisabled;
@property (readonly) Class superclass;

+ (id)clientWithName:(id)arg1;
+ (void)removeClientWithName:(id)arg1;

- (void).cxx_destruct;
- (bool)addOnDemandRuleWithParameters:(id)arg1 errorStr:(id*)arg2;
- (bool)addRelayWithParameters:(id)arg1 errorStr:(id*)arg2;
- (id)appPush;
- (id)clientName;
- (bool)createConfigurationWithParameters:(id)arg1 errorStr:(id*)arg2;
- (void)dealloc;
- (bool)disconnectOnDemandEnabled;
- (id)dnsProxyConfiguration;
- (id)dnsSettingsBundle;
- (bool)enabled;
- (id)filterConfiguration;
- (void)handleCommand:(int)arg1 forConfigWithName:(id)arg2 withParameters:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)initInternalWithClientName:(id)arg1;
- (id)initWithClientName:(id)arg1;
- (bool)isAlwaysOn;
- (bool)onDemandEnabled;
- (id)onDemandRules;
- (bool)onDemandUserOverrideDisabled;
- (id)protocolForParameters:(id)arg1;
- (bool)removeOnDemandRuleWithParameters:(id)arg1 errorStr:(id*)arg2;
- (bool)removeRelayWithParameters:(id)arg1 errorStr:(id*)arg2;
- (bool)setAppPushParameters:(id)arg1 errorStr:(id*)arg2;
- (bool)setCommonParameters:(id)arg1 errorStr:(id*)arg2;
- (bool)setDNSParameters:(id)arg1 errorStr:(id*)arg2;
- (bool)setDNSProxyWithParameters:(id)arg1 errorStr:(id*)arg2;
- (void)setDisconnectOnDemandEnabled:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (bool)setFilterPluginWithParameters:(id)arg1 errorStr:(id*)arg2;
- (bool)setIPSecParameters:(id)arg1 errorStr:(id*)arg2;
- (void)setOnDemandEnabled:(bool)arg1;
- (void)setOnDemandRules:(id)arg1;
- (void)setOnDemandUserOverrideDisabled:(bool)arg1;
- (bool)setPasswordWithParameters:(id)arg1 errorStr:(id*)arg2;
- (bool)setProtocolWithParameters:(id)arg1 errorStr:(id*)arg2;
- (bool)setProviderTypeWithParameters:(id)arg1 errorStr:(id*)arg2;
- (bool)setProxyParameters:(id)arg1 errorStr:(id*)arg2;
- (bool)setProxyServer:(id)arg1 errorStr:(id*)arg2;
- (bool)setRelayConditionsWithParameters:(id)arg1 errorStr:(id*)arg2;
- (bool)setSharedSecretWithParameters:(id)arg1 errorStr:(id*)arg2;
- (bool)unsetAppPushParameters:(id)arg1 errorStr:(id*)arg2;
- (bool)unsetCommonParameters:(id)arg1 errorStr:(id*)arg2;
- (bool)unsetDNSParameters:(id)arg1 errorStr:(id*)arg2;
- (bool)unsetDNSProxyWithParameters:(id)arg1 errorStr:(id*)arg2;
- (bool)unsetFilterPluginParameters:(id)arg1 errorStr:(id*)arg2;
- (bool)unsetIPSecParameters:(id)arg1 errorStr:(id*)arg2;
- (bool)unsetPasswordWithParameters:(id)arg1 errorStr:(id*)arg2;
- (bool)unsetProxyParameters:(id)arg1 errorStr:(id*)arg2;
- (bool)unsetProxyServer:(id)arg1 errorStr:(id*)arg2;
- (bool)unsetRelayConditionsWithParameters:(id)arg1 errorStr:(id*)arg2;
- (bool)unsetSharedSecretWithParameters:(id)arg1 errorStr:(id*)arg2;

@end
