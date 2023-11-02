
@interface NEExtensionAppProxyProviderHostContext : NEExtensionTunnelProviderHostContext <NEExtensionAppProxyProviderHostProtocol, NEExtensionAppProxyProviderProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)openFlowDivertControlSocketWithCompletionHandler:(id /* block */)arg1;
- (int)requiredEntitlement;
- (void)setDelegateInterface:(unsigned int)arg1;
- (void)setInitialFlowDivertControlSocket:(id)arg1;

@end
