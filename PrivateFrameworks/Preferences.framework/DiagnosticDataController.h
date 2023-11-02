
@interface DiagnosticDataController : PSListController <UISearchResultsUpdating> {
    NSArray * __allSpecifiers;
    unsigned long long  __state;
    UISearchController * _searchController;
}

@property (nonatomic, retain) NSArray *_allSpecifiers;
@property (nonatomic) unsigned long long _state;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UISearchController *searchController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_allSpecifiers;
- (void)_loadDiagnosticsDataWithCompletion:(id /* block */)arg1;
- (unsigned long long)_state;
- (id)init;
- (id)searchController;
- (void)setSearchController:(id)arg1;
- (void)set_allSpecifiers:(id)arg1;
- (void)set_state:(unsigned long long)arg1;
- (id)specifiers;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)viewDidLoad;

@end
