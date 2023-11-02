
@protocol PKRemoteActionGroupViewControllerDelegate <NSObject>

@required

- (void)remoteGroupActionsViewControllerDidCancel:(PKRemoteActionGroupViewController *)arg1;
- (void)remoteGroupActionsViewControllerDidPerformFetchActionGroup:(PKRemoteActionGroupViewController *)arg1;

@end
