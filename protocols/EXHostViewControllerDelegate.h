
@protocol EXHostViewControllerDelegate <NSObject>

@optional

- (void)hostViewControllerDidActivate:(EXHostViewController *)arg1;
- (void)hostViewControllerWillDeactivate:(EXHostViewController *)arg1 error:(NSError *)arg2;

@end
