
@protocol SSDittoHostViewControllerDelegate

@required

- (void)remoteViewControllerDisconnectedFromHostViewController:(SSDittoHostViewController *)arg1 withError:(NSError *)arg2;
- (void)remoteViewControllerOfHostViewControllerHasDismissedScreenshots:(SSDittoHostViewController *)arg1;

@end
