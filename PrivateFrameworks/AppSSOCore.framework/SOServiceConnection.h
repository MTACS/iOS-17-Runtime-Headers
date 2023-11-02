
@interface SOServiceConnection : NSObject <SOServiceProtocol> {
    NSObject<OS_dispatch_queue> * _queue;
    NSXPCConnection * _xpcConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (retain) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (bool)_connectToService;
- (id)_doConnectWithOptions:(unsigned long long)arg1;
- (void)beginAuthorizationWithRequestParameters:(id)arg1 completion:(id /* block */)arg2;
- (void)cancelAuthorization:(id)arg1 completion:(id /* block */)arg2;
- (void)configurationWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (void)debugHintsWithCompletion:(id /* block */)arg1;
- (void)finishAuthorization:(id)arg1 completion:(id /* block */)arg2;
- (void)getAuthorizationHintsWithURL:(id)arg1 responseCode:(long long)arg2 completion:(id /* block */)arg3;
- (id)initWithQueue:(id)arg1;
- (void)isExtensionProcessWithAuditToken:(struct { unsigned int x1[8]; })arg1 completion:(id /* block */)arg2;
- (void)performAuthorizationWithRequestParameters:(id)arg1 completion:(id /* block */)arg2;
- (void)profilesWithExtensionBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)queue;
- (void)realmsWithCompletion:(id /* block */)arg1;
- (void)setQueue:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (id)xpcConnection;

@end
