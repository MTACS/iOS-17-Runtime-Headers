
@interface NEExtensionTunnelProviderHostContext : NEExtensionProviderHostContext <NEExtensionTunnelProviderHostProtocol, NEExtensionTunnelProviderProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)didSetReasserting:(bool)arg1;
- (void)establishIPCWithCompletionHandler:(id /* block */)arg1;
- (void)handleIPCDetached;
- (void)setTunnelConfiguration:(id)arg1 completionHandler:(id /* block */)arg2;

@end