
@interface AXUISettingsSearchableBaseListController : AXUISettingsBaseListController <UISearchBarDelegate, UISearchResultsUpdating> {
    NSArray * _allSpecifiers;
    NSString * _cachedSearchTextWhileDeactivating;
    bool  _needsSpecifierRefresh;
    UISearchController * _searchController;
    NSString * _searchText;
}

@property (nonatomic, retain) NSArray *allSpecifiers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UISearchController *searchController;
@property (nonatomic, retain) NSString *searchText;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_loadAllSpecifiersIfNeeded;
- (bool)_specifierIsGroupSpecifier:(id)arg1;
- (id)allSpecifiers;
- (void)deactivateAndPersistSearchText;
- (id)makeSpecifiers;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (id)searchController;
- (id)searchText;
- (void)setAllSpecifiers:(id)arg1;
- (void)setNeedsSpecifierRefresh;
- (void)setSearchController:(id)arg1;
- (void)setSearchText:(id)arg1;
- (bool)shouldShowSpecifier:(id)arg1 withSearchText:(id)arg2;
- (id)specifiers;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)viewDidLoad;

@end
