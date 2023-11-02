
@interface GKLeaderboardListHeaderView : UICollectionReusableView {
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
}

@property (nonatomic) UILabel *subtitleLabel;
@property (nonatomic) UILabel *titleLabel;

+ (double)defaultHeight;

- (void)setSubtitleLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (id)titleLabel;

@end
