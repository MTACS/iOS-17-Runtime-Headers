
@interface NEExtensionPacketTunnelProviderContext : NEExtensionTunnelProviderContext <NEExtensionPacketTunnelProviderHostProtocol, NEExtensionPacketTunnelProviderProtocol> {
    bool  _testDisconnectAndDisposeTimeout;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)completeSession;
- (void)dispose;
- (id)extensionPoint;
- (void)fetchVirtualInterfaceTypeWithCompletionHandler:(id /* block */)arg1;
- (void)requestSocket:(bool)arg1 interface:(id)arg2 local:(id)arg3 remote:(id)arg4 completionHandler:(id /* block */)arg5;
- (Class)requiredProviderSuperClass;
- (void)setAppUUIDMap:(id)arg1;
- (void)setTunnelConfiguration:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setupVirtualInterface:(id)arg1;
- (void)startWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)stopWithReason:(int)arg1;

@end
