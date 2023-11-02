
@interface DSReadOnlyResourceSharingController : DSTableWelcomeController <DSController, DSReadOnlyResourceSharingDetailDelegate> {
    <DSNavigationDelegate> * _delegate;
    DSSharingPermissions * _permissions;
    unsigned long long  _scope;
    NSMutableSet * _selectedPeople;
    NSMutableSet * _selectedTypes;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DSNavigationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) DSSharingPermissions *permissions;
@property (nonatomic) unsigned long long scope;
@property (nonatomic, retain) NSMutableSet *selectedPeople;
@property (nonatomic, retain) NSMutableSet *selectedTypes;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_pushDetailPaneForSharingPeople:(id)arg1;
- (void)_pushDetailPaneForSharingTypes:(id)arg1;
- (void)_reviewAllSharing;
- (void)_updateButton;
- (id)delegate;
- (void)filterContentForSearchText:(id)arg1 category:(long long)arg2;
- (id)init;
- (void)learnMorePressedForSharingType:(id)arg1;
- (id)permissions;
- (void)reloadTableViewData;
- (void)reviewReadOnlySharingCompleted;
- (void)reviewSelectedSharing;
- (unsigned long long)scope;
- (void)searchBar:(id)arg1 selectedScopeButtonIndexDidChange:(long long)arg2;
- (id)selectedPeople;
- (id)selectedTypes;
- (void)setDelegate:(id)arg1;
- (void)setPermissions:(id)arg1;
- (void)setScope:(unsigned long long)arg1;
- (void)setSelectedPeople:(id)arg1;
- (void)setSelectedTypes:(id)arg1;
- (bool)shouldShow;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
