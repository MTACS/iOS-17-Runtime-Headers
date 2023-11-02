
@interface HUHomePersonalIdentityDeviceConfigurationViewController : OBTableWelcomeController <HUConfigurationViewController, HUConfigurationViewControllerFlow, HUPreloadableViewController, UITableViewDataSource, UITableViewDelegate> {
    OBLinkTrayButton * _cancelButton;
    OBTrayButton * _changeLanguageButton;
    <HUConfigurationViewControllerDelegate> * _delegate;
    NSLayoutConstraint * _heightAnchor;
    NSArray * _mediaProfilesAndLanguageInfoList;
    long long  _selectedLanguageIndex;
}

@property (nonatomic, retain) OBLinkTrayButton *cancelButton;
@property (nonatomic, retain) OBTrayButton *changeLanguageButton;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUConfigurationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSLayoutConstraint *heightAnchor;
@property (nonatomic) bool isFinalStep;
@property (nonatomic, retain) NSArray *mediaProfilesAndLanguageInfoList;
@property (nonatomic) long long selectedLanguageIndex;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelLanguageChange;
- (void)_changeLanguage;
- (id)_configureTitleDescriptionContentViewForCell:(id)arg1;
- (id)cancelButton;
- (id)changeLanguageButton;
- (id)delegate;
- (id)heightAnchor;
- (id)hu_preloadContent;
- (id)initWithMediaProfileAndLanguageInfo:(id)arg1;
- (void)loadView;
- (id)mediaProfilesAndLanguageInfoList;
- (Class)onboardingFlowClass;
- (long long)selectedLanguageIndex;
- (void)setCancelButton:(id)arg1;
- (void)setChangeLanguageButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHeightAnchor:(id)arg1;
- (void)setMediaProfilesAndLanguageInfoList:(id)arg1;
- (void)setSelectedLanguageIndex:(long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
