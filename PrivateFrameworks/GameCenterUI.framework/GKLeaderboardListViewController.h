
@interface GKLeaderboardListViewController : GKLoadingViewController {
    bool  _canSegueToScores;
    UICollectionView * _collectionView;
    GKGameLayerCollectionDataSource * _dataSource;
    NSDictionary * _leaderboardAssetNames;
    NSDictionary * _leaderboardSetAssetNames;
    GKNoContentView * _noContentView;
    long long  _preferredLargeTitleDisplayMode;
    bool  _showingLeaderboardSets;
}

@property (nonatomic) bool canSegueToScores;
@property (nonatomic, retain) UICollectionView *collectionView;
@property (nonatomic, retain) GKGameLayerCollectionDataSource *dataSource;
@property (nonatomic, retain) NSDictionary *leaderboardAssetNames;
@property (nonatomic, retain) NSDictionary *leaderboardSetAssetNames;
@property (nonatomic, retain) GKNoContentView *noContentView;
@property (nonatomic) long long preferredLargeTitleDisplayMode;
@property (nonatomic) bool showingLeaderboardSets;

- (void).cxx_destruct;
- (void)_gkRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (bool)_gkShouldRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (bool)canSegueToScores;
- (void)clearSelection;
- (id)collectionView;
- (void)configureCloseButton;
- (id)contentScrollView;
- (id)dataSource;
- (void)dataUpdated:(bool)arg1 withError:(id)arg2;
- (void)dealloc;
- (void)didEnterLoadingState;
- (void)didEnterRefreshingState;
- (void)didExitRefreshingState;
- (void)donePressed:(id)arg1;
- (bool)hasData;
- (void)hideNoContentPlaceholder;
- (id)initWithGameRecord:(id)arg1 leaderboardSet:(id)arg2;
- (bool)isLoading;
- (id)leaderboardAssetNames;
- (id)leaderboardSetAssetNames;
- (void)loadData;
- (id)noContentView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (long long)preferredLargeTitleDisplayMode;
- (void)setCanSegueToScores:(bool)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setHorizontalLayout:(bool)arg1;
- (void)setLeaderboardAssetNames:(id)arg1;
- (void)setLeaderboardSetAssetNames:(id)arg1;
- (void)setNeedsRefresh;
- (void)setNoContentView:(id)arg1;
- (void)setPreferredLargeTitleDisplayMode:(long long)arg1;
- (void)setShowingLeaderboardSets:(bool)arg1;
- (void)setupNoContentView:(id)arg1 withError:(id)arg2;
- (void)setupVisualEffect;
- (void)showNoContentPlaceholderForError:(id)arg1;
- (bool)showingLeaderboardSets;
- (id)title;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateLargeTitleInsets;
- (void)updateLayout;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
