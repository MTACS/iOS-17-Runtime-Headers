
@interface AKASAuthorizationProvider : NSObject <AKAlertHandlerUIProvider, AKAuthorizationPasswordAuthenticationDelegate, _ASAuthenticationProvider> {
    NSString * _appName;
    id /* block */  _completionHandlerForCurrentRequest;
    bool  _didFailWithErrorRequiringPasswordAuth;
    <_ASAuthenticationPresentationProvider> * _presentationProvider;
    AKCredentialRequestContext * _requestContext;
    NSObject<OS_dispatch_queue> * _requestQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <_ASAuthenticationProviderLoginRowData> *loginRowData;
@property <_ASAuthenticationPresentationProvider> *presentationProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleAuthorizationError:(id)arg1;
- (void)_performAuthorizationWithCompletionHandler:(id /* block */)arg1;
- (bool)_shouldContinueWithPasswordForError:(id)arg1;
- (void)_showPasswordAuthenticationViewController;
- (bool)alertHandlerShowAlert:(id)arg1 primaryAction:(id /* block */)arg2 altAction:(id /* block */)arg3;
- (id)initWithAppName:(id)arg1 teamIdentifier:(id)arg2 bundleIdentifier:(id)arg3 authorizationRequest:(id)arg4;
- (id)loginRowData;
- (void)passwordAuthenticationCompletedWithResults:(id)arg1 error:(id)arg2;
- (void)performAuthorizationWithCompletionHandler:(id /* block */)arg1;
- (id)presentationProvider;
- (void)setPresentationProvider:(id)arg1;

@end
