
@interface PKDataReleaseContentViewController : UIViewController <LAUIDelegate, PKAuthenticatorDelegate, PKDataReleaseHeaderDelegate, PKPaymentAuthorizationFooterViewDelegate, UITableViewDataSource, UITableViewDelegate> {
    struct __SecAccessControl { } * _accessControl;
    bool  _authenticating;
    PKAuthenticator * _authenticator;
    UIView * _bottomSeparator;
    PKTransactionReleasedData * _dataToRelease;
    <PKDataReleaseContentViewControllerDelegate> * _delegate;
    PKDataReleaseEntityResolver * _entityResolver;
    UIVisualEffectView * _footerMaterial;
    PKPaymentAuthorizationFooterView * _footerView;
    bool  _hasFailedBiometrics;
    bool  _hasPlayedHaptics;
    PKDataReleaseHeader * _header;
    PKPaymentTransactionIconGenerator * _iconGenerator;
    NSObject<OS_dispatch_source> * _idleTimer;
    PKIdleTimerAssertion * _idleTimerAssertion;
    NSArray * _intentDisplayOnlyElements;
    NSArray * _intentDoNotRetainElements;
    NSArray * _intentRetainElements;
    bool  _isInBioLockout;
    bool  _isTemplateLayout;
    bool  _lastFailureWasUnboundBiometric;
    long long  _layoutRecursionCounter;
    LAContext * _localAuthenticationContext;
    PKMerchant * _merchant;
    UIImage * _merchantIcon;
    UIViewController * _passcodeViewController;
    PKISO18013DataReleaseRequest * _request;
    UITableView * _tableViewReleaseData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)_compactNavigationController;
- (void)_configureFooterViewConfirmationTitle;
- (void)_finishedRemovingDoublePressCredentialWithError:(id)arg1;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_reloadMerchantHeader;
- (void)_startEvaluationWithExternalizedContext:(id)arg1;
- (void)_startInitialEvaluation;
- (void)_updateMerchantHeaderView:(id)arg1 animated:(bool)arg2;
- (void)_updatePhysicalButtonState;
- (void)_updatePreferredContentSize;
- (void)_updateSeparators;
- (void)authenticator:(id)arg1 didTransitionToEvaluationStateWithEvent:(struct { long long x1; long long x2; })arg2;
- (void)authorizationFooterViewPasscodeButtonPressed:(id)arg1;
- (void)dataReleaseCompletedWithError:(id)arg1;
- (void)dataReleaseHeaderDidTapDismiss;
- (void)dealloc;
- (void)dismissPasscodeViewController;
- (void)event:(long long)arg1 params:(id)arg2 reply:(id /* block */)arg3;
- (id)initWithRequest:(id)arg1 delegate:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)presentPasscodeToExitLockout;
- (void)presentPasscodeViewController:(id)arg1 completionHandler:(id /* block */)arg2 reply:(id /* block */)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setIdleTimerDisabled:(bool)arg1;
- (bool)shouldShowPhysicalButton;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableViewDidFinishReload:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
