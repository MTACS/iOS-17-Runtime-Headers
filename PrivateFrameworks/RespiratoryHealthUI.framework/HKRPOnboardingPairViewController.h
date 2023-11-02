
@interface HKRPOnboardingPairViewController : BPSWelcomeOptinViewController <BPSMiniFlowStepController> {
    RespiratoryHealthHeroView * _heroView;
    HKRPOxygenSaturationOnboardingManager * _onboardingManager;
    HKRPOxygenSaturationSettings * _settings;
    <BPSSetupMiniFlowControllerDelegate> * miniFlowDelegate;
}

@property (nonatomic) <BPSSetupMiniFlowControllerDelegate> *miniFlowDelegate;
@property (nonatomic, readonly) HKRPOxygenSaturationOnboardingManager *onboardingManager;
@property (nonatomic, readonly) HKRPOxygenSaturationSettings *settings;

- (void).cxx_destruct;
- (id)_localizedStringForKey:(id)arg1;
- (void)_makeHeroView;
- (void)_onboardWithCompletion:(id /* block */)arg1;
- (void)_presentOnboardingError:(id)arg1 completion:(id /* block */)arg2;
- (void)alternateButtonPressed:(id)arg1;
- (id)alternateButtonTitle;
- (id)captionText;
- (id)detailString;
- (id)initWithSettings:(id)arg1 onboardingManager:(id)arg2;
- (id)miniFlowDelegate;
- (id)onboardingManager;
- (void)setMiniFlowDelegate:(id)arg1;
- (id)settings;
- (void)suggestedButtonPressed:(id)arg1;
- (id)suggestedButtonTitle;
- (id)titleString;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
