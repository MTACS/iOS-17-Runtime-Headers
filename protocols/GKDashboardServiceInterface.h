
@protocol GKDashboardServiceInterface <NSObject>

@required

- (void)finish;

@optional

- (void)dashboardDidChangeToLeaderboardIdentifier:(NSString *)arg1;
- (void)dashboardDidChangeToLeaderboardPlayerScope:(long long)arg1;
- (void)dashboardDidChangeToLeaderboardTimeScope:(long long)arg1;
- (void)dashboardDidChangeToViewState:(long long)arg1;
- (void)dismissWithGameController;
- (void)finishAndPlayChallenge:(GKChallenge *)arg1;
- (void)finishWithTurnBasedMatch:(GKTurnBasedMatch *)arg1;
- (void)quitTurnBasedMatch:(GKTurnBasedMatch *)arg1;
- (void)requestDashboardLogoImageWithHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)requestImagesForLeaderboardSetsWithHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)requestImagesForLeaderboardsInSet:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)requestRecipientProperties:(GKPlayerInternal *)arg1;
- (void)setToDarkBackground;
- (void)setToLightBackground;

@end
