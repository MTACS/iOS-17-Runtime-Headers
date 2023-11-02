
@interface HUWelcomeUIBannerView : HUBannerView {
    UIImageView * _backgroundImageView;
    NSArray * _layoutConstraints;
    UIView * _welcomeFooterView;
}

@property (nonatomic, retain) UIImageView *backgroundImageView;
@property (nonatomic, retain) NSArray *layoutConstraints;
@property (nonatomic, retain) UIView *welcomeFooterView;

- (void).cxx_destruct;
- (void)_subclass_updateConstraints;
- (id)backgroundImageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutConstraints;
- (void)layoutOptionsDidChange;
- (void)setBackgroundImageView:(id)arg1;
- (void)setLayoutConstraints:(id)arg1;
- (void)setWelcomeFooterView:(id)arg1;
- (void)updateUIWithAnimation:(bool)arg1;
- (id)welcomeFooterView;

@end
