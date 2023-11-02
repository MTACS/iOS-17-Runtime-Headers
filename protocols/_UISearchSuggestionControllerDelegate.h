
@protocol _UISearchSuggestionControllerDelegate <NSObject>

@required

- (void)searchSuggestionController:(_UISearchSuggestionController *)arg1 didSelectSuggestion:(id <UISearchSuggestion>)arg2 atIndexPath:(NSIndexPath *)arg3;

@optional

- (UIColor *)searchPlaceholderColor;
- (void)searchSuggestionCollectionView:(UICollectionView *)arg1 didEndDisplayingCell:(UICollectionViewCell *)arg2 forItemAtIndexPath:(NSIndexPath *)arg3;
- (void)searchSuggestionCollectionView:(UICollectionView *)arg1 willDisplayCell:(UICollectionViewCell *)arg2 forItemAtIndexPath:(NSIndexPath *)arg3;
- (void)searchSuggestionScrollViewDidScroll:(UIScrollView *)arg1;
- (UIColor *)searchTextColor;
- (UITextField *)searchTextField;

@end
