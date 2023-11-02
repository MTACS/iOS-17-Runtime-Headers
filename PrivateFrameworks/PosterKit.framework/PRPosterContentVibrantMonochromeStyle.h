
@interface PRPosterContentVibrantMonochromeStyle : NSObject <PRPosterContentStyle, PRPosterContentStylePrivate> {
    unsigned long long  _backgroundType;
    UIColor * _effectiveColor;
}

@property (nonatomic, readonly) bool allowsVariation;
@property (nonatomic, readonly) unsigned long long backgroundType;
@property (nonatomic, readonly, copy) NSArray *colors;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool desiresVibrancyEffectView;
@property (nonatomic, readonly) UIColor *effectiveColor;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) bool isSupportedBackgroundStyle;
@property (nonatomic, readonly) bool isSupportedSystemStyle;
@property (nonatomic, readonly, copy) NSString *localizedName;
@property (nonatomic, readonly, copy) NSString *lutIdentifier;
@property (nonatomic, readonly, copy) NSString *nonVariatedIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly, copy) UIColor *vibrancyEffectColor;
@property (nonatomic, readonly) long long vibrancyEffectType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowsVariation;
- (void)applyStyleWithRenderer:(id)arg1;
- (unsigned long long)backgroundType;
- (id)colors;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)desiresVibrancyEffectView;
- (id)effectiveColor;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithBackgroundType:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isSupportedBackgroundStyle;
- (bool)isSupportedSystemStyle;
- (id)localizedName;
- (id)lutIdentifier;
- (id)nonVariatedIdentifier;
- (unsigned long long)type;
- (id)vibrancyEffectColor;
- (long long)vibrancyEffectType;

@end
