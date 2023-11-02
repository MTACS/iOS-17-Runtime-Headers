
@protocol GKLeaderboardScoreDelegate <NSObject>

@required

- (void)collectionViewDidScroll;
- (void)didExpandOrContractFriendSuggestions;
- (void)didLoadAdditionalScores;
- (void)didLoadScoresWithLocalPlayerEntry:(GKLeaderboardEntry *)arg1 topPlayer:(GKLeaderboardEntry *)arg2 playerAbove:(GKLeaderboardEntry *)arg3 playerBelow:(GKLeaderboardEntry *)arg4 totalEntries:(long long)arg5;
- (void)setPreferredFocusCell:(UICollectionViewCell *)arg1;

@end
