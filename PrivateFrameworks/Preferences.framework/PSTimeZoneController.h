
@interface PSTimeZoneController : UITableViewController <UISearchBarDelegate, UISearchControllerDelegate, UISearchResultsUpdating> {
    NSArray * _cities;
    PSListController * _parentController;
    UISearchController * _searchController;
    PSSpecifier * _specifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) PSListController *parentController;
@property (nonatomic, retain) UISearchController *searchController;
@property (nonatomic, retain) PSSpecifier *specifier;
@property (readonly) Class superclass;

+ (void)setTimeZone:(id)arg1;

- (void).cxx_destruct;
- (id)currentTimeZoneCityName;
- (id)parentController;
- (id)searchController;
- (void)setParentController:(id)arg1;
- (void)setSearchController:(id)arg1;
- (void)setSpecifier:(id)arg1;
- (id)specifier;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
