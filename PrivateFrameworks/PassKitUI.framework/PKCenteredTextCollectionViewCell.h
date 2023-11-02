
@interface PKCenteredTextCollectionViewCell : PKDashboardCollectionViewCell {
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
}

@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)resetFonts;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateTitleTextColor;

@end
