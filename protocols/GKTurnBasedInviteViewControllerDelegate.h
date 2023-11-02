
@protocol GKTurnBasedInviteViewControllerDelegate <NSObject>

@required

- (void)turnBasedInviteViewController:(GKTurnBasedInviteViewController *)arg1 didCreateMatchID:(NSString *)arg2;
- (void)turnBasedInviteViewController:(GKTurnBasedInviteViewController *)arg1 didFailWithError:(NSError *)arg2;
- (void)turnBasedInviteViewControllerWasCancelled:(GKTurnBasedInviteViewController *)arg1;

@end
