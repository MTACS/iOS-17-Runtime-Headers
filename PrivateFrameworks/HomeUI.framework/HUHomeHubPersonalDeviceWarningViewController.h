
@interface HUHomeHubPersonalDeviceWarningViewController : HUItemTableOBWelcomeController <HFItemManagerDelegate, HUConfigurationViewController, HUConfigurationViewControllerFlow> {
    UIBarButtonItem * _cancelButton;
    NSString * _captionString;
    OBBoldTrayButton * _commitButton;
    NSString * _confirmationString;
    <HUConfigurationViewControllerDelegate> * _delegate;
    bool  _isFinalStep;
}

@property (nonatomic, retain) UIBarButtonItem *cancelButton;
@property (nonatomic, retain) NSString *captionString;
@property (nonatomic, retain) OBBoldTrayButton *commitButton;
@property (nonatomic, retain) NSString *confirmationString;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUConfigurationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isFinalStep;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelFlow:(id)arg1;
- (void)_commitOrContinue;
- (id)_commitOrContinueButtonTitle;
- (void)_continueTapped:(id)arg1;
- (void)_presentConfirmationAlert;
- (id)cancelButton;
- (id)captionString;
- (id)commitButton;
- (id)confirmationString;
- (id)delegate;
- (id)initWithDevices:(id)arg1 homes:(id)arg2;
- (bool)isFinalStep;
- (Class)onboardingFlowClass;
- (void)setCancelButton:(id)arg1;
- (void)setCaptionString:(id)arg1;
- (void)setCommitButton:(id)arg1;
- (void)setConfirmationString:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsFinalStep:(bool)arg1;
- (void)viewDidLoad;

@end
