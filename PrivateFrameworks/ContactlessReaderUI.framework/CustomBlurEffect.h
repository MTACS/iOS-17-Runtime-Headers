
@interface CustomBlurEffect : UIBlurEffect {
    NSNumber * _customBlurRadius;
    UIColor * _customColorTint;
    NSNumber * _customColorTintAlpha;
    NSNumber * _customSaturation;
}

@property (nonatomic, retain) NSNumber *customBlurRadius;
@property (nonatomic, retain) UIColor *customColorTint;
@property (nonatomic, retain) NSNumber *customColorTintAlpha;
@property (nonatomic, retain) NSNumber *customSaturation;

+ (id)effectWithStyle:(long long)arg1;

- (void).cxx_destruct;
- (id)customBlurRadius;
- (id)customColorTint;
- (id)customColorTintAlpha;
- (id)customSaturation;
- (id)effectSettings;
- (void)setCustomBlurRadius:(id)arg1;
- (void)setCustomColorTint:(id)arg1;
- (void)setCustomColorTintAlpha:(id)arg1;
- (void)setCustomSaturation:(id)arg1;

@end
