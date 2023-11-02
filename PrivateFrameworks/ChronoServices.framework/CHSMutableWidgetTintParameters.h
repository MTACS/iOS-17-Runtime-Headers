
@interface CHSMutableWidgetTintParameters : CHSWidgetTintParameters

@property (nonatomic) bool accentedAlternateBackground;
@property (nonatomic) long long fallbackFilterStyle;
@property (nonatomic) long long filterStyle;
@property (nonatomic) double fraction;
@property (nonatomic, retain) BSColor *primaryTintColor;
@property (nonatomic, retain) BSColor *secondaryTintColor;

- (void)setAccentedAlternateBackground:(bool)arg1;
- (void)setFallbackFilterStyle:(long long)arg1;
- (void)setFilterStyle:(long long)arg1;
- (void)setFraction:(double)arg1;
- (void)setPrimaryTintColor:(id)arg1;
- (void)setSecondaryTintColor:(id)arg1;

@end
