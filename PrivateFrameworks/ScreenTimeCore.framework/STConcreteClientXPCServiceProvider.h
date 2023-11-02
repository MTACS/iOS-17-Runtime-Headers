
@interface STConcreteClientXPCServiceProvider : NSObject <NSXPCListenerDelegate, STClientXPCServiceProvider> {
    NSXPCListener * _activeListener;
    id  _providedService;
    NSXPCInterface * _providedServiceInterface;
}

@property (retain) NSXPCListener *activeListener;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) id providedService;
@property (retain) NSXPCInterface *providedServiceInterface;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activeListener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)providePasscodeAuthenticationProviderService;
- (id)providePasscodeProviderService;
- (id)providedService;
- (id)providedServiceInterface;
- (void)setActiveListener:(id)arg1;
- (void)setProvidedService:(id)arg1;
- (void)setProvidedServiceInterface:(id)arg1;

@end
