
@interface SBEntityRemovalMedusaSlideOutAnimationSettings : PTSettings {
    SBEntityRemovalMedusaDefaultAnimationSettings * _defaultAnimationSettings;
    double  _toBeMadeFullScreenPushInScale;
    double  _toBeMadeFullScreenScaleResetAnimationDelay;
    SBFFluidBehaviorSettings * _toBeMadeFullscreenPushInScaleAnimationSettings;
    SBFFluidBehaviorSettings * _toBeMadeFullscreenScaleResetAnimationSettings;
    double  _toBeRemovedSlideOutAnimationDelay;
    SBFFluidBehaviorSettings * _toBeRemovedSlideOutAnimationSettings;
    double  _toBeRemovedSlideOutHeightOffsetMultiplier;
}

@property (nonatomic, retain) SBEntityRemovalMedusaDefaultAnimationSettings *defaultAnimationSettings;
@property (nonatomic) double toBeMadeFullScreenPushInScale;
@property (nonatomic) double toBeMadeFullScreenScaleResetAnimationDelay;
@property (nonatomic, retain) SBFFluidBehaviorSettings *toBeMadeFullscreenPushInScaleAnimationSettings;
@property (nonatomic, retain) SBFFluidBehaviorSettings *toBeMadeFullscreenScaleResetAnimationSettings;
@property (nonatomic) double toBeRemovedSlideOutAnimationDelay;
@property (nonatomic, retain) SBFFluidBehaviorSettings *toBeRemovedSlideOutAnimationSettings;
@property (nonatomic) double toBeRemovedSlideOutHeightOffsetMultiplier;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (id)defaultAnimationSettings;
- (void)setDefaultAnimationSettings:(id)arg1;
- (void)setDefaultValues;
- (void)setToBeMadeFullScreenPushInScale:(double)arg1;
- (void)setToBeMadeFullScreenScaleResetAnimationDelay:(double)arg1;
- (void)setToBeMadeFullscreenPushInScaleAnimationSettings:(id)arg1;
- (void)setToBeMadeFullscreenScaleResetAnimationSettings:(id)arg1;
- (void)setToBeRemovedSlideOutAnimationDelay:(double)arg1;
- (void)setToBeRemovedSlideOutAnimationSettings:(id)arg1;
- (void)setToBeRemovedSlideOutHeightOffsetMultiplier:(double)arg1;
- (double)toBeMadeFullScreenPushInScale;
- (double)toBeMadeFullScreenScaleResetAnimationDelay;
- (id)toBeMadeFullscreenPushInScaleAnimationSettings;
- (id)toBeMadeFullscreenScaleResetAnimationSettings;
- (double)toBeRemovedSlideOutAnimationDelay;
- (id)toBeRemovedSlideOutAnimationSettings;
- (double)toBeRemovedSlideOutHeightOffsetMultiplier;

@end
