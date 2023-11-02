
@interface _UIStatusBarImageView : UIImageView <_UIStatusBarDisplayable> {
    UIImage * _accessibilityHUDImage;
    long long  _fontStyle;
    double  _iconScale;
    bool  _useDisabledAppearanceForAccessibilityHUD;
}

@property (nonatomic, retain) UIImage *accessibilityHUDImage;
@property (nonatomic, readonly) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long fontStyle;
@property (readonly) unsigned long long hash;
@property (nonatomic) double iconScale;
@property (nonatomic, readonly) long long overriddenVerticalAlignment;
@property (nonatomic, readonly) bool prefersBaselineAlignment;
@property (nonatomic, readonly) bool prefersCenterVerticalAlignment;
@property (readonly) Class superclass;
@property (nonatomic) bool useDisabledAppearanceForAccessibilityHUD;
@property (nonatomic, readonly) bool wantsCrossfade;

- (void).cxx_destruct;
- (id)accessibilityHUDImage;
- (id)accessibilityHUDRepresentation;
- (void)applyStyleAttributes:(id)arg1;
- (long long)fontStyle;
- (double)iconScale;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)prefersBaselineAlignment;
- (void)setAccessibilityHUDImage:(id)arg1;
- (void)setFontStyle:(long long)arg1;
- (void)setIconScale:(double)arg1;
- (void)setUseDisabledAppearanceForAccessibilityHUD:(bool)arg1;
- (bool)useDisabledAppearanceForAccessibilityHUD;

@end
