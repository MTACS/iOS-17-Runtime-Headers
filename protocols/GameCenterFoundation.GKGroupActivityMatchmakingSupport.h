
@protocol GameCenterFoundation.GKGroupActivityMatchmakingSupport

@required

- (GKMatchRequest *)currentMatchRequest;
- (long long)inviteeCount;
- (void)sendGroupActivityInviteTo:(GKPlayer *)arg1 participantID:(NSString *)arg2 pushToken:(NSData *)arg3;
- (void)showSharePlayMatchDeclinedToJoinAlertWithReason:(long long)arg1;
- (long long)totalPlayerCount;

@end
