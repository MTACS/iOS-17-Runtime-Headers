
@interface GKDashboardLeaderboardScoreCell : GKRectShadowCell {
    UIView * _bottomLine;
    UIView * _monogramColorView;
    UILabel * _nameLabel;
    GKDashboardPlayerPhotoView * _playerView;
    NSLayoutConstraint * _playerViewHeightConstraint;
    UILabel * _rankLabel;
    GKScore * _score;
    UILabel * _scoreLabel;
    UIView * _topLine;
}

@property (nonatomic) UIView *bottomLine;
@property (nonatomic) bool linesVisible;
@property (nonatomic) UIView *monogramColorView;
@property (nonatomic) UILabel *nameLabel;
@property (nonatomic) GKDashboardPlayerPhotoView *playerView;
@property (nonatomic, retain) NSLayoutConstraint *playerViewHeightConstraint;
@property (nonatomic, readonly) UIView *popoverSourceView;
@property (nonatomic) UILabel *rankLabel;
@property (nonatomic, retain) GKScore *score;
@property (nonatomic) UILabel *scoreLabel;
@property (nonatomic) UIView *topLine;

+ (struct CGSize { double x1; double x2; })defaultSize;
+ (id)highRankNib;
+ (id)lowRankNib;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)bottomLine;
- (bool)linesVisible;
- (id)monogramColorView;
- (id)nameLabel;
- (id)playerView;
- (id)playerViewHeightConstraint;
- (id)popoverSourceView;
- (id)rankLabel;
- (id)score;
- (id)scoreLabel;
- (void)setBottomLine:(id)arg1;
- (void)setLinesVisible:(bool)arg1;
- (void)setMonogramColorView:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setPlayerView:(id)arg1;
- (void)setPlayerViewHeightConstraint:(id)arg1;
- (void)setRankLabel:(id)arg1;
- (void)setScore:(id)arg1;
- (void)setScoreLabel:(id)arg1;
- (void)setTopLine:(id)arg1;
- (void)setupForScore:(id)arg1;
- (id)topLine;

@end
