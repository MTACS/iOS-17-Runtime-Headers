
@protocol UISwipeActionPullViewDelegate <NSObject>

@required

- (double)confirmationDistanceForPrimaryActionInSwipeActionPullView:(UISwipeActionPullView *)arg1;
- (void)swipeActionPullView:(UISwipeActionPullView *)arg1 tappedAction:(UIContextualAction *)arg2;

@end
