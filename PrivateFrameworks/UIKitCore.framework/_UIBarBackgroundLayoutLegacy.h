
@interface _UIBarBackgroundLayoutLegacy : _UIBarBackgroundLayout {
    NSArray * _backgroundEffects;
    UIImage * _backgroundImage;
    UIColor * _backgroundTintColor;
    bool  _hasShadow;
    UIColor * _shadowColor;
    UIVibrancyEffect * _shadowEffect;
    UIImage * _shadowImage;
    double  _topInset;
    long long  _translucence;
}

@property (nonatomic) bool disableTinting;
@property (nonatomic, readonly) bool hasBackgroundEffect;
@property (nonatomic, readonly) UIImage *shadowImage;
@property (nonatomic) double topInset;

- (void).cxx_destruct;
- (id)_blurWithStyle:(long long)arg1 tint:(id)arg2;
- (id)_colorForStyle:(long long)arg1;
- (double)bg1Alpha;
- (id)bg1Color;
- (id)bg1Effects;
- (bool)bg1HasShadow;
- (id)bg1Image;
- (double)bg1ImageAlpha;
- (double)bg1ShadowAlpha;
- (id)bg1ShadowColor;
- (id)bg1ShadowEffect;
- (id)bg1ShadowImage;
- (double)bgInset;
- (void)configureAsTransparent;
- (void)configureBackgroundColor:(id)arg1 barStyle:(long long)arg2 translucent:(bool)arg3;
- (void)configureEffectForStyle:(long long)arg1 backgroundTintColor:(id)arg2 forceOpaque:(bool)arg3;
- (void)configureImage:(id)arg1 forceOpaque:(bool)arg2 backgroundTintColor:(id)arg3;
- (void)configureImage:(id)arg1 forceOpaque:(bool)arg2 barStyle:(long long)arg3;
- (void)configureImage:(id)arg1 forceTranslucent:(bool)arg2;
- (void)configureShadowForBarStyle:(long long)arg1;
- (void)configureShadowImage:(id)arg1;
- (void)configureWithEffects:(id)arg1;
- (void)configureWithoutShadow;
- (void)describeInto:(id)arg1;
- (bool)hasBackgroundEffect;
- (id)initWithLayout:(id)arg1;
- (void)setTopInset:(double)arg1;
- (void)setUseExplicitGeometry:(bool)arg1;
- (id)shadowImage;
- (bool)shouldUseExplicitGeometry;
- (double)topInset;

@end
