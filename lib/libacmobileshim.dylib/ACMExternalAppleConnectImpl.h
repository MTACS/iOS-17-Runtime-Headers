
@interface ACMExternalAppleConnectImpl : ACMAppleConnectImpl <ACC2SVControllerDelegate, ACM2SVTransportControllerDelegate, ACMExternalAppleConnectImpl, ACMExternalAppleConnectPrivate, ACMExternalAuthenticationControllerDelegate> {
    long long  _appleConnectState;
    ACMExternalAuthenticationController * _authenticationController;
    ACMExternalAuthenticationRequestImpl * _currentRequest;
    <ACMExternalAppleConnectDelegate><ACMAppleConnectTicketVerificationDelegate> * _delegate;
    id  _masterObject;
    <ACC2SVControllerProtocol> * _twoSVController;
}

@property (nonatomic) long long appleConnectState;
@property (nonatomic, retain) ACMExternalAuthenticationController *authenticationController;
@property (readonly) ACMAppleConnectImplComponents *components;
@property (nonatomic, retain) ACMExternalAuthenticationRequestImpl *currentRequest;
@property (readonly, copy) NSString *debugDescription;
@property <ACMExternalAppleConnectDelegate><ACMAppleConnectTicketVerificationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long logLevel;
@property (readonly) UIView *managerApprovalDialogSummaryView;
@property id masterObject;
@property (readonly) unsigned long long signInDialogContentStyle;
@property (readonly) Class superclass;
@property (nonatomic, retain) <ACC2SVControllerProtocol> *twoSVController;
@property (nonatomic, readonly) <ACMExternalUIControllerProtocol> *uiController;

+ (void)initialize;

- (long long)appleConnectState;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)authenticateRunningOnMainThreadWithRequest:(id)arg1;
- (void)authenticateWithRequest:(id)arg1 password:(id)arg2;
- (id)authenticationController;
- (void)authenticationController:(id)arg1 perform2StepVerificationWithRequest:(id)arg2 completion:(id /* block */)arg3;
- (void)authenticationController:(id)arg1 scheduleHandler:(id)arg2 withCompletion:(id /* block */)arg3;
- (bool)canHideSignInDialog;
- (void)cancelRequests;
- (id)components;
- (id)currentRequest;
- (void)dealloc;
- (id)delegate;
- (id)hideAppleConnectSignInDialog;
- (void)hideSignIn;
- (id)initWithMasterObject:(id)arg1;
- (bool)isWidgetShown;
- (long long)logLevel;
- (id)masterObject;
- (void)onManageAppleIDForRealm:(id)arg1;
- (id)parentViewController;
- (void)reportError:(id)arg1;
- (void)returnError:(id)arg1 withSelector:(SEL)arg2 withResponseClass:(Class)arg3;
- (void)returnResponse:(id)arg1 withSelector:(SEL)arg2;
- (void)setAppleConnectState:(long long)arg1;
- (void)setAuthenticationController:(id)arg1;
- (void)setCurrentRequest:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLogLevel:(long long)arg1;
- (void)setMasterObject:(id)arg1;
- (void)setTwoSVController:(id)arg1;
- (bool)shouldReleaseOnMemoryWarning;
- (void)showSignInDialog;
- (void)showSignInWithRequest:(id)arg1;
- (bool)signInAnimated;
- (unsigned long long)signInDialogContentStyle;
- (void)signInDialogDidHide;
- (void)signInDialogWillHide;
- (id)twoSVController;
- (void)twoSVController:(id)arg1 openMyAppleConnectForRealm:(id)arg2;
- (void)twoSVController:(id)arg1 prepareUIWithCompletion:(id /* block */)arg2;
- (void)twoSVControllerEnterCredentials:(id)arg1;
- (void)twoSVControllerWillClose:(id)arg1;
- (void)twoSVTransportController:(id)arg1 fetchImageWithHandler:(id)arg2 completion:(id /* block */)arg3;
- (void)twoSVTransportController:(id)arg1 scheduleHandler:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)twoSVTransportControllerCancelFetchingImages:(id)arg1;
- (id)uiController;
- (void)uiControllerDidDisableSignInDialog:(id)arg1;
- (void)uiControllerDidEnableSignInDialog:(id)arg1;
- (void)uiControllerOnSignIForgot:(id)arg1;
- (void)uiControllerOnSignIn:(id)arg1 withPassword:(id)arg2;
- (void)uiControllerOnSignInCancel:(id)arg1;
- (void)uiControllerWillDisableSignInDialog:(id)arg1;
- (void)uiControllerWillEnableSignInDialog:(id)arg1;
- (void)verifyServiceTicket:(id)arg1;

@end
