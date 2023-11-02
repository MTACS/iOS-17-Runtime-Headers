
@interface _UIBarBackgroundAppearanceData : _UIBarAppearanceData {
    UIColor * _backgroundColor;
    NSArray * _backgroundEffects;
    UIImage * _backgroundImage;
    long long  _backgroundImageContentMode;
    struct { 
        unsigned int backgroundEffectsAreSingular : 1; 
        unsigned int hasBackground : 1; 
        unsigned int hasShadow : 1; 
        unsigned int needsToCalculateVibrantEffect : 1; 
    }  _flags;
    UIVibrancyEffect * _overrideTabBarVibrancyEffect;
    UIColor * _shadowColor;
    UIVibrancyEffect * _shadowEffect;
    UIImage * _shadowImage;
    UIVibrancyEffect * _shadowViewEffect;
    UIVibrancyEffect * _tabBarVibrancyEffect;
}

@property (nonatomic, copy) UIColor *backgroundColor;
@property (nonatomic, copy) UIBlurEffect *backgroundEffect;
@property (nonatomic, copy) NSArray *backgroundEffects;
@property (nonatomic, retain) UIImage *backgroundImage;
@property (nonatomic) long long backgroundImageContentMode;
@property (nonatomic, readonly) bool hasBackground;
@property (nonatomic, readonly) bool hasShadow;
@property (nonatomic, retain) UIVibrancyEffect *overrideTabBarVibrancyEffect;
@property (nonatomic, copy) UIColor *shadowColor;
@property (nonatomic, copy) UIVibrancyEffect *shadowEffect;
@property (nonatomic, retain) UIImage *shadowImage;
@property (nonatomic, readonly) UIColor *shadowViewBackgroundColor;
@property (nonatomic, readonly) UIVibrancyEffect *shadowViewEffect;
@property (nonatomic, readonly) UIColor *shadowViewTintColor;
@property (nonatomic, readonly) UIVibrancyEffect *tabBarVibrancyEffect;

+ (id)decodeFromCoder:(id)arg1 prefix:(id)arg2;
+ (id)opaqueBackgroundData;
+ (id)standardBackgroundData;
+ (id)transparentBackgroundData;

- (void).cxx_destruct;
- (void)_updateBackgroundFlags;
- (void)_updateShadowFlags;
- (id)backgroundColor;
- (id)backgroundEffect;
- (id)backgroundEffects;
- (id)backgroundImage;
- (long long)backgroundImageContentMode;
- (long long)behaviorForTransitioningTo:(id)arg1;
- (bool)checkEqualTo:(id)arg1;
- (void)configureWithDefaultShadow;
- (void)configureWithoutShadow;
- (void)describeInto:(id)arg1;
- (void)encodeToCoder:(id)arg1 prefix:(id)arg2;
- (bool)hasBackground;
- (bool)hasShadow;
- (long long)hashInto:(long long)arg1;
- (id)overrideTabBarVibrancyEffect;
- (id)replicate;
- (void)setBackgroundColor:(id)arg1;
- (void)setBackgroundEffect:(id)arg1;
- (void)setBackgroundEffects:(id)arg1;
- (void)setBackgroundImage:(id)arg1;
- (void)setBackgroundImageContentMode:(long long)arg1;
- (void)setOverrideTabBarVibrancyEffect:(id)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setShadowEffect:(id)arg1;
- (void)setShadowImage:(id)arg1;
- (id)shadowColor;
- (id)shadowEffect;
- (id)shadowImage;
- (id)shadowViewBackgroundColor;
- (id)shadowViewEffect;
- (id)shadowViewTintColor;
- (id)tabBarVibrancyEffect;

@end
