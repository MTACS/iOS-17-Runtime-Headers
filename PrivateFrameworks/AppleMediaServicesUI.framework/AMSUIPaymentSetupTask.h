
@interface AMSUIPaymentSetupTask : AMSTask <AMSUIPaymentSetupViewControllerDelegate> {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    long long  _paymentSetupFeatureState;
    NSString * _referrerIdentifier;
    AMSBinaryPromise * _resultPromise;
    AMSBinaryPromise * _setupControllerPromise;
    UIViewController * _viewController;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) long long paymentSetupFeatureState;
@property (nonatomic, retain) NSString *referrerIdentifier;
@property (nonatomic, retain) AMSBinaryPromise *resultPromise;
@property (nonatomic, retain) AMSBinaryPromise *setupControllerPromise;
@property (nonatomic, retain) UIViewController *viewController;

- (void).cxx_destruct;
- (bool)_didSucceed;
- (id)_fetchPaymentSetupFeature;
- (void)_presentPaymentSetupControllerWithPaymentSetupFeatures:(id)arg1;
- (id)dispatchQueue;
- (id)initWithReferrerIdentifier:(id)arg1 presentingViewController:(id)arg2;
- (long long)paymentSetupFeatureState;
- (void)paymentSetupViewControllerDidDismiss;
- (id)present;
- (id)referrerIdentifier;
- (id)resultPromise;
- (void)setPaymentSetupFeatureState:(long long)arg1;
- (void)setReferrerIdentifier:(id)arg1;
- (void)setResultPromise:(id)arg1;
- (void)setSetupControllerPromise:(id)arg1;
- (void)setViewController:(id)arg1;
- (id)setupControllerPromise;
- (id)viewController;

@end
