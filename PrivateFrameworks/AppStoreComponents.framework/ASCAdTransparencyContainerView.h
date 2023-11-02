
@interface ASCAdTransparencyContainerView : UIView {
    ASCAdTransparencyButtonView * _adTransparencyButton;
    UIVisualEffectView * _backgroundView;
    NSString * _developerName;
    UILabel * _titleLabel;
}

@property (nonatomic, readonly) ASCAdTransparencyButtonView *adTransparencyButton;
@property (getter=isBackgroundHidden, nonatomic) bool backgroundHidden;
@property (nonatomic, retain) UIVisualEffectView *backgroundView;
@property (nonatomic, copy) NSString *developerName;
@property (nonatomic, retain) UILabel *titleLabel;

+ (double)buttonTextPadding;
+ (id)developerNameFontCompatibleWithTraitCollection:(id)arg1;
+ (double)edgePadding;

- (void).cxx_destruct;
- (id)adTransparencyButton;
- (void)addAdTransparencyTarget:(id)arg1 action:(SEL)arg2;
- (id)backgroundView;
- (id)developerName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isBackgroundHidden;
- (void)layoutSubviews;
- (void)setBackgroundHidden:(bool)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setDeveloperName:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)titleLabel;
- (void)updateFont;

@end
