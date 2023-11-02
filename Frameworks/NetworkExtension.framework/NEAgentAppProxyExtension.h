
@interface NEAgentAppProxyExtension : NEAgentTunnelExtension <NEExtensionAppProxyProviderHostDelegate, NEFlowDivertPluginDriver>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)connectWithParameters:(id)arg1;
- (id)driverInterface;
- (void)extension:(id)arg1 didRequestFlowDivertControlSocketWithCompletionHandler:(id /* block */)arg2;
- (id)managerInterface;
- (void)setDelegateInterface:(unsigned int)arg1;

@end
