
@interface HUAnnounceSetupViewController : HUItemTableOBWelcomeController <HUConfigurationViewController, HUConfigurationViewControllerFlow, HUPreloadableViewController> {
    unsigned long long  _step;
    <HUConfigurationViewControllerDelegate> * delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUConfigurationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isFinalStep;
@property (nonatomic, readonly) unsigned long long step;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)continuePressed:(id)arg1;
- (id)delegate;
- (id)initWithHome:(id)arg1 step:(unsigned long long)arg2;
- (Class)onboardingFlowClass;
- (void)setDelegate:(id)arg1;
- (unsigned long long)step;
- (void)viewDidLoad;

@end
