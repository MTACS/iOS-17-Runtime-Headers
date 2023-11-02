
@interface TLKSplitTitleContainer : UIView {
    TLKLabel * _centerLeadingTitleLabel;
    TLKLabel * _centerTrailingTitleLabel;
    TLKLabel * _titleLabel;
    TLKStackView * _titleStackView;
    bool  _useLargeTitle;
}

@property (nonatomic, retain) TLKLabel *centerLeadingTitleLabel;
@property (nonatomic, retain) TLKLabel *centerTrailingTitleLabel;
@property (nonatomic, retain) TLKLabel *titleLabel;
@property (nonatomic, retain) TLKStackView *titleStackView;
@property bool useLargeTitle;

+ (double)widthForString:(id)arg1 font:(id)arg2;

- (void).cxx_destruct;
- (id)centerLeadingTitleLabel;
- (id)centerTrailingTitleLabel;
- (struct CGSize { double x1; double x2; })effectiveLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (id)init;
- (void)layoutSubviews;
- (void)setCenterLeadingTitleLabel:(id)arg1;
- (void)setCenterTrailingTitleLabel:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTitleStackView:(id)arg1;
- (void)setUseLargeTitle:(bool)arg1;
- (id)titleFont;
- (id)titleLabel;
- (bool)titleLabelsFitInWidth:(double)arg1 pointSize:(double)arg2;
- (id)titleStackView;
- (bool)useLargeTitle;

@end
