
@protocol SBHSearchResultsUpdating <NSObject>

@required

- (bool)searchControllerShouldReturn:(SBHLibrarySearchController *)arg1;
- (void)updateSearchResultsForSearchController:(SBHLibrarySearchController *)arg1;

@optional

- (SBHLibrarySearchController *)searchController;
- (void)setSearchController:(SBHLibrarySearchController *)arg1;

@end
