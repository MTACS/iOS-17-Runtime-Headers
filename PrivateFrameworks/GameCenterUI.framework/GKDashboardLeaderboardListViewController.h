
@interface GKDashboardLeaderboardListViewController : GKDashboardCollectionViewController {
    GKLeaderboardSet * _leaderboardSet;
}

@property (nonatomic, retain) GKLeaderboardSet *leaderboardSet;

- (void).cxx_destruct;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)initWithGameRecord:(id)arg1 leaderboardSet:(id)arg2;
- (id)leaderboardSet;
- (void)setLeaderboardSet:(id)arg1;
- (void)viewDidLoad;

@end
