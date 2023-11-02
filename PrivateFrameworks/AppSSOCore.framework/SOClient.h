
@interface SOClient : NSObject <SOServiceProtocol> {
    SOServiceConnection * _serviceConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) SOServiceConnection *serviceConnection;
@property (readonly) Class superclass;

+ (id)_queue;

- (void).cxx_destruct;
- (void)beginAuthorizationWithRequestParameters:(id)arg1 completion:(id /* block */)arg2;
- (void)cancelAuthorization:(id)arg1 completion:(id /* block */)arg2;
- (void)configurationWithCompletion:(id /* block */)arg1;
- (void)debugHintsWithCompletion:(id /* block */)arg1;
- (void)finishAuthorization:(id)arg1 completion:(id /* block */)arg2;
- (void)getAuthorizationHintsWithURL:(id)arg1 responseCode:(long long)arg2 completion:(id /* block */)arg3;
- (id)init;
- (void)isExtensionProcessWithAuditToken:(struct { unsigned int x1[8]; })arg1 completion:(id /* block */)arg2;
- (void)performAuthorizationWithRequestParameters:(id)arg1 completion:(id /* block */)arg2;
- (void)profilesWithExtensionBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)realmsWithCompletion:(id /* block */)arg1;
- (id)serviceConnection;
- (void)setServiceConnection:(id)arg1;

@end
