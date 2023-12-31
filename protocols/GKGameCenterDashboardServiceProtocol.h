
@protocol GKGameCenterDashboardServiceProtocol <GKExtensionProtocol>

@optional

- (void)hostDidChangeLeaderboardIdentifier:(NSString *)arg1;
- (void)hostDidChangeLeaderboardPlayerScope:(NSNumber *)arg1;
- (void)hostDidChangeLeaderboardTimeScope:(NSNumber *)arg1;
- (void)hostDidChangeViewState:(NSNumber *)arg1;
- (void)hostDidParseDashboardImageNames:(NSDictionary *)arg1 leaderboardSetNames:(NSDictionary *)arg2 leaderboardNames:(NSDictionary *)arg3;
- (void)hostSupportsShowingPlayForChallenge:(bool)arg1;
- (void)hostSupportsShowingPlayForTurnBasedMatch:(bool)arg1;
- (void)hostSupportsShowingQuitForTurnBasedMatch:(bool)arg1;

@end
