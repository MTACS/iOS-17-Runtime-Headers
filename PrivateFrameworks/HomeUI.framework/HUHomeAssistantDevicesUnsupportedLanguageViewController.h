
@interface HUHomeAssistantDevicesUnsupportedLanguageViewController : OBTableWelcomeController <HUConfigurationViewController, HUConfigurationViewControllerFlow, HUPreloadableViewController, UITableViewDataSource, UITableViewDelegate> {
    OBTrayButton * _continueButton;
    <HUConfigurationViewControllerDelegate> * _delegate;
    NSLayoutConstraint * _heightAnchor;
    NSArray * _homeAssistantDevicesHavingLanguageMismatch;
}

@property (nonatomic, retain) OBTrayButton *continueButton;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUConfigurationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSLayoutConstraint *heightAnchor;
@property (nonatomic, retain) NSArray *homeAssistantDevicesHavingLanguageMismatch;
@property (nonatomic) bool isFinalStep;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_continue;
- (id)continueButton;
- (id)delegate;
- (id)heightAnchor;
- (id)homeAssistantDevicesHavingLanguageMismatch;
- (id)hu_preloadContent;
- (id)initWithHomeAssistantDevicesHavingLanguageMismatch:(id)arg1 home:(id)arg2;
- (void)loadView;
- (Class)onboardingFlowClass;
- (void)setContinueButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHeightAnchor:(id)arg1;
- (void)setHomeAssistantDevicesHavingLanguageMismatch:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
