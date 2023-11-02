
@protocol SUUISearchFieldDelegate <NSObject>

@optional

- (void)searchFieldController:(SUUISearchFieldController *)arg1 requestSearch:(SUUISearchRequest *)arg2;
- (void)searchFieldController:(SUUISearchFieldController *)arg1 requestSearchWithSearchTerm:(NSString *)arg2 metricsEvent:(SSMetricsSearchEvent *)arg3;
- (void)searchFieldController:(SUUISearchFieldController *)arg1 requestSearchWithURL:(NSURL *)arg2 metricsEvent:(SSMetricsSearchEvent *)arg3;
- (void)searchFieldController:(SUUISearchFieldController *)arg1 searchBarDidChangeText:(NSString *)arg2;
- (bool)searchFieldControllerShouldBeginEditing:(SUUISearchFieldController *)arg1;

@end
