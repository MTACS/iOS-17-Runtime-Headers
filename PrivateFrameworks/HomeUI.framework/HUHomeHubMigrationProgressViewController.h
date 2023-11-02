
@interface HUHomeHubMigrationProgressViewController : HUImageOBWelcomeController <HFHomeManagerObserver, HUConfigurationViewController, HUConfigurationViewControllerFlow> {
    <HUConfigurationViewControllerDelegate> * _delegate;
    UIActivityIndicatorView * _spinner;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUConfigurationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isFinalStep;
@property (nonatomic, retain) UIActivityIndicatorView *spinner;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cleanUp;
- (void)_handleFailedMigration:(id)arg1;
- (void)_handleSuccessfulMigration;
- (bool)_limitToNonScrollingContentHeight;
- (void)_startHH2Upgrade;
- (id)delegate;
- (void)homeManager:(id)arg1 didUpdateHH2MigrationInProgressState:(bool)arg2;
- (void)homeManager:(id)arg1 didUpdateHH2State:(bool)arg2;
- (id)initWithOwnedHomes:(id)arg1;
- (Class)onboardingFlowClass;
- (void)setDelegate:(id)arg1;
- (void)setSpinner:(id)arg1;
- (id)spinner;
- (void)viewDidLoad;

@end
