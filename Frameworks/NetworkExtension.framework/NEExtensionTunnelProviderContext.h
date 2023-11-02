
@interface NEExtensionTunnelProviderContext : NEExtensionProviderContext <NEExtensionTunnelProviderHostProtocol, NEExtensionTunnelProviderProtocol> {
    NEIPC * _ipc;
    NSObject<OS_dispatch_source> * _ipcIdleTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (void)cancelWithError:(id)arg1;
- (void)didSetReasserting:(bool)arg1;
- (void)establishIPCWithCompletionHandler:(id /* block */)arg1;
- (void)handleIPCDetached;
- (void)setConfiguration:(id)arg1 extensionIdentifier:(id)arg2;
- (void)setTunnelConfiguration:(id)arg1 completionHandler:(id /* block */)arg2;

@end
