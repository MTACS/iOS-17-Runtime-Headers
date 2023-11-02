
@interface ASCAdTransparencyButtonView : UIButton

+ (id)adButtonTitleLocalized;
+ (id)adTransparencyButtonImage;
+ (id)buttonFontCompatibleWithTraitColletion:(id)arg1;
+ (id)selectedTitleColor;
+ (id)titleColor;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)onPreferredContentSizeCategoryChange;
- (void)setLoading:(bool)arg1;
- (void)updateFont;
- (void)updateInsets;

@end
