
@protocol GKInviteEventListener

@optional

- (void)player:(GKPlayer *)arg1 didAcceptInvite:(GKInvite *)arg2;
- (void)player:(GKPlayer *)arg1 didRequestMatchWithPlayers:(NSArray *)arg2;
- (void)player:(GKPlayer *)arg1 didRequestMatchWithRecipients:(NSArray *)arg2;

@end
