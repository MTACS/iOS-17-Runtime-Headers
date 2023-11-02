
@interface PKAccountPassActivationResultViewController : PKExplanationViewController <PKAccountFlowControllerDelegate> {
    PKAccountFlowController * _accountController;
    UINotificationFeedbackGenerator * _cardAddedFeedbackGenerator;
    <PKPaymentSetupViewControllerDelegate> * _delegate;
    bool  _didAddToAmp;
    bool  _didMakeAccountPassDefault;
    unsigned long long  _featureIdentifier;
    CLInUseAssertion * _inUseAssertion;
    CLLocationManager * _locationManager;
    UIViewController * _nextViewController;
    long long  _setupContext;
    bool  _showingLoadingIndicator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didAddToAmp;
@property (nonatomic) bool didMakeAccountPassDefault;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool showingLoadingIndicator;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleNextStep;
- (id)_localizedStringKeyForPerformedOperationsAndMadeDefault:(bool)arg1;
- (void)_presentDisplayableError:(id)arg1;
- (void)_presentViewController:(id)arg1;
- (id)_setupLaterBodyString;
- (void)_showActivationSpinner:(bool)arg1;
- (void)_terminateSetupFlow;
- (void)_updateForLoading;
- (void)_updateForMadeDefault;
- (void)_updateForSetupLater;
- (void)_updateUI;
- (bool)_willPerformProvisioningActions;
- (void)accountFlowController:(id)arg1 requestsPresentationOfDisplayableError:(id)arg2;
- (void)accountFlowController:(id)arg1 requestsPresentationOfViewController:(id)arg2;
- (void)dealloc;
- (bool)didAddToAmp;
- (bool)didMakeAccountPassDefault;
- (id)initWithAccountFlowController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3;
- (void)loadView;
- (void)setDidAddToAmp:(bool)arg1;
- (void)setDidMakeAccountPassDefault:(bool)arg1;
- (void)setShowingLoadingIndicator:(bool)arg1;
- (bool)showingLoadingIndicator;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
