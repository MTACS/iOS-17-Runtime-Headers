
@protocol SFPasswordRemoteViewControllerDelegate <NSObject>

@required

- (void)remoteViewController:(SFPasswordRemoteViewController *)arg1 viewServiceDidTerminateWithError:(NSError *)arg2;
- (void)remoteViewControllerWillDismiss:(SFPasswordRemoteViewController *)arg1;

@end
