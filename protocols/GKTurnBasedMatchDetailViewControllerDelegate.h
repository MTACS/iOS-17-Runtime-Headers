
@protocol GKTurnBasedMatchDetailViewControllerDelegate <NSObject>

@required

- (void)turnBasedMatchDetailViewControllerDidAcceptInvitation:(GKTurnBasedMatchDetailViewController *)arg1;
- (void)turnBasedMatchDetailViewControllerDidChooseMatch:(GKTurnBasedMatchDetailViewController *)arg1;
- (void)turnBasedMatchDetailViewControllerDidDeclineInvitation:(GKTurnBasedMatchDetailViewController *)arg1;
- (void)turnBasedMatchDetailViewControllerDidQuitMatch:(GKTurnBasedMatchDetailViewController *)arg1;
- (void)turnBasedMatchDetailViewControllerDidRemoveMatch:(GKTurnBasedMatchDetailViewController *)arg1;
- (void)turnBasedMatchDetailViewControllerDidShowStore:(GKTurnBasedMatchDetailViewController *)arg1;

@optional

- (void)turnBasedMatchDetailViewControllerDidFinish:(GKTurnBasedMatchDetailViewController *)arg1;

@end
