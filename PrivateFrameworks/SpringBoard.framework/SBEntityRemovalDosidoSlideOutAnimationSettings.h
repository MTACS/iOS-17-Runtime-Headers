
@interface SBEntityRemovalDosidoSlideOutAnimationSettings : PTSettings {
    SBEntityRemovalDosidoDefaultAnimationSettings * _defaultAnimationSettings;
    double  _fromViewSlideOutAnimationDelay;
    SBFFluidBehaviorSettings * _fromViewSlideOutAnimationSettings;
    double  _fromViewSlideOutHeightOffsetMultiplier;
}

@property (nonatomic, retain) SBEntityRemovalDosidoDefaultAnimationSettings *defaultAnimationSettings;
@property (nonatomic) double fromViewSlideOutAnimationDelay;
@property (nonatomic, retain) SBFFluidBehaviorSettings *fromViewSlideOutAnimationSettings;
@property (nonatomic) double fromViewSlideOutHeightOffsetMultiplier;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (id)defaultAnimationSettings;
- (double)fromViewSlideOutAnimationDelay;
- (id)fromViewSlideOutAnimationSettings;
- (double)fromViewSlideOutHeightOffsetMultiplier;
- (void)setDefaultAnimationSettings:(id)arg1;
- (void)setDefaultValues;
- (void)setFromViewSlideOutAnimationDelay:(double)arg1;
- (void)setFromViewSlideOutAnimationSettings:(id)arg1;
- (void)setFromViewSlideOutHeightOffsetMultiplier:(double)arg1;

@end
