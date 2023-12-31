
@interface PKPeerPaymentIdentityVerificationExplanationViewController : PKExplanationViewController <PKExplanationViewDelegate, PKPeerPaymentAccountResolutionControllerDelegate> {
    PKPeerPaymentIdentityVerificationController * _controller;
    unsigned long long  _identityVerificaionError;
    <PKPaymentSetupViewControllerDelegate> * _setupDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_bodyButtonText;
- (id)_bodyText;
- (void)_cancel;
- (void)_processNextViewController;
- (struct CGSize { double x1; double x2; })_snapshotSize;
- (void)_terminateFlow;
- (id)_titleText;
- (void)explanationViewDidSelectBodyButton:(id)arg1;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (void)explanationViewDidSelectSetupLater:(id)arg1;
- (id)initWithContext:(long long)arg1 setupDelegate:(id)arg2 identityVerificationController:(id)arg3;
- (void)loadView;
- (void)peerPaymentAccountResolutionController:(id)arg1 requestsDismissCurrentViewControllerAnimated:(bool)arg2;
- (void)peerPaymentAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(bool)arg3;

@end
