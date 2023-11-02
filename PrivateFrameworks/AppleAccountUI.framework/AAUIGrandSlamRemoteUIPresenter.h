
@interface AAUIGrandSlamRemoteUIPresenter : NSObject <RemoteUIControllerDelegate> {
    AIDAAccountManager * _accountManager;
    NSURLRequest * _currentRequest;
    <AAUIGrandSlamRemoteUIPresenterDelegate> * _delegate;
    ACAccount * _grandSlamAccount;
    bool  _isEndOfFlow;
    bool  _modalInPresentation;
    UIViewController * _presenter;
    RemoteUIController * _remoteUIController;
    AKAppleIDServerResourceLoadDelegate * _resourceLoadDelegate;
    RUIServerHookHandler * _serverUIHookHandler;
    AAUIServerHookHandlerDelegate * _serverUIHookHandlerDelegate;
    bool  _showCancelInModalPresentation;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AAUIGrandSlamRemoteUIPresenterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isModalInPresentation, nonatomic) bool modalInPresentation;
@property (nonatomic) UIViewController *presenter;
@property (nonatomic) bool showCancelInModalPresentation;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_accountStore;
- (void)_addHeadersToRequest:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_addRemoteUIEventHandler;
- (id)_appleAccount;
- (id)_authContext;
- (bool)_checkFlowEndForResponse:(id)arg1;
- (void)_getServerUILoadDelegateWithCompletion:(id /* block */)arg1;
- (id)_grandSlamAccount;
- (bool)_isAuthError:(id)arg1;
- (id)_remoteUICancelButtonForPage:(id)arg1;
- (id)delegate;
- (id)initWithAccountManager:(id)arg1 hookType:(unsigned long long)arg2 presenter:(id)arg3;
- (id)initWithAccountManager:(id)arg1 presenter:(id)arg2;
- (id)initWithAccountManager:(id)arg1 presenter:(id)arg2 hooks:(id)arg3;
- (bool)isModalInPresentation;
- (void)loadRequest:(id)arg1;
- (void)loadRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)presenter;
- (id)remoteUIController:(id)arg1 createPageWithName:(id)arg2 attributes:(id)arg3;
- (void)remoteUIController:(id)arg1 didDismissModalNavigationWithObjectModels:(id)arg2;
- (void)remoteUIController:(id)arg1 didFinishLoadWithError:(id)arg2 forRequest:(id)arg3;
- (void)remoteUIController:(id)arg1 didPresentObjectModel:(id)arg2 modally:(bool)arg3;
- (void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long*)arg3;
- (void)remoteUIController:(id)arg1 didRefreshObjectModel:(id)arg2;
- (void)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)remoteUIController:(id)arg1 willPresentModalNavigationController:(id)arg2;
- (void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(bool)arg3;
- (void)remoteUIControllerDidDismiss:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setModalInPresentation:(bool)arg1;
- (void)setPresenter:(id)arg1;
- (void)setShowCancelInModalPresentation:(bool)arg1;
- (bool)showCancelInModalPresentation;

@end
