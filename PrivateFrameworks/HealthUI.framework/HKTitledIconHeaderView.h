
@interface HKTitledIconHeaderView : UIView {
    bool  _centersSubtitle;
    UIImage * _iconImage;
    UIImageView * _iconImageView;
    bool  _prefersLargeTitle;
    NSString * _subtitle;
    UILabel * _subtitleLabel;
    NSString * _title;
    UILabel * _titleLabel;
    NSString * _titleTextStyle;
}

@property (nonatomic) bool centersSubtitle;
@property (nonatomic, retain) UIImage *iconImage;
@property (nonatomic, copy) UIColor *iconImageTint;
@property (nonatomic, retain) UIImageView *iconImageView;
@property (nonatomic) bool prefersLargeTitle;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)_healthIconImage;
- (void)_positionSubtitleLabel;
- (struct CGSize { double x1; double x2; })_sizeThatFitsLabel:(id)arg1 containerSize:(struct CGSize { double x1; double x2; })arg2;
- (id)_titleFont;
- (void)_updateFont;
- (double)_verticalOffsetForSubtitle;
- (double)_verticalOffsetForTitle;
- (bool)centersSubtitle;
- (id)iconImage;
- (id)iconImageTint;
- (id)iconImageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (bool)prefersLargeTitle;
- (void)setCentersSubtitle:(bool)arg1;
- (void)setIconImage:(id)arg1;
- (void)setIconImageTint:(id)arg1;
- (void)setIconImageView:(id)arg1;
- (void)setLayoutMarginsWithTableView:(id)arg1;
- (void)setPrefersLargeTitle:(bool)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)subtitle;
- (id)subtitleLabel;
- (id)title;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;

@end
