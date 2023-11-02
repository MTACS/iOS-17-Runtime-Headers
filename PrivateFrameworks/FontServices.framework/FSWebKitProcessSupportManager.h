
@interface FSWebKitProcessSupportManager : NSObject <FontServicesWebKitSupportClientProtocol, FontServicesWebKitSupportServerProtocol, NSXPCListenerDelegate> {
    NSXPCConnection * _hostConnection;
    NSXPCListener * _serverListener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSXPCConnection *hostConnection;
@property (nonatomic, retain) NSXPCListener *serverListener;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)checkin;
- (id)hostConnection;
- (id)initWithXPCEndpoint:(id)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)ping2:(id /* block */)arg1;
- (void)ping:(id /* block */)arg1;
- (id)serverListener;
- (void)setHostConnection:(id)arg1;
- (void)setServerListener:(id)arg1;
- (void)userInstalledFontsInfo:(id)arg1 reply:(id /* block */)arg2;

@end
