
@interface HUAccessoryFirmwareUpdateSetupViewController : HUImageOBWelcomeController <HUConfigurationViewController, HUConfigurationViewControllerFlow> {
    <HUConfigurationViewControllerDelegate> * _delegate;
    OBTrayButton * _enableAutomaticUpdatesButton;
    HMHome * _home;
    OBLinkTrayButton * _notNowButton;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUConfigurationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) OBTrayButton *enableAutomaticUpdatesButton;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic) bool isFinalStep;
@property (nonatomic, retain) OBLinkTrayButton *notNowButton;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_doNotEnableAutomaticUpdates:(id)arg1;
- (void)_enableAutomaticUpdates:(id)arg1;
- (id)delegate;
- (id)enableAutomaticUpdatesButton;
- (id)home;
- (id)initWithHome:(id)arg1;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentImage:(id)arg4;
- (id)notNowButton;
- (Class)onboardingFlowClass;
- (void)setDelegate:(id)arg1;
- (void)setEnableAutomaticUpdatesButton:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setNotNowButton:(id)arg1;
- (void)viewDidLoad;

@end
