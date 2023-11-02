
@protocol UIContextMenuInteractionDelegate_Private <UIContextMenuInteractionDelegate>

@optional

- (NSArray *)_contextMenuInteraction:(UIContextMenuInteraction *)arg1 accessoriesForMenuWithConfiguration:(UIContextMenuConfiguration *)arg2;
- (bool)_contextMenuInteraction:(UIContextMenuInteraction *)arg1 shouldBeDelayedByGestureRecognizer:(UIGestureRecognizer *)arg2;
- (_UIContextMenuStyle *)_contextMenuInteraction:(UIContextMenuInteraction *)arg1 styleForMenuWithConfiguration:(UIContextMenuConfiguration *)arg2;
- (void)contextMenuInteraction:(UIContextMenuInteraction *)arg1 willCommitWithAnimator:(id <UIContextMenuInteractionCommitAnimating>)arg2;

@end
