
@interface GKLeaderboardScoreCell : GKFocusHighlightingCollectionViewCell {
    UIView * _backView;
    <GKLeaderboardScoreActionDelegate> * _delegate;
    GKLeaderboardEntry * _entry;
    bool  _isLocalPlayerScore;
    UIView * _monogramColorView;
    UILabel * _nameLabel;
    GKDashboardPlayerPhotoView * _playerView;
    NSLayoutConstraint * _playerViewHeightConstraint;
    UILabel * _rankLabel;
    UILabel * _scoreLabel;
    bool  _shouldShowContextMenu;
    UILabel * _subtitleLabel;
    UIView * _topLine;
}

@property (nonatomic, retain) UIView *backView;
@property (nonatomic) <GKLeaderboardScoreActionDelegate> *delegate;
@property (nonatomic, retain) GKLeaderboardEntry *entry;
@property (nonatomic) bool isLocalPlayerScore;
@property (nonatomic) bool lineVisible;
@property (nonatomic, retain) UIView *monogramColorView;
@property (nonatomic, retain) UILabel *nameLabel;
@property (nonatomic, retain) GKDashboardPlayerPhotoView *playerView;
@property (nonatomic, retain) NSLayoutConstraint *playerViewHeightConstraint;
@property (nonatomic, retain) UILabel *rankLabel;
@property (nonatomic, retain) UILabel *scoreLabel;
@property (nonatomic) bool shouldShowContextMenu;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (nonatomic, retain) UIView *topLine;

+ (struct CGSize { double x1; double x2; })defaultSize;
+ (id)highRankNib;
+ (id)lowRankNib;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)backView;
- (bool)canBecomeFocused;
- (id)cellBackgroundColor:(bool)arg1;
- (id)delegate;
- (id)entry;
- (bool)isLocalPlayerScore;
- (bool)lineVisible;
- (id)monogramColorView;
- (id)nameLabel;
- (id)playerView;
- (id)playerViewHeightConstraint;
- (void)prepareForReuse;
- (id)rankLabel;
- (id)scoreLabel;
- (void)setBackView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEntry:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setIsLocalPlayerScore:(bool)arg1;
- (void)setLineVisible:(bool)arg1;
- (void)setMonogramColorView:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setPlayerView:(id)arg1;
- (void)setPlayerViewHeightConstraint:(id)arg1;
- (void)setRankLabel:(id)arg1;
- (void)setScoreLabel:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setShouldShowContextMenu:(bool)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTopLine:(id)arg1;
- (void)setupForLeaderboardEntry:(id)arg1;
- (bool)shouldShowContextMenu;
- (id)subtitleLabel;
- (id)topLine;
- (void)updateLayerMask:(id)arg1;

@end
