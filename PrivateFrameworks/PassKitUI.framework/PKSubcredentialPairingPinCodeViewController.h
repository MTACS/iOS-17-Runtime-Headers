
@interface PKSubcredentialPairingPinCodeViewController : UIViewController <PKExplanationViewDelegate, PKPinCodeFieldDelegate, PKSubcredentialPairingFlowControllerOperation> {
    <PKSubcredentialPairingFlowControllerProtocol> * _flowController;
    UILabel * _helpLabel;
    bool  _isAdvancing;
    struct CGSize { 
        double width; 
        double height; 
    }  _keyboardSize;
    UIBarButtonItem * _nextButton;
    PKPinCodeField * _pinCodeView;
    PKSubcredentialPairingFlowControllerContext * _provisioningContext;
    PKExplanationView * explanationView;
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
- (void)cancelButtonPressed;
- (void)explanationViewDidUpdateLayout:(id)arg1;
- (id)flowController;
- (id)initWithFlowController:(id)arg1 context:(id)arg2;
- (id)localizedIssuerName;
- (void)nextButtonPressed;
- (unsigned long long)operation;
- (void)pinCodeTextFieldWasUpdated:(id)arg1 isComplete:(bool)arg2;
- (bool)pkui_disablesAutomaticDismissalUponEnteringBackground;
- (id)provisioningContext;
- (void)resetPinCode;
- (void)setProvisioningContext:(id)arg1;
- (bool)suppressFieldDetect;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
