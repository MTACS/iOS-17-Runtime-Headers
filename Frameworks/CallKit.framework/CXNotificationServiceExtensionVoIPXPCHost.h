
@interface CXNotificationServiceExtensionVoIPXPCHost : NSObject <CXNotificationServiceExtensionHostDelegate, CXNotificationServiceExtensionVoIPXPC, NSXPCListenerDelegate> {
    <CXNotificationServiceExtensionHostDelegate> * _delegate;
    NSXPCListener * _xpcListener;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CXNotificationServiceExtensionHostDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSXPCListener *xpcListener;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)notificationServiceExtension:(id)arg1 reply:(id /* block */)arg2;
- (void)notificationServiceExtensionHost:(id)arg1 didReceiveIncomingMessage:(id)arg2 forBundleIdentifier:(id)arg3 reply:(id /* block */)arg4;
- (void)setDelegate:(id)arg1;
- (id)xpcListener;

@end
