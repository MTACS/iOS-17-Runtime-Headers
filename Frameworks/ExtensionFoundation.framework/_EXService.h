
@interface _EXService : NSObject <LSObserverDelegate, NSXPCListenerDelegate, _EXServiceProtocol> {
    _EXDiscoveryController * _discoveryController;
    NSObject<OS_dispatch_source> * _sigtermSource;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) _EXDiscoveryController *discoveryController;
@property (readonly) unsigned long long hash;
@property (readonly) NSObject<OS_dispatch_source> *sigtermSource;
@property (readonly) Class superclass;

+ (bool)currentProcessIsService;
+ (void)runAsXPCService;
+ (id)sharedService;

- (void).cxx_destruct;
- (id)_init;
- (id)_personaStringForClient:(id)arg1 requestedPersona:(id)arg2;
- (void)beginExtensionsQuery:(id)arg1 listenerEndpoint:(id)arg2 reply:(id /* block */)arg3;
- (id)discoveryController;
- (void)extensionsWithQuery:(id)arg1 reply:(id /* block */)arg2;
- (void)getServiceConfigForExtension:(id)arg1 overlay:(id*)arg2 subservices:(id*)arg3;
- (void)invalidateLaunchAssertionsForExtensionAuditToken:(struct { unsigned int x1[8]; })arg1 reply:(id /* block */)arg2;
- (id)launchWithConfiguration:(id)arg1 clientConnection:(id)arg2 error:(id*)arg3;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)photoServiceAuthorizationStatusForExtensionUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)prepareWithLaunchConfiguration:(id)arg1 reply:(id /* block */)arg2;
- (bool)registerServiceForClientConnection:(id)arg1 extension:(id)arg2 error:(id*)arg3;
- (id)sigtermSource;

@end
