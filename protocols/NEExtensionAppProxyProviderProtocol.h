
@protocol NEExtensionAppProxyProviderProtocol <NEExtensionTunnelProviderProtocol>

@required

- (void)setDelegateInterface:(unsigned int)arg1;
- (void)setInitialFlowDivertControlSocket:(NSFileHandle *)arg1;

@end
