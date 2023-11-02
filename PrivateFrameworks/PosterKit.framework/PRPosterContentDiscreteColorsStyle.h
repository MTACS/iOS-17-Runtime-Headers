
@interface PRPosterContentDiscreteColorsStyle : NSObject <PRPosterContentStyle, PRPosterContentStylePrivate, PRPosterContentStyleVariationSupporting> {
    NSArray * _colors;
    bool  _supportsVariation;
    double  _variation;
    bool  _vibrant;
}

@property (nonatomic, readonly) bool allowsVariation;
@property (nonatomic, readonly, copy) NSArray *colors;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool desiresVibrancyEffectView;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) bool isSupportedBackgroundStyle;
@property (nonatomic, readonly) bool isSupportedSystemStyle;
@property (nonatomic, readonly, copy) NSString *localizedName;
@property (nonatomic, readonly, copy) NSString *lutIdentifier;
@property (nonatomic, readonly) double maxVariation;
@property (nonatomic, readonly) double minVariation;
@property (nonatomic, readonly, copy) NSString *nonVariatedIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) double variation;
@property (nonatomic, readonly, copy) NSArray *variationAppliedColors;
@property (nonatomic, readonly, copy) UIColor *vibrancyEffectColor;
@property (nonatomic, readonly) long long vibrancyEffectType;
@property (getter=isVibrant, nonatomic, readonly) bool vibrant;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowsVariation;
- (void)applyStyleWithRenderer:(id)arg1;
- (id)colors;
- (id)copyWithVariation:(double)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)desiresVibrancyEffectView;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithColors:(id)arg1 vibrant:(bool)arg2 supportsVariation:(bool)arg3 variationValue:(double)arg4;
- (id)initWithOpaqueColors:(id)arg1;
- (id)initWithOpaqueColors:(id)arg1 variation:(double)arg2;
- (id)initWithVibrantColors:(id)arg1;
- (id)initWithVibrantColors:(id)arg1 variation:(double)arg2;
- (bool)isSupportedBackgroundStyle;
- (bool)isSupportedSystemStyle;
- (bool)isVibrant;
- (id)localizedName;
- (id)lutIdentifier;
- (double)maxVariation;
- (double)minVariation;
- (id)nonVariatedIdentifier;
- (unsigned long long)type;
- (double)variation;
- (id)variationAppliedColors;
- (id)vibrancyEffectColor;
- (long long)vibrancyEffectType;

@end
