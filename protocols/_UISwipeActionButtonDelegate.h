
@protocol _UISwipeActionButtonDelegate <NSObject>

@optional

- (void)swipeActionButton:(UISwipeActionButton *)arg1 willDismissContextMenuWithAnimator:(id <UIContextMenuInteractionAnimating>)arg2;
- (void)swipeActionButton:(UISwipeActionButton *)arg1 willDisplayContextMenuWithAnimator:(id <UIContextMenuInteractionAnimating>)arg2;

@end
