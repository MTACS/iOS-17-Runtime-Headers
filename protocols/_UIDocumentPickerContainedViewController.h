
@protocol _UIDocumentPickerContainedViewController <NSObject, UISearchControllerDelegate>

@required

- (long long)displayMode;
- (NSArray *)indexPathsForSelectedItems;
- (void)scrollSortViewToVisible;
- (UIScrollView *)scrollView;
- (void)setDisplayMode:(long long)arg1;
- (void)setIndexPathsForSelectedItems:(NSArray *)arg1;
- (void)setPinnedHeaderView:(UIView *)arg1 animated:(bool)arg2;
- (void)setServiceViewController:(id <_UIDocumentPickerServiceViewController>)arg1;
- (void)setSortView:(_UIDocumentPickerSortOrderView *)arg1;
- (bool)supportsActions;

@end
