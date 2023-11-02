
@interface PKDashboardTextCollectionViewCell : PKDashboardCollectionViewCell {
    UIColor * _accessoryColor;
    UIImage * _accessoryImage;
    UIImageView * _accessoryImageView;
    UIImageView * _disclosureView;
    bool  _hideDisclosure;
    UIImage * _iconImage;
    UIImageView * _iconImageView;
    NSString * _subtitle;
    UIColor * _subtitleColor;
    UIImage * _subtitleImage;
    UIImageView * _subtitleImageView;
    UILabel * _subtitleLabel;
    long long  _textLayoutStyle;
    NSString * _title;
    UIColor * _titleColor;
    UIImage * _titleImage;
    UIImageView * _titleImageView;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIColor *accessoryColor;
@property (nonatomic, retain) UIImage *accessoryImage;
@property (nonatomic) bool hideDisclosure;
@property (nonatomic, retain) UIImage *iconImage;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, retain) UIColor *subtitleColor;
@property (nonatomic, retain) UIImage *subtitleImage;
@property (nonatomic) long long textLayoutStyle;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UIColor *titleColor;
@property (nonatomic, retain) UIImage *titleImage;

- (void).cxx_destruct;
- (id)_defaultAccessoryColor;
- (id)_defaultSubtitleColor;
- (id)_defaultTitleColor;
- (double)_maxWidthForTransactionCellInWidth:(double)arg1;
- (void)_setAccessoryImageAfterApplyingSymbolConfiguration;
- (void)_setFonts;
- (void)_setIconImageAfterApplyingSymbolConfiguration;
- (void)_setSubtitleImageAfterApplyingSymbolConfiguration;
- (void)_setTitleImageAfterApplyingSymbolConfiguration;
- (id)_subtitleFont;
- (id)_titleFont;
- (id)accessoryColor;
- (id)accessoryImage;
- (bool)hideDisclosure;
- (id)iconImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setAccessoryColor:(id)arg1;
- (void)setAccessoryImage:(id)arg1;
- (void)setHideDisclosure:(bool)arg1;
- (void)setIconImage:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSubtitleColor:(id)arg1;
- (void)setSubtitleImage:(id)arg1;
- (void)setTextLayoutStyle:(long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleColor:(id)arg1;
- (void)setTitleImage:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)subtitle;
- (id)subtitleColor;
- (id)subtitleImage;
- (long long)textLayoutStyle;
- (id)title;
- (id)titleColor;
- (id)titleImage;

@end
