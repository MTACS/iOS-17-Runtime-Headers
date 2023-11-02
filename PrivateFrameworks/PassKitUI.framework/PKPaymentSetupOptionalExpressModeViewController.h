
@interface PKPaymentSetupOptionalExpressModeViewController : PKExplanationViewController <PKLoadingUIProviding> {
    <PKPaymentSetupOptionalExpressModeViewControllerFlowDelegate> * _flowItemDelegate;
    PKSecureElementPass * _pass;
    PKPaymentProvisioningController * _provisioningController;
    PKPaymentProvisioningTracker * _provisioningTracker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <PKPaymentSetupOptionalExpressModeViewControllerFlowDelegate> *flowItemDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_snapshotSize;
- (void)_terminateSetupFlow;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (void)explanationViewDidSelectSetupLater:(id)arg1;
- (id)flowItemDelegate;
- (id)initWithProvisioningController:(id)arg1 secureElementPass:(id)arg2 context:(long long)arg3;
- (void)loadView;
- (void)proceedToNextScreen;
- (void)setFlowItemDelegate:(id)arg1;
- (void)showLoadingUI:(bool)arg1 animated:(bool)arg2;

@end
