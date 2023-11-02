
@protocol SUIKSearchResultsCollectionViewControllerDelegate

@required

- (void)searchResultsCollectionViewController:(SUIKSearchResultsCollectionViewController *)arg1 didSelectURL:(NSURL *)arg2;
- (UIImage *)searchResultsCollectionViewController:(SUIKSearchResultsCollectionViewController *)arg1 iconForCategory:(NSString *)arg2;
- (long long)searchResultsCollectionViewController:(SUIKSearchResultsCollectionViewController *)arg1 sortCategory1:(NSString *)arg2 sortCategory2:(NSString *)arg3;

@optional

- (void)searchResultsCollectionViewController:(SUIKSearchResultsCollectionViewController *)arg1 didScrollResultsInScrollView:(UIScrollView *)arg2;
- (void)searchResultsCollectionViewController:(SUIKSearchResultsCollectionViewController *)arg1 didSelectItem:(CSSearchableItem *)arg2 atIndex:(long long)arg3;
- (bool)searchResultsCollectionViewController:(SUIKSearchResultsCollectionViewController *)arg1 shouldShowCategory:(NSString *)arg2;

@end
