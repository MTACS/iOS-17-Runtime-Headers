
@interface AKAuthorizationController : NSObject {
    AKAuthorizationClientImpl * _clientImpl;
    AKAuthorizationDaemonConnection * _daemonConnection;
}

@property (retain) <AKAuthorizationUIProvider> *uiProvider;

+ (unsigned long long)appSSORequestTypeForURL:(id)arg1;
+ (id)appleOwnedDomains;
+ (bool)canPerformAuthorization;
+ (bool)isURLFromAppleOwnedDomain:(id)arg1;
+ (id)sharedController;
+ (bool)shouldProcessURL:(id)arg1;

- (void).cxx_destruct;
- (id)_appleOwnedDomains;
- (id)_nativeTakeoverURLs;
- (bool)_shouldOverrideProxiedBundleIDForContext:(id)arg1;
- (void)beginAuthorizationWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)cancelAuthorizationWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)continueAuthorizationWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)continueFetchingIconForRequestContext:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (void)establishConnectionWithNotificationHandlerEndpoint:(id)arg1 completion:(id /* block */)arg2;
- (void)establishConnectionWithStateBroadcastHandlerEndpoint:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchAppleIDAuthorizeHTMLResponseTemplateWithCompletion:(id /* block */)arg1;
- (void)getCredentialStateForClientID:(id)arg1 completion:(id /* block */)arg2;
- (void)getCredentialStateForRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)getPresentationContextForRequestContext:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithDaemonXPCEndpoint:(id)arg1;
- (void)performAuthorizationWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)performAuthorizationWithContext:(id)arg1 withUserProvidedInformation:(id)arg2 completion:(id /* block */)arg3;
- (id)primaryApplicationInformationForWebServiceWithInfo:(id)arg1 error:(id*)arg2;
- (void)revokeAuthorizationWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)setUiProvider:(id)arg1;
- (void)storeAuthorization:(id)arg1 forProxiedRequest:(id)arg2 completion:(id /* block */)arg3;
- (id)uiProvider;

@end
