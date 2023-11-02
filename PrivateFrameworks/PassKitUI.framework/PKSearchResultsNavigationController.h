
@interface PKSearchResultsNavigationController : PKNavigationController {
    PKSearchResultsSearchController * _searchController;
}

@property (nonatomic) PKSearchResultsSearchController *searchController;

- (void).cxx_destruct;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (id)searchController;
- (void)setSearchController:(id)arg1;

@end
