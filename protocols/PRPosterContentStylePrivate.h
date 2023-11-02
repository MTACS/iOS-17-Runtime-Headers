
@protocol PRPosterContentStylePrivate <PRPosterContentStyle>

@required

- (bool)desiresVibrancyEffectView;
- (bool)isSupportedBackgroundStyle;
- (bool)isSupportedSystemStyle;
- (NSString *)lutIdentifier;
- (NSString *)nonVariatedIdentifier;
- (UIColor *)vibrancyEffectColor;
- (long long)vibrancyEffectType;

@end
