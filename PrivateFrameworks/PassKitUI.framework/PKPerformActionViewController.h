
@interface PKPerformActionViewController : UIViewController <PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate, PKPaymentAutoReloadSetupControllerDelegate, PKPerformActionViewDelegate> {
    PKPaymentPassAction * _action;
    UIView<PKPerformActionView> * _actionView;
    PKPaymentAutoReloadSetupController * _autoReloadSetupController;
    UIBarButtonItem * _button;
    PKServiceProviderPurchase * _completedPurchase;
    <PKPerformActionViewControllerDelegate> * _delegate;
    bool  _fieldsVerified;
    PKPerformActionLoadingView * _loadingView;
    PKPaymentPass * _pass;
    PKPerformActionPassView * _passView;
    <PKPaymentDataProvider> * _paymentDataProvider;
    bool  _remoteContentFetched;
    UIBarButtonItem * _spinner;
    PKPaymentWebService * _webService;
}

@property (nonatomic, readonly) PKPaymentPassAction *action;
@property (nonatomic, readonly) UIView<PKPerformActionView> *actionView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPerformActionViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PKPaymentPass *pass;
@property (readonly) Class superclass;
@property (nonatomic, retain) PKPaymentWebService *webService;

+ (id)alertControllerForUnableReason:(unsigned long long)arg1 action:(id)arg2 displayableError:(id)arg3 addCardActionHandler:(id /* block */)arg4;
+ (id)alertControllerForUnableReason:(unsigned long long)arg1 action:(id)arg2 displayableError:(id)arg3 addCardActionHandler:(id /* block */)arg4 unavailableActionHandler:(id /* block */)arg5 cancelActionHandler:(id /* block */)arg6;

- (void).cxx_destruct;
- (id)_actionViewForPass:(id)arg1 action:(id)arg2;
- (void)_canPerformPaymentWithCompletion:(id /* block */)arg1;
- (void)_cancelButtonPressed:(id)arg1;
- (void)_fetchRemoteContentIfNeeded;
- (void)_presentPaymentSetupControllerWithAllowedPaymentNetworks:(id)arg1;
- (void)_reloadActionView;
- (void)_rightBarButtonPressed:(id)arg1;
- (bool)_shouldPresentPaymentRequest:(long long)arg1;
- (void)_showGenericErrorAlert:(id /* block */)arg1;
- (void)_showLoadingView:(bool)arg1;
- (void)_showSpinner:(bool)arg1;
- (id)action;
- (id)actionView;
- (void)autoReloadSetupController:(id)arg1 requestsDismissViewController:(id)arg2;
- (void)autoReloadSetupController:(id)arg1 requestsPresentViewController:(id)arg2;
- (void)autoReloadSetupControllerDidCompleteWithAmount:(id)arg1 threshold:(id)arg2;
- (id)delegate;
- (void)didTapSetUpAutoReloadButton;
- (id)init;
- (id)initWithPass:(id)arg1 action:(id)arg2;
- (id)initWithPass:(id)arg1 action:(id)arg2 paymentDataProvider:(id)arg3;
- (id)initWithPass:(id)arg1 action:(id)arg2 viewStyle:(long long)arg3 paymentDataProvider:(id)arg4;
- (id)pass;
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePayment:(id)arg2 handler:(id /* block */)arg3;
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePurchase:(id)arg2 completion:(id /* block */)arg3;
- (void)paymentAuthorizationCoordinatorDidFinish:(id)arg1;
- (bool)pkui_disablesAutomaticDismissalUponEnteringBackground;
- (void)setDelegate:(id)arg1;
- (void)setRightBarButtonEnabled:(bool)arg1;
- (void)setWebService:(id)arg1;
- (void)shakeCard;
- (bool)shouldHidePassView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateFirstResponder;
- (void)updatePassViewVisibility;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (id)webService;

@end
