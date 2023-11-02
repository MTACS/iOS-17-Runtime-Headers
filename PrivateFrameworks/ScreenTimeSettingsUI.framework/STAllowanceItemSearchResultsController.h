
@interface STAllowanceItemSearchResultsController : UITableViewController <UISearchResultsUpdating> {
    NSArray * _allowanceItemSpecifiers;
    NSArray * _filteredAllowanceItemSpecifiers;
    bool  _hasNewSelection;
    NSOrderedSet * _initalBundleIdentifiers;
    NSOrderedSet * _initialWebDomains;
    NSMutableOrderedSet * _selectedBundleIdentifiers;
    NSMutableOrderedSet * _selectedWebDomains;
}

@property (copy) NSArray *allowanceItemSpecifiers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) NSArray *filteredAllowanceItemSpecifiers;
@property bool hasNewSelection;
@property (readonly) unsigned long long hash;
@property (copy) NSOrderedSet *initalBundleIdentifiers;
@property (copy) NSOrderedSet *initialWebDomains;
@property (retain) NSMutableOrderedSet *selectedBundleIdentifiers;
@property (retain) NSMutableOrderedSet *selectedWebDomains;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allowanceItemSpecifiers;
- (id)filteredAllowanceItemSpecifiers;
- (bool)hasNewSelection;
- (id)initalBundleIdentifiers;
- (id)initialWebDomains;
- (id)selectedBundleIdentifiers;
- (id)selectedWebDomains;
- (void)setAllowanceItemSpecifiers:(id)arg1;
- (void)setFilteredAllowanceItemSpecifiers:(id)arg1;
- (void)setHasNewSelection:(bool)arg1;
- (void)setInitalBundleIdentifiers:(id)arg1;
- (void)setInitialWebDomains:(id)arg1;
- (void)setSelectedBundleIdentifiers:(id)arg1;
- (void)setSelectedWebDomains:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
