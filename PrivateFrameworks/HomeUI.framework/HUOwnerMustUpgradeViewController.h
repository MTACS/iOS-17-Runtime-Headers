
@interface HUOwnerMustUpgradeViewController : OBWelcomeController <HUConfigurationViewController, HUConfigurationViewControllerFlow, HUPreloadableViewController> {
    OBTrayButton * _continueButton;
    <HUConfigurationViewControllerDelegate> * _delegate;
}

@property (nonatomic, retain) OBTrayButton *continueButton;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUConfigurationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isFinalStep;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_continueButtonTapped:(id)arg1;
- (id)continueButton;
- (id)delegate;
- (id)hu_preloadContent;
- (id)initWithUpgradeRequirements:(unsigned long long)arg1;
- (Class)onboardingFlowClass;
- (void)setContinueButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;

@end
