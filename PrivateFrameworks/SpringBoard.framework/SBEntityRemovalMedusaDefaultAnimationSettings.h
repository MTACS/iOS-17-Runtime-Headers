
@interface SBEntityRemovalMedusaDefaultAnimationSettings : PTSettings {
    double  _toBeMadeFullscreenFrameAnimationDelay;
    SBFFluidBehaviorSettings * _toBeMadeFullscreenFrameAnimationSettings;
    SBFFluidBehaviorSettings * _toBeRemovedAlphaAnimationSettings;
    double  _toBeRemovedFinalAlpha;
    double  _toBeRemovedFinalBlurRadius;
    double  _toBeRemovedFinalScale;
    SBFFluidBehaviorSettings * _toBeRemovedScaleAnimationSettings;
}

@property (nonatomic) double toBeMadeFullscreenFrameAnimationDelay;
@property (nonatomic, retain) SBFFluidBehaviorSettings *toBeMadeFullscreenFrameAnimationSettings;
@property (nonatomic, retain) SBFFluidBehaviorSettings *toBeRemovedAlphaAnimationSettings;
@property (nonatomic) double toBeRemovedFinalAlpha;
@property (nonatomic) double toBeRemovedFinalBlurRadius;
@property (nonatomic) double toBeRemovedFinalScale;
@property (nonatomic, retain) SBFFluidBehaviorSettings *toBeRemovedScaleAnimationSettings;

+ (id)_settingsModule;
+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (void)setDefaultValues;
- (void)setToBeMadeFullscreenFrameAnimationDelay:(double)arg1;
- (void)setToBeMadeFullscreenFrameAnimationSettings:(id)arg1;
- (void)setToBeRemovedAlphaAnimationSettings:(id)arg1;
- (void)setToBeRemovedFinalAlpha:(double)arg1;
- (void)setToBeRemovedFinalBlurRadius:(double)arg1;
- (void)setToBeRemovedFinalScale:(double)arg1;
- (void)setToBeRemovedScaleAnimationSettings:(id)arg1;
- (double)toBeMadeFullscreenFrameAnimationDelay;
- (id)toBeMadeFullscreenFrameAnimationSettings;
- (id)toBeRemovedAlphaAnimationSettings;
- (double)toBeRemovedFinalAlpha;
- (double)toBeRemovedFinalBlurRadius;
- (double)toBeRemovedFinalScale;
- (id)toBeRemovedScaleAnimationSettings;

@end
