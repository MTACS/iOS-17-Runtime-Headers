
@interface PKInstallmentPlanTotalFinancedCollectionViewCell : PKDashboardCollectionViewCell {
    PKCurrencyAmount * _amount;
    UILabel * _amountLabel;
    UIImageView * _disclosureView;
    bool  _isTemplateLayout;
    UILabel * _subtitleLabel;
    NSString * _subtitleText;
    NSString * _title;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) PKCurrencyAmount *amount;
@property (nonatomic, copy) NSString *subtitleText;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)amount;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setAmount:(id)arg1;
- (void)setSubtitleText:(id)arg1;
- (void)setTitle:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)subtitleText;
- (id)title;

@end
