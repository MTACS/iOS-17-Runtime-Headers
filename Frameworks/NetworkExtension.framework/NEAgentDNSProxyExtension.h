
@interface NEAgentDNSProxyExtension : NEAgentAppProxyExtension <NEDNSProxyPluginDriver>

- (id)driverInterface;
- (void)setSystemDNSSettings:(id)arg1;

@end
