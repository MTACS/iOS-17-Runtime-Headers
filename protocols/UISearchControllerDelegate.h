
@protocol UISearchControllerDelegate <NSObject>

@optional

- (void)didDismissSearchController:(UISearchController *)arg1;
- (void)didPresentSearchController:(UISearchController *)arg1;
- (void)presentSearchController:(UISearchController *)arg1;
- (void)searchController:(UISearchController *)arg1 didChangeFromSearchBarPlacement:(long long)arg2;
- (void)searchController:(UISearchController *)arg1 willChangeToSearchBarPlacement:(long long)arg2;
- (void)willDismissSearchController:(UISearchController *)arg1;
- (void)willPresentSearchController:(UISearchController *)arg1;

@end
