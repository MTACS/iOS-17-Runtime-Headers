
@interface GKChallengeListViewController : GKDashboardCollectionViewController {
    long long  _preferredLargeTitleDisplayMode;
    bool  _shouldShowPlayForChallenge;
    double  _startTime;
}

@property (nonatomic) long long preferredLargeTitleDisplayMode;
@property (nonatomic) bool shouldShowPlayForChallenge;
@property (nonatomic) double startTime;

- (void)configureCloseButton;
- (void)configureCollectionView;
- (void)donePressed:(id)arg1;
- (id)initWithGameRecord:(id)arg1;
- (long long)preferredLargeTitleDisplayMode;
- (void)setPreferredLargeTitleDisplayMode:(long long)arg1;
- (void)setShouldShowPlayForChallenge:(bool)arg1;
- (void)setStartTime:(double)arg1;
- (void)setupNoContentView:(id)arg1 withError:(id)arg2;
- (bool)shouldShowPlayForChallenge;
- (void)showNoContentPlaceholderForError:(id)arg1;
- (double)startTime;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateLargeTitleInsets;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
