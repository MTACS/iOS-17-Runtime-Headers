
@interface GKDashboardLeaderboardDetailViewController : GKDetailViewController {
    UILabel * _descriptionLabel;
    UILabel * _earnedOnLabel;
    UIButton * _firstButton;
    UILabel * _infoLabel;
    GKLeaderboard * _leaderboard;
    UILabel * _nameLabel;
    GKDashboardPlayerPhotoView * _playerView;
    UIButton * _reportProblemButton;
    GKScore * _score;
    UIButton * _secondButton;
}

@property (nonatomic) UILabel *descriptionLabel;
@property (nonatomic) UILabel *earnedOnLabel;
@property (nonatomic) UIButton *firstButton;
@property (nonatomic) UILabel *infoLabel;
@property (nonatomic, retain) GKLeaderboard *leaderboard;
@property (nonatomic) UILabel *nameLabel;
@property (nonatomic) GKDashboardPlayerPhotoView *playerView;
@property (nonatomic) UIButton *reportProblemButton;
@property (nonatomic, retain) GKScore *score;
@property (nonatomic) UIButton *secondButton;

- (void).cxx_destruct;
- (void)challenge:(id)arg1;
- (void)configureForScore;
- (id)descriptionLabel;
- (id)earnedOnLabel;
- (id)firstButton;
- (id)infoLabel;
- (id)initWithScore:(id)arg1 leaderboard:(id)arg2;
- (id)leaderboard;
- (id)nameLabel;
- (id)playerView;
- (id)preferredFocusEnvironments;
- (void)report:(id)arg1;
- (id)reportProblemButton;
- (id)score;
- (id)secondButton;
- (void)setDescriptionLabel:(id)arg1;
- (void)setEarnedOnLabel:(id)arg1;
- (void)setFirstButton:(id)arg1;
- (void)setInfoLabel:(id)arg1;
- (void)setLeaderboard:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setPlayerView:(id)arg1;
- (void)setReportProblemButton:(id)arg1;
- (void)setScore:(id)arg1;
- (void)setSecondButton:(id)arg1;
- (void)share:(id)arg1;
- (void)viewDidLoad;

@end
