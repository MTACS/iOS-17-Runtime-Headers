
@interface GKDashboardPlayerCell : GKFocusHighlightingCollectionViewCell {
    UIColor * _defaultContentBackgroundColor;
    UIColor * _nameColor;
    UILabel * _nameLabel;
    bool  _onDarkBackground;
    GKPlayer * _player;
    GKDashboardPlayerShadowView * _playerView;
    double  _playerViewBottomToNameLabelTopConstant;
    NSLayoutConstraint * _playerViewBottomToNameLabelTopConstraint;
    UIColor * _statusColor;
    UILabel * _statusLabel;
}

@property (nonatomic, retain) UIColor *defaultContentBackgroundColor;
@property (nonatomic, retain) UIColor *nameColor;
@property (nonatomic) UILabel *nameLabel;
@property (nonatomic) bool onDarkBackground;
@property (nonatomic, retain) GKPlayer *player;
@property (nonatomic) GKDashboardPlayerShadowView *playerView;
@property (nonatomic) double playerViewBottomToNameLabelTopConstant;
@property (nonatomic) NSLayoutConstraint *playerViewBottomToNameLabelTopConstraint;
@property (nonatomic, readonly) UIView *popoverSourceView;
@property (nonatomic, retain) UIColor *statusColor;
@property (nonatomic) UILabel *statusLabel;

+ (struct CGSize { double x1; double x2; })defaultSize;
+ (double)preferredCollectionHeight;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (bool)canBecomeFocused;
- (id)defaultContentBackgroundColor;
- (id)nameColor;
- (id)nameLabel;
- (bool)onDarkBackground;
- (id)player;
- (id)playerView;
- (double)playerViewBottomToNameLabelTopConstant;
- (id)playerViewBottomToNameLabelTopConstraint;
- (id)popoverSourceView;
- (void)setDefaultContentBackgroundColor:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setNameColor:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setNameText:(id)arg1;
- (void)setOnDarkBackground:(bool)arg1;
- (void)setPlayer:(id)arg1;
- (void)setPlayerView:(id)arg1;
- (void)setPlayerViewBottomToNameLabelTopConstant:(double)arg1;
- (void)setPlayerViewBottomToNameLabelTopConstraint:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setStatusColor:(id)arg1;
- (void)setStatusLabel:(id)arg1;
- (void)setStatusText:(id)arg1;
- (void)setStatusWithLastPlayedDate:(id)arg1;
- (id)statusColor;
- (id)statusLabel;
- (void)updateLabelColorForDashboard;

@end
