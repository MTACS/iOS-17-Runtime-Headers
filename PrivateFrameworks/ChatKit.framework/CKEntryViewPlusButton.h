
@interface CKEntryViewPlusButton : UIView <UIPointerInteractionDelegate> {
    void backgroundBlurRadiusDarkMode;
    void backgroundBlurRadiusLightMode;
    void backgroundCompositingFilterForDarkMode;
    void backgroundCompositingFilterForLightMode;
    void backgroundView;
    void backgroundViewContentView;
    void blurContainerView;
    void buttonView;
    void clippingView;
    void enabled;
    void iconImageView;
    void plusButtonDelegate;
}

@property (nonatomic) bool automaticallyAdjustsBackgroundCornerRadius;
@property (nonatomic) double backgroundBlurRadiusDarkMode;
@property (nonatomic) double backgroundBlurRadiusLightMode;
@property (nonatomic) double backgroundBlurRasterizationPercentage;
@property (nonatomic, retain) CAFilter *backgroundCompositingFilterForDarkMode;
@property (nonatomic, retain) CAFilter *backgroundCompositingFilterForLightMode;
@property (nonatomic) double backgroundCornerRadius;
@property (nonatomic, readonly) UIButton *button;
@property (nonatomic) bool enabled;
@property (nonatomic, retain) UIColor *plusButtonBackgroundColor;
@property (nonatomic) double plusSymbolOpacity;

- (void).cxx_destruct;
- (bool)automaticallyAdjustsBackgroundCornerRadius;
- (double)backgroundBlurRadiusDarkMode;
- (double)backgroundBlurRadiusLightMode;
- (double)backgroundBlurRasterizationPercentage;
- (id)backgroundCompositingFilterForDarkMode;
- (id)backgroundCompositingFilterForLightMode;
- (double)backgroundCornerRadius;
- (id)button;
- (bool)enabled;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)plusButtonBackgroundColor;
- (double)plusSymbolOpacity;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)setAutomaticallyAdjustsBackgroundCornerRadius:(bool)arg1;
- (void)setBackgroundBlurRadiusDarkMode:(double)arg1;
- (void)setBackgroundBlurRadiusLightMode:(double)arg1;
- (void)setBackgroundBlurRasterizationPercentage:(double)arg1;
- (void)setBackgroundCompositingFilterForDarkMode:(id)arg1;
- (void)setBackgroundCompositingFilterForLightMode:(id)arg1;
- (void)setBackgroundCornerRadius:(double)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setPlusButtonBackgroundColor:(id)arg1;
- (void)setPlusSymbolOpacity:(double)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
