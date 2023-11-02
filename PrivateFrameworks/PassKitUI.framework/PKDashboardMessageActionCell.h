
@interface PKDashboardMessageActionCell : UITableViewCell {
    unsigned long long  _accessory;
    UIImageView * _disclosureView;
    UIActivityIndicatorView * _spinnerView;
    UIFont * _titleFont;
    UILabel * _titleLabel;
    NSString * _titleText;
    UIColor * _titleTextColor;
}

@property (nonatomic) unsigned long long accessory;
@property (nonatomic, copy) UIFont *titleFont;
@property (nonatomic, copy) NSString *titleText;
@property (nonatomic, retain) UIColor *titleTextColor;

- (void).cxx_destruct;
- (void)_commonInit;
- (void)_configureView;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isTemplateLayout:(bool)arg2;
- (unsigned long long)accessory;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setAccessory:(unsigned long long)arg1;
- (void)setTitleFont:(id)arg1;
- (void)setTitleText:(id)arg1;
- (void)setTitleTextColor:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)titleFont;
- (id)titleText;
- (id)titleTextColor;

@end
