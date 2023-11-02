
@interface PKDashboardActionButtonCollectionViewCell : PKDashboardCollectionViewCell {
    NSString * _title;
    UILabel * _titleLabel;
}

@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (double)_contentHeightWithWidth:(double)arg1;
- (void)_layoutTitleLabel;
- (double)_maxWidthForTransactionCellInWidth:(double)arg1;
- (id)_textColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setTitle:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)title;

@end
