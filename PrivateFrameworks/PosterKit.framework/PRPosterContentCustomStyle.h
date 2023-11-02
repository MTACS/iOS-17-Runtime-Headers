
@interface PRPosterContentCustomStyle : NSObject <PRPosterContentStyle, PRPosterContentStylePrivate> {
    NSString * _identifier;
    NSString * _localizedName;
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
@property (nonatomic, readonly, copy) NSString *nonVariatedIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly, copy) UIColor *vibrancyEffectColor;
@property (nonatomic, readonly) long long vibrancyEffectType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowsVariation;
- (void)applyStyleWithRenderer:(id)arg1;
- (id)colors;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)desiresVibrancyEffectView;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 localizedName:(id)arg2;
- (bool)isSupportedBackgroundStyle;
- (bool)isSupportedSystemStyle;
- (id)localizedName;
- (id)lutIdentifier;
- (id)nonVariatedIdentifier;
- (unsigned long long)type;
- (id)vibrancyEffectColor;
- (long long)vibrancyEffectType;

@end
