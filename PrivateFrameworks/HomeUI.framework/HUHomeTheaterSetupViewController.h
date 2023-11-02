
@interface HUHomeTheaterSetupViewController : OBWelcomeController <HFItemManagerDelegate, HUConfigurationViewController, HUConfigurationViewControllerFlow, HUHomeTheaterAudioItemModuleOnboardingDelegate, HUItemModuleControllerHosting, HUPreloadableViewController> {
    HMAccessory * _accessory;
    UIImageView * _contentImageView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    NSLayoutConstraint * _contentViewHeightConstraint;
    <HUConfigurationViewControllerDelegate> * _delegate;
    HMHome * _home;
    OBLinkTrayButton * _notNowButton;
    HUSimpleItemModuleTableViewController * _tableViewController;
    HUHomeTheaterAudioItemModule * _tableViewControllerModule;
    NSLayoutConstraint * _tableViewHeightConstraint;
    OBTrayButton * _useHomeTheaterButton;
}

@property (nonatomic, retain) HMAccessory *accessory;
@property (nonatomic, retain) UIImageView *contentImageView;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic, retain) NSLayoutConstraint *contentViewHeightConstraint;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUConfigurationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic) bool isFinalStep;
@property (nonatomic, retain) OBLinkTrayButton *notNowButton;
@property (readonly) Class superclass;
@property (nonatomic, retain) HUSimpleItemModuleTableViewController *tableViewController;
@property (nonatomic) HUHomeTheaterAudioItemModule *tableViewControllerModule;
@property (nonatomic, retain) NSLayoutConstraint *tableViewHeightConstraint;
@property (nonatomic, retain) OBTrayButton *useHomeTheaterButton;

- (void).cxx_destruct;
- (void)_activateHomeTheater:(id)arg1;
- (void)_doNotActivateHomeTheater:(id)arg1;
- (void)_updateHeightConstraints;
- (id)accessory;
- (id)contentImageView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)contentViewHeightConstraint;
- (id)delegate;
- (id)home;
- (void)homeTheaterItemModuleDidChangeSelectedDestination:(id)arg1;
- (id)hu_preloadContent;
- (id)initWithAppleTVAccessory:(id)arg1 inHome:(id)arg2;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentLayout:(long long)arg4;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 contentLayout:(long long)arg4;
- (id)moduleController:(id)arg1 dismissViewControllerForRequest:(id)arg2;
- (id)moduleController:(id)arg1 presentViewControllerForRequest:(id)arg2;
- (id)moduleController:(id)arg1 textFieldForVisibleItem:(id)arg2;
- (id)notNowButton;
- (Class)onboardingFlowClass;
- (void)setAccessory:(id)arg1;
- (void)setContentImageView:(id)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setContentViewHeightConstraint:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setNotNowButton:(id)arg1;
- (void)setTableViewController:(id)arg1;
- (void)setTableViewControllerModule:(id)arg1;
- (void)setTableViewHeightConstraint:(id)arg1;
- (void)setUseHomeTheaterButton:(id)arg1;
- (id)tableViewController;
- (id)tableViewControllerModule;
- (id)tableViewHeightConstraint;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateViewConstraints;
- (id)useHomeTheaterButton;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
