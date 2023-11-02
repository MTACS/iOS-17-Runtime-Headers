
@interface PKPaymentAutoReloadSetupCompleteViewController : PKExplanationViewController <PKExplanationViewDelegate, PKPaymentDataProviderDelegate> {
    PKCurrencyAmount * _amount;
    <PKPaymentAutoReloadSetupCompleteViewControllerDelegate> * _delegate;
    bool  _isWaitingOnBalanceUpdate;
    PKPaymentPass * _pass;
    bool  _passUpdated;
    <PKPaymentDataProvider> * _paymentDataProvider;
    long long  _setupMode;
    PKCurrencyAmount * _threshold;
    NSObject<OS_dispatch_source> * _timer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (id)initWithPass:(id)arg1 amount:(id)arg2 threshold:(id)arg3 setupMode:(long long)arg4 paymentDataProvider:(id)arg5 delegate:(id)arg6;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveBalanceUpdate:(id)arg2;
- (void)viewDidLoad;

@end
