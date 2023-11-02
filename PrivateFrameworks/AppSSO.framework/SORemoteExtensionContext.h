
@interface SORemoteExtensionContext : NSExtensionContext <SOExtensionContext, SORemoteExtensionContextProtocol> {
    <ASAuthorizationProviderExtensionAuthorizationRequestHandler><POExtensionRegistrationProtocol> * _extensionAuthorizationRequestHandler;
    SOExtensionServiceConnection * _extensionServiceConnection;
    id /* block */  _finishAuthorizationCompletion;
    id /* block */  _registrationCompletion;
    NSMapTable * _requests;
    SOExtensionViewService * _viewService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <ASAuthorizationProviderExtensionAuthorizationRequestHandler> *extensionViewController;
@property (readonly) unsigned long long hash;
@property (copy) id /* block */ registrationCompletion;
@property (readonly) Class superclass;
@property SOExtensionViewService *viewService;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (void)_disableAppSSOInCFNetwork;
- (id)authorizationRequestHandlerWithRequestParameters:(id)arg1 error:(id*)arg2;
- (void)beginAuthorizationWithRequestParameters:(id)arg1 completion:(id /* block */)arg2;
- (void)beginAuthorizationWithServiceXPCEndpoint:(id)arg1 completion:(id /* block */)arg2;
- (void)beginDeviceRegistrationUsingOptions:(long long)arg1 extensionData:(id)arg2 completion:(id /* block */)arg3;
- (void)beginUserRegistrationUsingUserName:(id)arg1 authenticationMethod:(int)arg2 options:(long long)arg3 extensionData:(id)arg4 completion:(id /* block */)arg5;
- (bool)canOpenURL:(id)arg1;
- (void)canPerformRegistrationCompletion:(id /* block */)arg1;
- (void)cancelAuthorization:(id)arg1 completion:(id /* block */)arg2;
- (void)completeFinishAuthorization:(id)arg1 error:(id)arg2;
- (id)extensionAuthorizationRequestHandlerWithError:(id*)arg1;
- (id)extensionViewController;
- (id)findRequestForIdentifier:(id)arg1;
- (void)finishAuthorization:(id)arg1 completion:(id /* block */)arg2;
- (id)hostContextWithError:(id*)arg1;
- (void)openURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)protocolVersionCompletion:(id /* block */)arg1;
- (id /* block */)registrationCompletion;
- (void)registrationDidCancelWithCompletion:(id /* block */)arg1;
- (void)registrationDidCompleteWithCompletion:(id /* block */)arg1;
- (void)removeRequestForIdentifier:(id)arg1;
- (void)saveRequest:(id)arg1 forIdentifier:(id)arg2;
- (void)setRegistrationCompletion:(id /* block */)arg1;
- (void)setViewService:(id)arg1;
- (void)supportedGrantTypesCompletion:(id /* block */)arg1;
- (id)synchronousHostContextWithError:(id*)arg1;
- (id)viewService;

@end
