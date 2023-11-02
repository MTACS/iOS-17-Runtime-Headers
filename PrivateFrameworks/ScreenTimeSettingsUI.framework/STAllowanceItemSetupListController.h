
@interface STAllowanceItemSetupListController : PSListController <UISearchControllerDelegate> {
    bool  _allAppsAndCategoriesSelected;
    NSMutableDictionary * _applicationAndWebDomainSpecifiersByCategoryIdentifier;
    NSArray * _categorySpecifiers;
    STAllowanceItemSearchResultsController * _searchResultsController;
    NSMutableOrderedSet * _selectedBundleIdentifiers;
    NSMutableOrderedSet * _selectedCategoryIdentifiers;
    NSMutableOrderedSet * _selectedWebDomains;
}

@property bool allAppsAndCategoriesSelected;
@property (nonatomic, readonly) NSMutableDictionary *applicationAndWebDomainSpecifiersByCategoryIdentifier;
@property (copy) NSArray *categorySpecifiers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) STAllowanceItemSearchResultsController *searchResultsController;
@property (readonly) NSMutableOrderedSet *selectedBundleIdentifiers;
@property (readonly) NSMutableOrderedSet *selectedCategoryIdentifiers;
@property (readonly) NSMutableOrderedSet *selectedWebDomains;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addCustomWebDomain:(id)arg1 specifier:(id)arg2;
- (void)_addWebsiteButtonPressed:(id)arg1;
- (id)_applicationSpecifierForBundleIdentifier:(id)arg1 categoryIdentifier:(id)arg2;
- (id)_categoryDetailText:(id)arg1;
- (id)_categorySpecifierForIdentifier:(id)arg1;
- (void)_cleanUpRetainCycles;
- (void)_didPressCancelButton:(id)arg1;
- (void)_didPressDoneButton:(id)arg1;
- (void)_hasSelectionDidChangeFrom:(bool)arg1 to:(bool)arg2;
- (void)_selectCellsForSelectedIdentifiers:(id)arg1;
- (void)_showNewCategoriesCompatibilityAlertIfNeeded;
- (void)_updateApplicationSpecifiersWithBundleIdentifier:(id)arg1 categoryIdentifier:(id)arg2 shouldInsertSpecifier:(bool)arg3;
- (id)_webDomainSpecifierForDomain:(id)arg1 usageItem:(id)arg2;
- (bool)allAppsAndCategoriesSelected;
- (id)applicationAndWebDomainSpecifiersByCategoryIdentifier;
- (bool)canBeShownFromSuspendedState;
- (id)categorySpecifiers;
- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)searchResultsController;
- (id)selectedBundleIdentifiers;
- (id)selectedCategoryIdentifiers;
- (id)selectedWebDomains;
- (void)setAllAppsAndCategoriesSelected:(bool)arg1;
- (void)setCategorySpecifiers:(id)arg1;
- (void)setSearchResultsController:(id)arg1;
- (void)setSpecifier:(id)arg1;
- (id)specifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableViewStyle;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)willDismissSearchController:(id)arg1;
- (void)willPresentSearchController:(id)arg1;
- (void)willResignActive;

@end
