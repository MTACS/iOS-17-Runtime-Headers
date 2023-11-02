
@interface PKDashboardStackedImageCollectionViewCell : PKDashboardCollectionViewCell {
    UIImage * _icon;
    UIImageView * _iconImageView;
    NSString * _subtitle;
    UILabel * _subtitleLabel;
    UILabel * _tertiaryLabel;
    NSString * _tertiaryText;
    NSString * _title;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIImage *icon;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *tertiaryText;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (double)_contentHeightWithWidth:(double)arg1;
- (double)_maxWidthForTransactionCellInWidth:(double)arg1;
- (id)icon;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setIcon:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTertiaryText:(id)arg1;
- (void)setTitle:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)subtitle;
- (id)tertiaryText;
- (id)title;

@end
