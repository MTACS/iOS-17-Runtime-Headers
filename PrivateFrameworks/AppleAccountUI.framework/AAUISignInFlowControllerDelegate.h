
@interface AAUISignInFlowControllerDelegate : NSObject <AASignInFlowControllerDelegate, AAUIGenericTermsRemoteUIDelegate, AAUISignInOperationDelegate> {
    ACAccountStore * _accountStore;
    AAUIGenericTermsRemoteUI * _genericTermsRemoteUI;
    id /* block */  _pendingEnableDataclassesCompletion;
    id /* block */  _pendingTermsCompletion;
    UIViewController * _presentingViewController;
    bool  _progressViewAlreadyPresented;
    bool  backgroundDataclassEnablement;
    CDPContext * cdpContext;
    bool  fastSignInEnabled;
    unsigned long long  findMyActivationAction;
    NSSet * requiredTerms;
    bool  shouldStashLoginResponse;
    bool  skipCDPEnablement;
    bool  skipDataclassEnablement;
}

@property (nonatomic) bool backgroundDataclassEnablement;
@property (nonatomic, retain) CDPContext *cdpContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFastSignInEnabled, nonatomic) bool fastSignInEnabled;
@property (nonatomic) unsigned long long findMyActivationAction;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIViewController *presentingViewController;
@property (getter=wasProgressViewAlreadyPresented, nonatomic) bool progressViewAlreadyPresented;
@property (nonatomic, copy) NSSet *requiredTerms;
@property (nonatomic) bool shouldStashLoginResponse;
@property (nonatomic) bool skipCDPEnablement;
@property (nonatomic) bool skipDataclassEnablement;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_hasActivationLockSupportedWatchWithCompletion:(id /* block */)arg1;
- (bool)backgroundDataclassEnablement;
- (id)cdpContext;
- (unsigned long long)findMyActivationAction;
- (void)genericTermsRemoteUI:(id)arg1 didFinishWithSuccess:(bool)arg2;
- (id)init;
- (id)initWithPresentingViewController:(id)arg1;
- (bool)isFastSignInEnabled;
- (bool)parentViewControllerPresentsErrorAlert;
- (id)presentingViewController;
- (id)requiredTerms;
- (void)setBackgroundDataclassEnablement:(bool)arg1;
- (void)setCdpContext:(id)arg1;
- (void)setFastSignInEnabled:(bool)arg1;
- (void)setFindMyActivationAction:(unsigned long long)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setProgressViewAlreadyPresented:(bool)arg1;
- (void)setRequiredTerms:(id)arg1;
- (void)setShouldStashLoginResponse:(bool)arg1;
- (void)setSkipCDPEnablement:(bool)arg1;
- (void)setSkipDataclassEnablement:(bool)arg1;
- (bool)shouldStashLoginResponse;
- (void)signInFlowController:(id)arg1 enableFindMyWithAction:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)signInFlowController:(id)arg1 presentGenericTermsUIForAccount:(id)arg2 completion:(id /* block */)arg3;
- (void)signInFlowController:(id)arg1 presentProgressViewForAccount:(id)arg2 completion:(id /* block */)arg3;
- (void)signInFlowController:(id)arg1 saveAccount:(id)arg2 withAllDataclassesEnabledIfPossibleWithCompletion:(id /* block */)arg3;
- (void)signInFlowController:(id)arg1 showAlertWithTitle:(id)arg2 message:(id)arg3 completion:(id /* block */)arg4;
- (void)signInOperationManager:(id)arg1 didSaveAccount:(id)arg2 error:(id)arg3;
- (bool)skipCDPEnablement;
- (bool)skipDataclassEnablement;
- (bool)wasProgressViewAlreadyPresented;

@end
