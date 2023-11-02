
@interface VUISeasonPickerCollectionViewCell : VUIListCollectionViewCell {
    VUISeparatorView * _bottomSeparatorView;
    VUIImageView * _seasonImageView;
    VUILabel * _secondSubtitleLabel;
    VUILabel * _subtitleLabel;
    VUILabel * _titleLabel;
    VUISeparatorView * _topSeparatorView;
}

@property (nonatomic, retain) VUISeparatorView *bottomSeparatorView;
@property (nonatomic, retain) VUIImageView *seasonImageView;
@property (nonatomic, retain) VUILabel *secondSubtitleLabel;
@property (nonatomic, retain) VUILabel *subtitleLabel;
@property (nonatomic, retain) VUILabel *titleLabel;
@property (nonatomic, retain) VUISeparatorView *topSeparatorView;

+ (void)configureSeasonPickerCell:(id)arg1 withMedia:(id)arg2 traitCollection:(id)arg3;

- (void).cxx_destruct;
- (id)bottomSeparatorView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)seasonImageView;
- (id)secondSubtitleLabel;
- (void)setBottomSeparatorView:(id)arg1;
- (void)setSeasonImageView:(id)arg1;
- (void)setSecondSubtitleLabel:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTopSeparatorView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)subtitleLabel;
- (id)titleLabel;
- (id)topSeparatorView;

@end
