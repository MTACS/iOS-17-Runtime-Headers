
@interface HUNaturalLightingSetupViewController : HUItemTableOBWelcomeController <HUConfigurationViewController, HUConfigurationViewControllerFlow, HUNaturalLightingSetupModuleDelegate, HUPreloadableViewController> {
    HMHome * _home;
    HUNaturalLightingSetupModule * _module;
    OBTrayButton * _useWithLightsButton;
    <HUConfigurationViewControllerDelegate> * delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUConfigurationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic) bool isFinalStep;
@property (nonatomic, retain) HUSimpleItemModuleTableViewController *itemTableViewController;
@property (nonatomic, retain) HUNaturalLightingSetupModule *module;
@property (readonly) Class superclass;
@property (nonatomic, retain) OBTrayButton *useWithLightsButton;

+ (id)moduleControllerInHome:(id)arg1;

- (void).cxx_destruct;
- (void)_activateNaturalLighting:(id)arg1;
- (void)_doNotActivateNaturalLighting:(id)arg1;
- (id)_markAllAccessoriesAsOnboarded;
- (void)_updateButtonWithNumberOfLightsSelected:(unsigned long long)arg1;
- (id)delegate;
- (id)home;
- (id)hu_preloadContent;
- (id)initWithHome:(id)arg1;
- (id)module;
- (void)naturalLanguageSetupModule:(id)arg1 didUpdateSelectedItems:(id)arg2;
- (Class)onboardingFlowClass;
- (void)setDelegate:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setModule:(id)arg1;
- (void)setUseWithLightsButton:(id)arg1;
- (id)useWithLightsButton;
- (void)viewDidLoad;

@end
