
@interface PKSubcredentialHeroViewController : PKExplanationViewController <PKExplanationViewControllerDelegate, PKExplanationViewDelegate, PKSubcredentialPairingFlowControllerOperation> {
    <PKSubcredentialPairingFlowControllerProtocol> * _flowController;
    PKSubcredentialPairingFlowControllerContext * _provisioningContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <PKSubcredentialPairingFlowControllerProtocol> *flowController;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long operation;
@property (nonatomic, retain) PKSubcredentialPairingFlowControllerContext *provisioningContext;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool suppressFieldDetect;

- (void).cxx_destruct;
- (void)explanationViewControllerDidSelectCancel:(id)arg1;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (void)explanationViewDidSelectSetupLater:(id)arg1;
- (id)flowController;
- (id)initWithFlowController:(id)arg1 context:(id)arg2;
- (unsigned long long)operation;
- (id)provisioningContext;
- (void)setProvisioningContext:(id)arg1;
- (bool)suppressFieldDetect;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
