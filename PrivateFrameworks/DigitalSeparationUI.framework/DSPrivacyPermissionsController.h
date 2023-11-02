
@interface DSPrivacyPermissionsController : DSTableWelcomeController <DSController, DSPrivacyPermissionsDelegate> {
    DSAppSharing * _appSharing;
    NSArray * _apps;
    <DSNavigationDelegate> * _delegate;
    NSArray * _filteredApps;
    NSArray * _filteredSensors;
    bool  _isFiltered;
    unsigned long long  _scope;
    NSMutableSet * _selectedApps;
    NSMutableSet * _selectedSensors;
    NSArray * _sensors;
}

@property (nonatomic, retain) DSAppSharing *appSharing;
@property (nonatomic, retain) NSArray *apps;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DSNavigationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *filteredApps;
@property (nonatomic, retain) NSArray *filteredSensors;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isFiltered;
@property (nonatomic) unsigned long long scope;
@property (nonatomic, retain) NSMutableSet *selectedApps;
@property (nonatomic, retain) NSMutableSet *selectedSensors;
@property (nonatomic, retain) NSArray *sensors;
@property (readonly) Class superclass;
@property (nonatomic, retain) DSTableView *tableView;

- (void).cxx_destruct;
- (void)_pushNextPane;
- (void)_updateButton;
- (void)_updateTitle;
- (void)addUnsharedPermissions:(id)arg1 andApps:(id)arg2;
- (id)appSharing;
- (id)apps;
- (void)collectPermissionsByType;
- (id)delegate;
- (void)filterContentForSearchText:(id)arg1 category:(long long)arg2;
- (id)filteredApps;
- (id)filteredSensors;
- (void)handleResetErrors:(id)arg1 pushNextPane:(bool)arg2;
- (id)init;
- (bool)isFiltered;
- (void)reloadData;
- (void)resetAllPermissions;
- (void)resetSelectedPermissions;
- (void)returnFromDetailAndDeleteApp:(id)arg1;
- (void)returnFromDetailAndResetPermissionForSelectedApps:(id)arg1 permission:(id)arg2;
- (void)returnFromDetailAndResetSelectedPermissions:(id)arg1 forApp:(id)arg2;
- (void)returnFromDetailAndStopAllSharingForPermission:(id)arg1;
- (unsigned long long)scope;
- (void)searchBar:(id)arg1 selectedScopeButtonIndexDidChange:(long long)arg2;
- (id)selectedApps;
- (id)selectedSensors;
- (id)sensors;
- (void)setAppSharing:(id)arg1;
- (void)setApps:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFilteredApps:(id)arg1;
- (void)setFilteredSensors:(id)arg1;
- (void)setIsFiltered:(bool)arg1;
- (void)setScope:(unsigned long long)arg1;
- (void)setSelectedApps:(id)arg1;
- (void)setSelectedSensors:(id)arg1;
- (void)setSensors:(id)arg1;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
