
@protocol BKUIPearlEnrollViewControllerDelegate <NSObject>

@required

- (UIView *)containerView;
- (void)pearlEnrollViewController:(BKUIPearlEnrollViewController *)arg1 finishedEnrollWithError:(NSError *)arg2;

@optional

- (void)pearlEnrollControllerCompleted:(BKUIPearlEnrollViewController *)arg1;

@end
