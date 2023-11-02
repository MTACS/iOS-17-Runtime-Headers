
@interface UIBarAppearance : NSObject <NSCopying, NSSecureCoding> {
    _UIBarBackgroundAppearanceData * _backgroundData;
    long long  _batchedChanges;
    bool  _batchingChanges;
    <_UIBarAppearanceChangeObserver> * _changeObserver;
    long long  _idiom;
}

@property (readonly) bool _hasTransparentBackground;
@property (setter=_setSelectedItemVibrancyEffect:, nonatomic, copy) UIVibrancyEffect *_selectedItemVibrancyEffect;
@property (nonatomic, copy) UIColor *backgroundColor;
@property (nonatomic, copy) UIBlurEffect *backgroundEffect;
@property (nonatomic, copy) NSArray *backgroundEffects;
@property (nonatomic, retain) UIImage *backgroundImage;
@property (nonatomic) long long backgroundImageContentMode;
@property (nonatomic, readonly) long long idiom;
@property (nonatomic, copy) UIColor *shadowColor;
@property (nonatomic, copy) UIVibrancyEffect *shadowEffect;
@property (nonatomic, retain) UIImage *shadowImage;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_backButtonAppearance;
- (id)_backButtonAppearanceData;
- (id)_backgroundData;
- (id)_barTitleData;
- (bool)_checkEqualTo:(id)arg1;
- (id)_compactInlineTabButtonAppearanceData;
- (void)_completeInit;
- (void)_copyFromAppearance:(id)arg1;
- (void)_decodeFromCoder:(id)arg1;
- (void)_describeInto:(id)arg1;
- (id)_doneButtonAppearance;
- (id)_doneButtonAppearanceData;
- (bool)_hasTransparentBackground;
- (unsigned long long)_hashInto:(unsigned long long)arg1;
- (id)_inlineTabButtonAppearanceData;
- (id)_plainButtonAppearance;
- (id)_plainButtonAppearanceData;
- (id)_selectedItemVibrancyEffect;
- (void)_setSelectedItemVibrancyEffect:(id)arg1;
- (void)_setupDefaults;
- (id)_stackedTabButtonAppearanceData;
- (id)_tabLayoutAppearanceData;
- (id)backgroundColor;
- (id)backgroundEffect;
- (id)backgroundEffects;
- (id)backgroundImage;
- (long long)backgroundImageContentMode;
- (void)configureWithDefaultBackground;
- (void)configureWithDefaultShadow;
- (void)configureWithOpaqueBackground;
- (void)configureWithTransparentBackground;
- (void)configureWithoutShadow;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (long long)idiom;
- (id)init;
- (id)initWithBarAppearance:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdiom:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBackgroundEffect:(id)arg1;
- (void)setBackgroundEffects:(id)arg1;
- (void)setBackgroundImage:(id)arg1;
- (void)setBackgroundImageContentMode:(long long)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setShadowEffect:(id)arg1;
- (void)setShadowImage:(id)arg1;
- (id)shadowColor;
- (id)shadowEffect;
- (id)shadowImage;

@end
