
@interface SOExtensionServiceConnection : NSObject <SORemoteExtensionServiceProtocol> {
    NSXPCListenerEndpoint * _serviceXpcEndpoint;
    NSXPCConnection * _xpcConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSXPCListenerEndpoint *serviceXpcEndpoint;
@property (readonly) Class superclass;
@property (retain) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (bool)_connectToService;
- (void)beginAuthorizationWithCompletion:(id /* block */)arg1;
- (id)initWithListenerEndpoint:(id)arg1;
- (id)serviceXpcEndpoint;
- (void)setServiceXpcEndpoint:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (id)xpcConnection;

@end
