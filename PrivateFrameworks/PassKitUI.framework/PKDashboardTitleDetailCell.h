
@interface PKDashboardTitleDetailCell : PKDashboardCollectionViewCell {
    unsigned long long  _accessory;
    UIColor * _defaultTitleTextColor;
    NSString * _detailText;
    UIColor * _detailTextColor;
    UIImageView * _disclosureView;
    NSNumberFormatter * _numberFormatter;
    UIActivityIndicatorView * _spinnerView;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
    NSString * _titleText;
    UIColor * _titleTextColor;
}

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isTemplateLayout:(bool)arg2;
- (void)_updateDefaultValues;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setAccessory:(unsigned long long)arg1;
- (void)setDetailTextColor:(id)arg1;
- (void)setTitleText:(id)arg1 detail:(id)arg2;
- (void)setTitleTextColor:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
