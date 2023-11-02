
@protocol _EXHostViewControllerDelegate <NSObject>

@optional

- (void)hostViewController:(_EXHostViewController *)arg1 didBeginHosting:(_EXHostViewControllerConfiguration *)arg2;
- (void)hostViewController:(_EXHostViewController *)arg1 didEndHosting:(_EXHostViewControllerConfiguration *)arg2 error:(NSError *)arg3;
- (void)hostViewController:(_EXHostViewController *)arg1 didFailToHost:(_EXHostViewControllerConfiguration *)arg2 error:(NSError *)arg3;
- (void)hostViewController:(_EXHostViewController *)arg1 didPrepareToHost:(_EXHostViewControllerConfiguration *)arg2;
- (void)hostViewControllerDidActivate:(_EXHostViewController *)arg1;
- (void)hostViewControllerWillDeactivate:(_EXHostViewController *)arg1 error:(NSError *)arg2;
- (bool)shouldAcceptXPCConnection:(NSXPCConnection *)arg1;

@end
