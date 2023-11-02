
@interface PKPaymentSetupBankAppDisambiguationViewController : PKPaymentSetupOptionsViewController <PKLoadingUIProviding, PKPaymentSetupActivitySpinnerProtocol, PKPaymentSetupBankAppDisambiguationControllerDelegate> {
    <PKPaymentSetupBankAppDisambiguationViewControllerFlowDelegate> * _flowDelegate;
    id /* block */  _loadingCompletion;
    PKPaymentSetupProduct * _paymentSetupProduct;
    PKPaymentSetupBankAppDisambiguationController * _sectionController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <PKPaymentSetupBankAppDisambiguationViewControllerFlowDelegate> *flowDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)didSelectCameraWithCompletion:(id /* block */)arg1;
- (void)didSelectInAppWithCompletion:(id /* block */)arg1;
- (id)flowDelegate;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 delegate:(id)arg3 paymentSetupProduct:(id)arg4;
- (void)setFlowDelegate:(id)arg1;
- (void)showLoadingUI:(bool)arg1 animated:(bool)arg2;
- (void)viewDidLoad;

@end
