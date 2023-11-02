
@interface PKNewDevicePasscodeViewController : UIViewController <BFFPasscodeInputViewDelegate, PKPaymentSetupPresentationProtocol> {
    NSString * _constraintFailedInstructions;
    long long  _context;
    NSString * _currentPasscode;
    <PKNewDevicePasscodeViewControllerDelegate> * _delegate;
    PKPasscodeUpgradeFlowController * _flowController;
    long long  _minimumPasscodeLength;
    NSString * _newPasscode;
    unsigned long long  _passcodeInputScreenType;
    unsigned long long  _passcodeInputState;
    BFFPasscodeView * _passcodeView;
    bool  _viewHasAppeared;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKNewDevicePasscodeViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applyPasscode;
- (void)_configureNavigationItemForPasscodeInputScreenType:(unsigned long long)arg1 animated:(bool)arg2;
- (void)_handleTransitionFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2;
- (id)_instructionsForState:(unsigned long long)arg1;
- (void)_nextButtonPressed;
- (unsigned long long)_passcodeInputScreenTypeForUnlockScreenType:(int)arg1;
- (id)_passcodeInputViewForPasscodeInputState:(unsigned long long)arg1 passcodeInputScreenType:(unsigned long long)arg2;
- (id)_passcodeOptionAlertController;
- (void)_setNavigationBarEnabled:(bool)arg1;
- (void)_setPasscodeInputState:(unsigned long long)arg1 forceUpdate:(bool)arg2;
- (id)_titleForState:(unsigned long long)arg1;
- (void)_transitionToNextStateForPasscodeInput:(id)arg1;
- (void)_transitionToPasscodeInputScreenType:(unsigned long long)arg1;
- (void)_updateNextButton;
- (void)_updateNextButtonForPasscode:(id)arg1;
- (id)delegate;
- (id)initWithPasscodeUpgradeFlowController:(id)arg1 minimumPasscodeLength:(long long)arg2 withCurrentPasscode:(id)arg3;
- (void)loadView;
- (unsigned long long)onPresentationRemoveViewControllersAfterMarker;
- (void)passcodeInput:(id)arg1 enteredPasscode:(id)arg2;
- (void)passcodeInput:(id)arg1 tappedFooterButton:(id)arg2;
- (void)passcodeInput:(id)arg1 willChangeContents:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
