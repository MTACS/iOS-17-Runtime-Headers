
@protocol _UICollectionViewLayoutSwipeActions <NSObject>

@required

- (void)_didEndSwiping;
- (UISwipeActionsConfiguration *)_leadingSwipeActionsConfigurationForIndexPath:(NSIndexPath *)arg1;
- (bool)_supportsSwipeActionsForIndexPath:(NSIndexPath *)arg1;
- (UISwipeActionsConfiguration *)_trailingSwipeActionsConfigurationForIndexPath:(NSIndexPath *)arg1;
- (void)_updateStyleForSwipeActionsConfiguration:(UISwipeActionsConfiguration *)arg1 indexPath:(NSIndexPath *)arg2;
- (void)_willBeginSwiping;

@end
