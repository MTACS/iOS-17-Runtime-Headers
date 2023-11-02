
@interface HUHomeHubSharedHomeWarningViewController : HUItemTableOBWelcomeController <HFItemManagerDelegate, HUConfigurationViewController, HUConfigurationViewControllerFlow> {
    UIBarButtonItem * _cancelButton;
    OBBoldTrayButton * _commitButton;
    <HUConfigurationViewControllerDelegate> * _delegate;
    NSSet * _homes;
    bool  _isFinalStep;
}

@property (nonatomic, retain) UIBarButtonItem *cancelButton;
@property (nonatomic, retain) OBBoldTrayButton *commitButton;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUConfigurationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSSet *homes;
@property (nonatomic) bool isFinalStep;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelFlow:(id)arg1;
- (void)_commitOrContinue;
- (id)_commitOrContinueButtonTitle;
- (void)_continueTapped:(id)arg1;
- (void)_presentConfirmationAlert;
- (id)cancelButton;
- (id)commitButton;
- (id)delegate;
- (id)homes;
- (id)initWithSharedHomes:(id)arg1;
- (bool)isFinalStep;
- (Class)onboardingFlowClass;
- (void)setCancelButton:(id)arg1;
- (void)setCommitButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHomes:(id)arg1;
- (void)setIsFinalStep:(bool)arg1;
- (void)viewDidLoad;

@end
