
@interface PKPeerPaymentAddAssociatedAccountIdentityVerificationExplanationViewController : PKExplanationViewController <PKExplanationViewControllerDelegate, PKExplanationViewDelegate> {
    id /* block */  _cancelHandler;
    id /* block */  _continueHandler;
    PKPeerPaymentSetupFlowController * _controller;
}

@property (nonatomic, copy) id /* block */ cancelHandler;
@property (nonatomic, copy) id /* block */ continueHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)cancelHandler;
- (id /* block */)continueHandler;
- (void)explanationViewControllerDidSelectCancel:(id)arg1;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (id)initWithPeerPaymentSetupFlowController:(id)arg1;
- (void)setCancelHandler:(id /* block */)arg1;
- (void)setContinueHandler:(id /* block */)arg1;
- (void)viewDidLoad;

@end
