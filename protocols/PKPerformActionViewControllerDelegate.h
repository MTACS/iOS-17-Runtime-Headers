
@protocol PKPerformActionViewControllerDelegate <NSObject>

@required

- (void)performActionViewControllerDidCancel:(PKPerformActionViewController *)arg1;
- (void)performActionViewControllerDidPerformAction:(PKPerformActionViewController *)arg1;

@end
