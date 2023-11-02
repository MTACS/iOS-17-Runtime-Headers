
@interface GKDashboardLeaderboardScoreViewController : GKDashboardCollectionViewController {
    GKDashboardLeaderboardScoreDataSource * _friendDataSource;
    GKDashboardLeaderboardScoreDataSource * _globalDataSource;
    GKDashboardLeaderboardScoreHeaderView * _headerView;
    GKLeaderboard * _leaderboard;
    long long  _timeScope;
}

@property (nonatomic, retain) GKDashboardLeaderboardScoreDataSource *friendDataSource;
@property (nonatomic, retain) GKDashboardLeaderboardScoreDataSource *globalDataSource;
@property (nonatomic, retain) GKDashboardLeaderboardScoreHeaderView *headerView;
@property (nonatomic, retain) GKLeaderboard *leaderboard;
@property (nonatomic) long long timeScope;

+ (long long)initialTimeScope;
+ (void)setInitialTimeScope:(long long)arg1;

- (void).cxx_destruct;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)dataUpdated:(bool)arg1 withError:(id)arg2;
- (void)donePressed:(id)arg1;
- (id)friendDataSource;
- (id)globalDataSource;
- (id)headerView;
- (id)initWithGameRecord:(id)arg1 leaderboard:(id)arg2;
- (id)leaderboard;
- (void)setFriendDataSource:(id)arg1;
- (void)setGlobalDataSource:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setLeaderboard:(id)arg1;
- (void)setTimeScope:(long long)arg1;
- (void)setupNoContentView:(id)arg1 withError:(id)arg2;
- (bool)shouldUseTwoColumnLayoutForSize:(struct CGSize { double x1; double x2; })arg1;
- (long long)timeScope;
- (void)timeScopePressed:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateColumnLayoutForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
