
@interface GKDashboardLeaderboardCell : UICollectionViewCell {
    NSString * _bundleIdentifier;
    UILabel * _countLabel;
    UIImageView * _iconView;
    NSString * _imageName;
    GKLeaderboard * _leaderboard;
    GKLeaderboardSet * _leaderboardSet;
    UIView * _overlayView;
    UILabel * _titleLabel;
    UIColor * _titleLabelColor;
}

@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic, retain) UILabel *countLabel;
@property (nonatomic, retain) UIImageView *iconView;
@property (nonatomic, retain) NSString *imageName;
@property (nonatomic, retain) GKLeaderboard *leaderboard;
@property (nonatomic, retain) GKLeaderboardSet *leaderboardSet;
@property (nonatomic, retain) UIView *overlayView;
@property (nonatomic, readonly) UIView *popoverSourceView;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) UIColor *titleLabelColor;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)bundleIdentifier;
- (bool)canBecomeFocused;
- (id)countLabel;
- (id)iconView;
- (id)imageName;
- (id)leaderboard;
- (id)leaderboardSet;
- (id)overlayView;
- (id)popoverSourceView;
- (void)setBundleIdentifier:(id)arg1;
- (void)setCountLabel:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setIconView:(id)arg1;
- (void)setImageName:(id)arg1;
- (void)setLeaderboard:(id)arg1;
- (void)setLeaderboardSet:(id)arg1;
- (void)setOverlayView:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTitleLabelColor:(id)arg1;
- (id)titleLabel;
- (id)titleLabelColor;
- (void)updateImage;
- (void)updateOverlay;
- (void)updateRank;

@end
