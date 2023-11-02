
@interface PKPaymentPassMakeDefaultViewController : PKExplanationViewController <PKLoadingUIProviding> {
    <PKPaymentPassMakeDefaultViewControllerDelegate> * _flowItemDelegate;
    PKSecureElementPass * _pass;
    PKPaymentProvisioningController * _provisioningController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <PKPaymentPassMakeDefaultViewControllerDelegate> *flowItemDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_makePaymentPassDefault;
- (struct CGSize { double x1; double x2; })_snapshotSize;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (void)explanationViewDidSelectSetupLater:(id)arg1;
- (id)flowItemDelegate;
- (id)initWithProvisioningController:(id)arg1 paymentPass:(id)arg2 context:(long long)arg3;
- (void)loadView;
- (void)proceedToNextScreen;
- (void)setFlowItemDelegate:(id)arg1;
- (void)showLoadingUI:(bool)arg1 animated:(bool)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;

@end
