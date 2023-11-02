
@interface LNExtensionMediator : NSObject <LNDaemonExtensionInterface> {
    _EXExtensionProcess * _extensionProcess;
    NSXPCConnection * _xpcConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _EXExtensionProcess *extensionProcess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (void)dealloc;
- (id)extensionProcess;
- (void)getConnectionHostInterfaceForBundleIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getWidgetKitXPCListenerEndpointForBundleIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (bool)invalidate;
- (void)setExtensionProcess:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (id)xpcConnection;

@end
