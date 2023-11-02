
@interface SBMutableStatusBarSettings : SBStatusBarSettings

@property (nonatomic, retain) NSNumber *alpha;
@property (nonatomic, copy) NSSet *backgroundActivitiesToSuppress;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) long long style;

- (void)applySettings:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setAlpha:(id)arg1;
- (void)setBackgroundActivitiesToSuppress:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setStyle:(long long)arg1;

@end
