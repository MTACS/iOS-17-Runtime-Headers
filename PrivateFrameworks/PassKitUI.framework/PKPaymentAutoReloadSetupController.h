
@interface PKPaymentAutoReloadSetupController : NSObject <PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate, PKPaymentAutoReloadSetupCompleteViewControllerDelegate, PKPaymentDataProviderDelegate, PKThresholdTopUpSetupViewControllerDelegate> {
    PKPaymentPassAction * _action;
    PKServiceProviderPurchase * _completedAutoReload;
    id /* block */  _completionHandler;
    NSString * _currency;
    PKCurrencyAmount * _currentAmount;
    PKCurrencyAmount * _currentThreshold;
    <PKPaymentAutoReloadSetupControllerDelegate> * _delegate;
    bool  _isWalletAutoTopEnabled;
    NSString * _originalPaymentMethodIdentifier;
    PKPaymentPass * _pass;
    bool  _passUpdated;
    <PKPaymentDataProvider> * _paymentDataProvider;
    long long  _setupMode;
    PKThresholdTopUpSetupViewController * _thresholdTopUpSetupViewController;
    NSObject<OS_dispatch_source> * _timer;
    long long  _viewStyle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) PKThresholdTopUpSetupViewController *thresholdTopUpSetupViewController;

+ (bool)shouldOfferAutoReloadForPass:(id)arg1;

- (void).cxx_destruct;
- (id)_createThresholdTopUpSetupViewController;
- (void)_didUpdateAutoReloadWithAmount:(id)arg1 threshold:(id)arg2 paymentMethodIdentifier:(id)arg3 completion:(id /* block */)arg4;
- (void)_dismissViewController:(id)arg1;
- (void)_showGenericErrorAlert:(id /* block */)arg1;
- (void)autoReloadSetupCompleteViewControllerDidComplete;
- (id)initWithPass:(id)arg1 paymentDataProvider:(id)arg2 provisioningController:(id)arg3 viewStyle:(long long)arg4 delegate:(id)arg5;
- (id)initWithPass:(id)arg1 paymentDataProvider:(id)arg2 viewStyle:(long long)arg3 delegate:(id)arg4;
- (id)initWithPass:(id)arg1 provisioningController:(id)arg2 viewStyle:(long long)arg3 delegate:(id)arg4;
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePayment:(id)arg2 handler:(id /* block */)arg3;
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePurchase:(id)arg2 completion:(id /* block */)arg3;
- (void)paymentAuthorizationCoordinatorDidFinish:(id)arg1;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveBalanceUpdate:(id)arg2;
- (id)paymentRequest:(id)arg1 threshold:(id)arg2 paymentMethodIdentifier:(id)arg3;
- (void)presentAutoTopUpFlow;
- (void)setThresholdTopUpSetupViewController:(id)arg1;
- (void)thresholdTopUpDidSelectCancel:(id)arg1;
- (void)thresholdTopUpDidSelectContinue:(id)arg1 completion:(id /* block */)arg2;
- (void)thresholdTopUpDidSelectUpdate:(id)arg1 completion:(id /* block */)arg2;
- (void)thresholdTopUpPerformCancel:(id)arg1 completion:(id /* block */)arg2;
- (id)thresholdTopUpSetupViewController;

@end
