
@protocol UISwipeActionHost_Internal <UISwipeActionHost>

@optional

- (void)swipeActionController:(UISwipeActionController *)arg1 cleanupActionsView:(UIView *)arg2 forItemAtIndexPath:(NSIndexPath *)arg3;
- (bool)swipeActionController:(UISwipeActionController *)arg1 insertActionsView:(UIView *)arg2 forItemAtIndexPath:(NSIndexPath *)arg3;
- (void)swipeActionController:(UISwipeActionController *)arg1 swipeOccurrence:(UISwipeOccurrence *)arg2 didChangeStateFrom:(long long)arg3 to:(long long)arg4;
- (<_UISwipeViewManipulator> *)swipeViewManipulatorForSwipeActionController:(UISwipeActionController *)arg1;

@end
