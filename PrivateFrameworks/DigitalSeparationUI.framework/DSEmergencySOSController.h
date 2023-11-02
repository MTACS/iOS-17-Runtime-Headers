
@interface DSEmergencySOSController : DSTableWelcomeController <DSController, HKMedicalIDEmergencyContactFlowDelegate, UITableViewDataSource, UITableViewDelegate> {
    DSAppSharing * _appSharing;
    HKMedicalIDEmergencyContactFlow * _contactFlow;
    <DSNavigationDelegate> * _delegate;
    NSArray * _emergencyContacts;
    bool  _hasRetriedEmergencyContactFetch;
    HKHealthStore * _healthStore;
    NSString * _kappaApprovedAppID;
    _HKMedicalIDData * _medicalIDData;
    HKMedicalIDStore * _medicalIDStore;
    _HKEmergencyContact * _selectedEmergencyContact;
}

@property (nonatomic, retain) DSAppSharing *appSharing;
@property (nonatomic, retain) HKMedicalIDEmergencyContactFlow *contactFlow;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DSNavigationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *emergencyContacts;
@property bool hasRetriedEmergencyContactFetch;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HKHealthStore *healthStore;
@property (nonatomic, retain) NSString *kappaApprovedAppID;
@property (nonatomic, retain) _HKMedicalIDData *medicalIDData;
@property (nonatomic, retain) HKMedicalIDStore *medicalIDStore;
@property (nonatomic, retain) _HKEmergencyContact *selectedEmergencyContact;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_showMaxContactsAlert;
- (id)appSharing;
- (void)chooseNewEmergencyContact;
- (id)contactFlow;
- (id)delegate;
- (void)emergencyContactFlow:(id)arg1 didSelectContact:(id)arg2;
- (void)emergencyContactFlowDidCancel:(id)arg1;
- (id)emergencyContacts;
- (void)gatherEmergencyContacts;
- (bool)hasAppWithKappaApproved;
- (bool)hasRetriedEmergencyContactFetch;
- (id)healthStore;
- (id)init;
- (id)kappaApprovedAppID;
- (bool)maybeRetryDueToError:(id)arg1 withReason:(id)arg2;
- (id)medicalIDData;
- (id)medicalIDStore;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)removeEmergencyContact:(id)arg1;
- (void)revokeKappaPermission;
- (id)selectedEmergencyContact;
- (void)setAppSharing:(id)arg1;
- (void)setContactFlow:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEmergencyContacts:(id)arg1;
- (void)setHasRetriedEmergencyContactFetch:(bool)arg1;
- (void)setHealthStore:(id)arg1;
- (void)setKappaApprovedAppID:(id)arg1;
- (void)setMedicalIDData:(id)arg1;
- (void)setMedicalIDStore:(id)arg1;
- (void)setSelectedEmergencyContact:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)updateKappaBundleID;
- (void)viewDidLoad;

@end
