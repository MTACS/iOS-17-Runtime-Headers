
@interface HUSwitchHomesWelcomeViewController : HUImageOBWelcomeController <HUConfigurationViewController, HUConfigurationViewControllerFlow, HUPreloadableViewController> {
    OBLinkTrayButton * _changeButton;
    OBTrayButton * _continueButton;
    <HUConfigurationViewControllerDelegate> * _delegate;
    HMHome * _home;
}

@property (nonatomic, retain) OBLinkTrayButton *changeButton;
@property (nonatomic, retain) OBTrayButton *continueButton;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUConfigurationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic) bool isFinalStep;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_changeButtonTapped:(id)arg1;
- (void)_continueButtonTapped:(id)arg1;
- (id)changeButton;
- (id)continueButton;
- (id)delegate;
- (id)home;
- (id)hu_preloadContent;
- (id)initWithHome:(id)arg1;
- (Class)onboardingFlowClass;
- (void)setChangeButton:(id)arg1;
- (void)setContinueButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHome:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
