
@interface WDMedicalIDViewController : UITableViewController <HKMedicalIDViewControllerDelegate, WDUserActivityResponder> {
    UIAlertController * _consolidationAlertController;
    HKMedicalIDViewController * _currentMedicalIDViewController;
    UIStackView * _introStackView;
    UIScrollView * _introView;
    bool  _loadingMedicalID;
    int  _medicalIDChangedToken;
    _HKMedicalIDData * _medicalIDData;
    HKNavigationController * _medicalIDEditor;
    bool  _medicalIDIsNew;
    WDProfile * _profile;
    bool  _shouldReloadMedicalIDData;
    bool  _shouldShowConsolidationAlert;
    SOSContactsManager * _sosContactsManager;
}

@property (nonatomic) UIAlertController *consolidationAlertController;
@property (nonatomic) HKMedicalIDViewController *currentMedicalIDViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WDProfile *profile;
@property (nonatomic) bool shouldReloadMedicalIDData;
@property (nonatomic, retain) SOSContactsManager *sosContactsManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_assertViewStateWhenViewDidAppear;
- (void)_checkForEmergencyContactConsolidationNeeds;
- (void)_consolidateSOSContactsWithMedicalIDContacts;
- (id)_createMedicalIDDataFromMeCardAndHealthKit;
- (void)_createMedicalIDTapped:(id)arg1;
- (void)_dismissMedicalIDEditor;
- (void)_dismissMedicalIDView;
- (void)_handleFetchedMedicalIDData:(id)arg1;
- (void)_loadMedicalIDDataIfNecessaryWithCompletion:(id /* block */)arg1;
- (void)_organDonationSignupButtonTapped:(id)arg1;
- (void)_pushAndSetCurrentMedicalIDViewController:(id)arg1;
- (void)_showContactsConsolidationAlert;
- (void)_showMedicalIDEditor;
- (void)_showMedicalIDView;
- (void)_updateActivityForViewDidAppear;
- (void)applyChangeActivity:(id)arg1;
- (id)applyTransitionActivity:(id)arg1;
- (id)consolidationAlertController;
- (id)currentMedicalIDViewController;
- (void)dealloc;
- (id)initWithProfile:(id)arg1;
- (void)medicalIDViewControllerDidAppear:(id)arg1;
- (void)medicalIDViewControllerDidCancel:(id)arg1;
- (void)medicalIDViewControllerDidDelete:(id)arg1;
- (void)medicalIDViewControllerDidSave:(id)arg1;
- (id)medicalIDViewControllerInEditMode:(bool)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)preferredStatusBarStyle;
- (id)profile;
- (void)setConsolidationAlertController:(id)arg1;
- (void)setCurrentMedicalIDViewController:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setShouldReloadMedicalIDData:(bool)arg1;
- (void)setSosContactsManager:(id)arg1;
- (bool)shouldReloadMedicalIDData;
- (id)sosContactsManager;
- (unsigned long long)supportedInterfaceOrientations;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)traitCollectionDidChange:(id)arg1;
- (id)uniqueUserActivityType;
- (void)updateNavigationbar;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
