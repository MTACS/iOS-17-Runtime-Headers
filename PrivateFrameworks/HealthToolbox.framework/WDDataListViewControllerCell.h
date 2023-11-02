
@interface WDDataListViewControllerCell : UITableViewCell {
    UIImageView * _iconImageView;
    NSArray * _largeTextConstraints;
    NSLayoutConstraint * _largeTextIconImageCenterYAnchorConstraint;
    NSArray * _regularConstraints;
    UILabel * _subtitleTextLabel;
    UILabel * _titleTextLabel;
}

@property (nonatomic, retain) UIImageView *iconImageView;
@property (nonatomic, retain) UILabel *subtitleTextLabel;
@property (nonatomic, retain) UILabel *titleTextLabel;

- (void).cxx_destruct;
- (void)_updateFont;
- (void)_updateForCurrentSizeCategory;
- (id)iconImageView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setIconImageView:(id)arg1;
- (void)setSubtitleTextLabel:(id)arg1;
- (void)setTitleTextLabel:(id)arg1;
- (void)setupConstraints;
- (void)setupSubviews;
- (id)subtitleTextLabel;
- (id)titleTextLabel;
- (void)traitCollectionDidChange:(id)arg1;

@end
