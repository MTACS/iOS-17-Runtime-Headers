
@interface ASWebAuthenticationSession : NSObject <ASAuthorizationControllerDelegate, ASAuthorizationControllerPresentationContextProviding> {
    SFAuthenticationSession * _authenticationSession;
    ASAuthorizationController * _authorizationController;
    NSString * _callbackURLScheme;
    id /* block */  _originalCompletionHandler;
    bool  _prefersEphemeralWebBrowserSession;
    <ASWebAuthenticationPresentationContextProviding> * _presentationContextProvider;
    ASWebAuthenticationSession * _referenceToSelf;
    ASAuthorizationSingleSignOnProvider * _ssoProvider;
}

@property (nonatomic, readonly) bool canStart;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool prefersEphemeralWebBrowserSession;
@property (nonatomic) <ASWebAuthenticationPresentationContextProviding> *presentationContextProvider;
@property (readonly) Class superclass;

+ (void)handleSSOExtensionIdentifier:(struct { unsigned int x1[8]; })arg1;
+ (void)resetSSOExtensionIdentifier;

- (void).cxx_destruct;
- (void)_invalidate;
- (bool)_startDryRun:(bool)arg1;
- (void)authorizationController:(id)arg1 didCompleteWithAuthorization:(id)arg2;
- (void)authorizationController:(id)arg1 didCompleteWithError:(id)arg2;
- (bool)canStart;
- (void)cancel;
- (id)initWithURL:(id)arg1 callbackURLScheme:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithURL:(id)arg1 callbackURLScheme:(id)arg2 usingEphemeralSession:(bool)arg3 completionHandler:(id /* block */)arg4;
- (id)initWithURL:(id)arg1 callbackURLScheme:(id)arg2 usingEphemeralSession:(bool)arg3 jitEnabled:(bool)arg4 completionHandler:(id /* block */)arg5;
- (bool)prefersEphemeralWebBrowserSession;
- (id)presentationAnchorForAuthorizationController:(id)arg1;
- (id)presentationContextProvider;
- (void)setPrefersEphemeralWebBrowserSession:(bool)arg1;
- (void)setPresentationContextProvider:(id)arg1;
- (bool)start;

@end
