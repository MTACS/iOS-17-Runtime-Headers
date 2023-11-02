
@interface PKPeerPaymentPassActivationViewController : PKExplanationViewController <PKExplanationViewControllerDelegate, PKExplanationViewDelegate, PKPeerPaymentSetupFlowControllerDataSource> {
    PKPeerPaymentSetupFlowHeroView * _heroView;
    CLInUseAssertion * _inUseAssertion;
    unsigned long long  _operations;
    PKPeerPaymentSetupFlowController * _peerPaymentSetupFlowController;
    <PKPaymentSetupViewControllerDelegate> * _setupDelegate;
    bool  _shouldShowAddDebitCardViewController;
    unsigned long long  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginSetup;
- (id)_bodyStringForState;
- (void)_handleActivatedState;
- (void)_invalidateCLInUseAssertion;
- (void)_presentActivationFailedErrorAlert;
- (void)_presentDisplayableError:(id)arg1;
- (void)_setState:(unsigned long long)arg1;
- (bool)_shouldShowAddDebitCardViewController;
- (void)_showSpinner:(bool)arg1;
- (void)_terminateSetupFlow;
- (id)_titleStringForState;
- (void)dealloc;
- (void)explanationViewControllerDidSelectCancel:(id)arg1;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (void)explanationViewDidSelectSetupLater:(id)arg1;
- (id)initWithPeerPaymentSetupFlowController:(id)arg1;
- (bool)shouldPushTerms;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
