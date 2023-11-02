
@interface HUHomeHubMigrationSuccessViewController : OBWelcomeController <HUConfigurationViewController> {
    OBBoldTrayButton * _commitButton;
    <HUConfigurationViewControllerDelegate> * _delegate;
}

@property (nonatomic, retain) OBBoldTrayButton *commitButton;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUConfigurationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isFinalStep;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_doneAction:(id)arg1;
- (id)commitButton;
- (id)delegate;
- (Class)onboardingFlowClass;
- (void)setCommitButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;

@end
