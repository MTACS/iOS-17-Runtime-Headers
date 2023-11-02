
@interface AAUIGenericTermsRemoteUI : NSObject <RemoteUIControllerDelegate> {
    ACAccount * _account;
    ACAccountStore * _accountStore;
    NSDictionary * _additionalHeaders;
    <AAUIGenericTermsRemoteUIDelegate> * _delegate;
    bool  _didRenewCredentials;
    UINavigationController * _genericTermsUIViewController;
    AAUIServerHookHandlerDelegate * _hookHandlerDelegate;
    bool  _isModal;
    bool  _isPreferringPassword;
    UIViewController * _originatingViewController;
    UINavigationController * _parentNavController;
    RemoteUIController * _remoteUIController;
    RUIServerHookHandler * _serverHookHandler;
    NSNumber * _slaVersion;
    NSSet * _termsEntries;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, retain) ACAccountStore *accountStore;
@property (nonatomic, retain) NSDictionary *additionalHeaders;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AAUIGenericTermsRemoteUIDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AAUIServerHookHandlerDelegate *hookHandlerDelegate;
@property (nonatomic, readonly) UIViewController *originatingViewController;
@property (nonatomic, retain) RemoteUIController *remoteUIController;
@property (nonatomic, retain) RUIServerHookHandler *serverHookHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addHeadersToRequest:(id)arg1;
- (void)_agreeToTermsWithURLString:(id)arg1 preferPassword:(bool)arg2 completion:(id /* block */)arg3;
- (id)_authContextForRenewCredentials;
- (void)_cleanUpAndDismissWithSuccess:(bool)arg1 agreeURL:(id)arg2;
- (void)_cleanupRUILoader;
- (void)_displayConnectionErrorAndDismiss;
- (bool)_isUnauthorizedError:(id)arg1;
- (void)_loadRequestPreferringPassword:(bool)arg1;
- (void)_renewCredentialsWithCompletion:(id /* block */)arg1;
- (void)_reportTermsUserAction:(id)arg1 agreeUrl:(id)arg2;
- (void)_sendAcceptedTermsInfo:(id)arg1;
- (id)_sessionConfiguration;
- (void)_setupActionForButtons;
- (id)_viewControllerForAlertPresentation;
- (id)account;
- (id)accountStore;
- (id)additionalHeaders;
- (id)delegate;
- (id)hookHandlerDelegate;
- (id)initWithAccount:(id)arg1 inStore:(id)arg2;
- (id)initWithAccount:(id)arg1 inStore:(id)arg2 termsEntries:(id)arg3;
- (id)originatingViewController;
- (void)presentFromViewController:(id)arg1 modal:(bool)arg2;
- (id)remoteUIController;
- (void)remoteUIController:(id)arg1 didPresentObjectModel:(id)arg2 modally:(bool)arg3;
- (void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long*)arg3;
- (void)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)remoteUIController:(id)arg1 willPresentModalNavigationController:(id)arg2;
- (id)serverHookHandler;
- (void)setAccount:(id)arg1;
- (void)setAccountStore:(id)arg1;
- (void)setAdditionalHeaders:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHookHandlerDelegate:(id)arg1;
- (void)setRemoteUIController:(id)arg1;
- (void)setServerHookHandler:(id)arg1;

@end
