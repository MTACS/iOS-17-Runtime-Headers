
@interface PKPaymentAddDebitCardViewController : PKExplanationViewController <PKExplanationViewDelegate, PKPaymentSetupDelegate, PKPeerPaymentSetupFlowControllerDataSource> {
    NSString * _bodyText;
    PKPeerPaymentSetupFlowController * _peerPaymentSetupFlowController;
    <PKPaymentSetupViewControllerDelegate> * _setupDelegate;
    bool  _showDebitCardHeroView;
    NSString * _titleText;
}

@property (nonatomic, copy) NSString *bodyText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool showDebitCardHeroView;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *titleText;

- (void).cxx_destruct;
- (void)_handleProvisioningError:(id)arg1;
- (id)_paymentSetupNavigationControllerForProvisioningController:(id)arg1;
- (void)_presentPaymentSetupController;
- (void)_setupLater;
- (void)_terminateSetupFlow;
- (id)bodyText;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (void)explanationViewDidSelectSetupLater:(id)arg1;
- (id)initWithPeerPaymentSetupFlowController:(id)arg1;
- (void)paymentSetupDidFinish:(id)arg1;
- (void)setBodyText:(id)arg1;
- (void)setShowDebitCardHeroView:(bool)arg1;
- (void)setTitleText:(id)arg1;
- (bool)shouldPushTerms;
- (bool)showDebitCardHeroView;
- (id)titleText;
- (void)viewDidLoad;

@end
