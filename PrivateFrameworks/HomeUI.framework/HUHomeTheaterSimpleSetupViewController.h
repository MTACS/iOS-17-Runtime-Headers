
@interface HUHomeTheaterSimpleSetupViewController : HUImageOBWelcomeController <HUConfigurationViewController, HUConfigurationViewControllerFlow> {
    HMAccessory * _accessory;
    OBTrayButton * _confirmButton;
    <HUConfigurationViewControllerDelegate> * _delegate;
    <HMMediaDestination> * _destination;
    HMHome * _home;
    OBLinkTrayButton * _skipButton;
}

@property (nonatomic, retain) HMAccessory *accessory;
@property (nonatomic, retain) OBTrayButton *confirmButton;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUConfigurationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <HMMediaDestination> *destination;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic) bool isFinalStep;
@property (nonatomic, retain) OBLinkTrayButton *skipButton;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_confirm:(id)arg1;
- (void)_skip:(id)arg1;
- (id)accessory;
- (id)confirmButton;
- (id)delegate;
- (id)destination;
- (id)home;
- (id)initWithAppleTVAccessory:(id)arg1 destination:(id)arg2 inHome:(id)arg3;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentImage:(id)arg4;
- (Class)onboardingFlowClass;
- (void)setAccessory:(id)arg1;
- (void)setConfirmButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDestination:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setSkipButton:(id)arg1;
- (id)skipButton;
- (void)viewDidLoad;

@end
