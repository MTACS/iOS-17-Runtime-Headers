
@interface NEProviderAppConfigurationClient : NEUtilConfigurationClient <NSXPCListenerDelegate> {
    NSXPCConnection * _connection;
    NSMutableArray * _createdManagers;
    NEVPNManager * _currentManager;
    NSMutableArray * _currentManagers;
    NEDNSProxyManager * _dnsProxyManager;
    NEDNSSettingsManager * _dnsSettingsManager;
    NEFilterManager * _filterManager;
    bool  _isServerMode;
    NSXPCListener * _listener;
    <NEConfigurationCommandHandling> * _remoteObject;
    NSString * _targetAppBundleID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)createConfigurationWithParameters:(id)arg1 errorStr:(id*)arg2;
- (id)dnsProxyConfiguration;
- (id)dnsSettingsBundle;
- (bool)enabled;
- (id)filterConfiguration;
- (void)handleCommand:(int)arg1 forConfigWithName:(id)arg2 withParameters:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handleConfigChanged:(id)arg1;
- (id)initWithClientName:(id)arg1;
- (bool)isAlwaysOn;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (bool)onDemandEnabled;
- (id)onDemandRules;
- (id)protocolForParameters:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setOnDemandEnabled:(bool)arg1;
- (void)setOnDemandRules:(id)arg1;
- (bool)setPasswordWithParameters:(id)arg1 errorStr:(id*)arg2;
- (bool)setProtocolWithParameters:(id)arg1 errorStr:(id*)arg2;
- (bool)setProviderTypeWithParameters:(id)arg1 errorStr:(id*)arg2;
- (bool)setSharedSecretWithParameters:(id)arg1 errorStr:(id*)arg2;
- (bool)unsetPasswordWithParameters:(id)arg1 errorStr:(id*)arg2;
- (bool)unsetSharedSecretWithParameters:(id)arg1 errorStr:(id*)arg2;

@end
