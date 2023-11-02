
@interface GKDashboardChallengeDetailViewController : GKDetailViewController {
    GKChallenge * _challenge;
    UIButton * _declineButton;
    id  _delegate;
    UILabel * _descriptionLabel;
    UILabel * _fromLabel;
    NSLayoutConstraint * _iconHeightConstraint;
    GKAchievementIconView * _iconView;
    UIButton * _playButton;
    bool  _shouldShowPlay;
    NSLayoutConstraint * _speechToFromConstraint;
    UILabel * _titleLabel;
    NSLayoutConstraint * _topConstraint;
    double  _topMargin;
}

@property (nonatomic, retain) GKChallenge *challenge;
@property (nonatomic) UIButton *declineButton;
@property (nonatomic) id delegate;
@property (nonatomic) UILabel *descriptionLabel;
@property (nonatomic) UILabel *fromLabel;
@property (nonatomic) NSLayoutConstraint *iconHeightConstraint;
@property (nonatomic) GKAchievementIconView *iconView;
@property (nonatomic) UIButton *playButton;
@property (nonatomic) bool shouldShowPlay;
@property (nonatomic) NSLayoutConstraint *speechToFromConstraint;
@property (nonatomic) UILabel *titleLabel;
@property (nonatomic) NSLayoutConstraint *topConstraint;
@property (nonatomic) double topMargin;

- (void).cxx_destruct;
- (id)challenge;
- (void)challengeOK:(id)arg1;
- (void)configureForChallenge;
- (void)decline:(id)arg1;
- (id)declineButton;
- (id)delegate;
- (id)descriptionLabel;
- (id)fromLabel;
- (id)iconHeightConstraint;
- (id)iconView;
- (id)initWithChallenge:(id)arg1;
- (void)play:(id)arg1;
- (id)playButton;
- (id)preferredFocusEnvironments;
- (void)setChallenge:(id)arg1;
- (void)setDeclineButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDescriptionLabel:(id)arg1;
- (void)setFromLabel:(id)arg1;
- (void)setIconHeightConstraint:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setPlayButton:(id)arg1;
- (void)setShouldShowPlay:(bool)arg1;
- (void)setSpeechToFromConstraint:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTopConstraint:(id)arg1;
- (void)setTopMargin:(double)arg1;
- (bool)shouldShowPlay;
- (id)speechToFromConstraint;
- (id)titleLabel;
- (id)topConstraint;
- (double)topMargin;
- (void)updateLeaderboardImage;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
