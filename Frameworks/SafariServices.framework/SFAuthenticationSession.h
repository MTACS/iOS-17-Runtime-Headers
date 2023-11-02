
@interface SFAuthenticationSession : NSObject <SFAuthenticationViewControllerPresentationDelegate, SFSafariViewControllerDelegateInternal> {
    <_SFAuthenticationSessionDelegate> * __delegate;
    SFAuthenticationViewController * _authViewController;
    NSString * _callbackURLScheme;
    id /* block */  _completionHandler;
    NSURL * _initialURL;
    bool  _jitEnabled;
    bool  _prefersEphemeralWebBrowserSession;
    bool  _sessionStarted;
}

@property (nonatomic) <_SFAuthenticationSessionDelegate> *_delegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool jitEnabled;
@property (nonatomic) bool prefersEphemeralWebBrowserSession;
@property (getter=isSessionStarted, nonatomic) bool sessionStarted;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_authenticationSessionErrorWithCode:(long long)arg1;
- (id)_delegate;
- (bool)_startRequestingFromWebAuthenticationSession:(bool)arg1 inWindow:(id)arg2 dryRun:(bool)arg3;
- (void)cancel;
- (void)dealloc;
- (id)initWithURL:(id)arg1 callbackURLScheme:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithURL:(id)arg1 callbackURLScheme:(id)arg2 usingEphemeralSession:(bool)arg3 completionHandler:(id /* block */)arg4;
- (id)initWithURL:(id)arg1 callbackURLScheme:(id)arg2 usingEphemeralSession:(bool)arg3 jitEnabled:(bool)arg4 completionHandler:(id /* block */)arg5;
- (bool)isSessionStarted;
- (bool)jitEnabled;
- (bool)prefersEphemeralWebBrowserSession;
- (id)presentingViewControllerForAuthenticationViewController:(id)arg1;
- (void)safariViewController:(id)arg1 didDecideCookieSharingForURL:(id)arg2 shouldCancel:(bool)arg3;
- (void)safariViewController:(id)arg1 hostApplicationOpenURL:(id)arg2;
- (void)safariViewControllerDidFinish:(id)arg1;
- (void)setJitEnabled:(bool)arg1;
- (void)setPrefersEphemeralWebBrowserSession:(bool)arg1;
- (void)setSessionStarted:(bool)arg1;
- (void)set_delegate:(id)arg1;
- (bool)start;
- (bool)startASWebAuthenticationSessionInWindow:(id)arg1 dryRun:(bool)arg2;

@end
