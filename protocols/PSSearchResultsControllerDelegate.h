
@protocol PSSearchResultsControllerDelegate <NSObject>

@required

- (void)searchResultsController:(PSSearchResultsController *)arg1 didSelectSearchEntry:(PSSearchEntry *)arg2;
- (UIImage *)searchResultsController:(PSSearchResultsController *)arg1 iconForSearchEntry:(PSSearchEntry *)arg2;
- (bool)searchResultsController:(PSSearchResultsController *)arg1 shouldShowSwitchForSearchEntry:(PSSearchEntry *)arg2;
- (PSSpecifierAction *)searchResultsController:(PSSearchResultsController *)arg1 switchActionForSearchEntry:(PSSearchEntry *)arg2;

@end
