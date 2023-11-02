
@interface PKSubcredentialPairingErrorViewController : UIViewController <PKExplanationViewDelegate, PKSubcredentialPairingFlowControllerOperation> {
    PKExplanationView * _explanationView;
    <PKSubcredentialPairingFlowControllerProtocol> * _flowController;
    bool  _isAdvancing;
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
- (id)_error;
- (bool)_translateErrorCode:(long long)arg1 toTitleText:(id*)arg2 bodyText:(id*)arg3;
- (void)cancelButtonPressed;
- (void)configureExplanationViewWithError:(id)arg1;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (id)flowController;
- (id)initWithFlowController:(id)arg1 context:(id)arg2;
- (unsigned long long)operation;
- (id)provisioningContext;
- (void)setProvisioningContext:(id)arg1;
- (bool)suppressFieldDetect;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
