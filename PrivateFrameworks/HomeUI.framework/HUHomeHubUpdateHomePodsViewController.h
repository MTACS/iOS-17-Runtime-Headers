
@interface HUHomeHubUpdateHomePodsViewController : HUItemTableOBWelcomeController <HFItemManagerDelegate, HUConfigurationViewController, HUConfigurationViewControllerFlow, HUPreloadableViewController, HUSoftwareUpdateUIPresentationDelegate> {
    UIBarButtonItem * _cancelButton;
    OBTrayButton * _continueButton;
    <HUConfigurationViewControllerDelegate> * _delegate;
    NSArray * _homePods;
    NSArray * _homes;
    bool  _ranIntoFetchError;
    NAFuture * _softwareUpdateFetchFuture;
    UIActivityIndicatorView * _spinner;
    bool  _userTappedUpdate;
}

@property (nonatomic, retain) UIBarButtonItem *cancelButton;
@property (nonatomic, retain) OBTrayButton *continueButton;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUConfigurationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *homePods;
@property (nonatomic, copy) NSArray *homes;
@property (nonatomic) bool isFinalStep;
@property (nonatomic) bool ranIntoFetchError;
@property (nonatomic, retain) NAFuture *softwareUpdateFetchFuture;
@property (nonatomic, retain) UIActivityIndicatorView *spinner;
@property (readonly) Class superclass;
@property (nonatomic) bool userTappedUpdate;

- (void).cxx_destruct;
- (bool)_allHomePodsHaveValidSoftwareUpdatesOrSupportsHH2;
- (void)_cancelButtonPressed:(id)arg1;
- (void)_continueButtonPressed:(id)arg1;
- (void)_dismiss;
- (void)_fetchSoftwareUpdates;
- (void)_hideSpinner;
- (id)_homePodsDownloadingSoftwareUpdate;
- (id)_homePodsReadyToInstallSoftwareUpdate;
- (bool)_noHomePodsWithAvailableUpdates;
- (void)_presentErrorWithMessage:(id)arg1;
- (void)_presentGenericError;
- (void)_showSpinner;
- (void)_startUpdate;
- (id)cancelButton;
- (id)continueButton;
- (id)delegate;
- (id)homePods;
- (id)homes;
- (id)hu_preloadContent;
- (id)initWithOwnedHomes:(id)arg1 homePodsToUpdate:(id)arg2;
- (Class)onboardingFlowClass;
- (bool)ranIntoFetchError;
- (void)setCancelButton:(id)arg1;
- (void)setContinueButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHomePods:(id)arg1;
- (void)setHomes:(id)arg1;
- (void)setRanIntoFetchError:(bool)arg1;
- (void)setSoftwareUpdateFetchFuture:(id)arg1;
- (void)setSpinner:(id)arg1;
- (void)setUserTappedUpdate:(bool)arg1;
- (id)softwareUpdateFetchFuture;
- (id)softwareUpdateUIManager:(id)arg1 dismissViewController:(id)arg2;
- (id)softwareUpdateUIManager:(id)arg1 presentViewController:(id)arg2;
- (id)spinner;
- (bool)userTappedUpdate;
- (void)viewDidLoad;

@end
