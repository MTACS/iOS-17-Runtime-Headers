
@interface AKInAppAuthenticationRemoteUIDelegate : NSObject <RemoteUIControllerDelegate> {
    AKAppleIDAuthenticationInAppContext * _context;
    RUIObjectModel * _currentRemoteOM;
    NSHTTPURLResponse * _deferredResponse;
    UINavigationController * _modalRemoteUINavController;
    bool  _navBarButtonOverridden;
    bool  _overrideFirstActionSignal;
    AKAppleIDServerUIContextController * _serverUIContextController;
    AAUICDPStingrayRemoteUIController * _stingrayController;
    UIViewController * _topViewControllerOnLoadStart;
}

@property (nonatomic, readonly) RUIObjectModel *currentRemoteOM;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UINavigationController *modalRemoteUINavController;
@property (nonatomic) bool overrideFirstActionSignal;
@property (nonatomic, retain) AKAppleIDServerUIContextController *serverUIContextController;
@property (nonatomic, retain) AAUICDPStingrayRemoteUIController *stingrayController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addBackButtonForController:(id)arg1;
- (void)_handleBackButtonTap:(id)arg1;
- (bool)_isDeferrableFinalResponseHarvested;
- (unsigned long long)_passwordResetRequestType;
- (void)_processAndHandleConflictErrorFromResponse:(id)arg1;
- (void)_showAlert:(id)arg1;
- (void)clearObjectModel;
- (id)currentRemoteOM;
- (id)initWithContext:(id)arg1;
- (id)modalRemoteUINavController;
- (bool)overrideFirstActionSignal;
- (void)remoteUIController:(id)arg1 didDismissModalNavigationWithObjectModels:(id)arg2;
- (void)remoteUIController:(id)arg1 didFinishLoadWithError:(id)arg2 forRequest:(id)arg3;
- (void)remoteUIController:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2 forRequest:(id)arg3;
- (void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long*)arg3;
- (void)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)remoteUIController:(id)arg1 willPresentModalNavigationController:(id)arg2;
- (void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(bool)arg3;
- (id)serverUIContextController;
- (void)setOverrideFirstActionSignal:(bool)arg1;
- (void)setServerUIContextController:(id)arg1;
- (void)setStingrayController:(id)arg1;
- (id)stingrayController;

@end
