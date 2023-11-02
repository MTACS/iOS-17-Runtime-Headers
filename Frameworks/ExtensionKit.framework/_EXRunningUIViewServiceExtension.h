
@interface _EXRunningUIViewServiceExtension : _EXRunningUIExtension <NSXPCListenerDelegate> {
    NSXPCListener * _internalListener;
    NSXPCListener * _serviceListener;
    NSXPCConnection * _xpcConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSXPCListener *internalListener;
@property (retain) NSXPCListener *serviceListener;
@property (readonly) Class superclass;
@property (retain) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (id)internalListener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)serviceListener;
- (void)setInternalListener:(id)arg1;
- (void)setServiceListener:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (int)startWithArguments:(const char **)arg1 count:(int)arg2;
- (id)xpcConnection;

@end
