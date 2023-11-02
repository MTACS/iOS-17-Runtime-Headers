
@interface HUGridWelcomeUIBannerCellLayoutOptions : HUGridBannerCellLayoutOptions {
    UIColor * _continueButtonColor;
    UIColor * _descriptionLabelColor;
    UIColor * _footerLabelColor;
    UIColor * _titleLabelColor;
}

@property (nonatomic, retain) UIColor *continueButtonColor;
@property (nonatomic, retain) UIColor *descriptionLabelColor;
@property (nonatomic, retain) UIColor *footerLabelColor;
@property (nonatomic, retain) UIColor *titleLabelColor;

+ (id)defaultOptionsForCellSizeSubclass:(long long)arg1;

- (void).cxx_destruct;
- (id)continueButtonColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionLabelColor;
- (id)footerLabelColor;
- (void)setContinueButtonColor:(id)arg1;
- (void)setDescriptionLabelColor:(id)arg1;
- (void)setFooterLabelColor:(id)arg1;
- (void)setTitleLabelColor:(id)arg1;
- (id)titleLabelColor;

@end
