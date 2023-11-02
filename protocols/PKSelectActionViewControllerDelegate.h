
@protocol PKSelectActionViewControllerDelegate <NSObject>

@required

- (void)selectActionViewControllerDidCancel:(PKSelectActionViewController *)arg1;
- (void)selectActionViewControllerDidPerformAction:(PKSelectActionViewController *)arg1;

@end
