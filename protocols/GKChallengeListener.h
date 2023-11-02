
@protocol GKChallengeListener <NSObject>

@optional

- (void)player:(GKPlayer *)arg1 didCompleteChallenge:(GKChallenge *)arg2 issuedByFriend:(GKPlayer *)arg3;
- (void)player:(GKPlayer *)arg1 didReceiveChallenge:(GKChallenge *)arg2;
- (void)player:(GKPlayer *)arg1 issuedChallengeWasCompleted:(GKChallenge *)arg2 byFriend:(GKPlayer *)arg3;
- (void)player:(GKPlayer *)arg1 wantsToPlayChallenge:(GKChallenge *)arg2;

@end
