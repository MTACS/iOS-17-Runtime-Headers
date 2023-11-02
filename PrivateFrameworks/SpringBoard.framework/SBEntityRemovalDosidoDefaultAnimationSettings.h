
@interface SBEntityRemovalDosidoDefaultAnimationSettings : PTSettings {
    double  _fromViewAlphaAnimationDelay;
    SBFFluidBehaviorSettings * _fromViewAlphaAnimationSettings;
    double  _fromViewFinalAlpha;
    double  _fromViewFinalBlurRadius;
    double  _fromViewFinalScale;
    SBFFluidBehaviorSettings * _fromViewScaleAnimationSettings;
    SBFFluidBehaviorSettings * _toViewDimmingViewAlphaAnimationSettings;
    double  _toViewDimmingViewFadeOutDelay;
    double  _toViewInitialBlurProgress;
    double  _toViewInitialDimmingAlpha;
    double  _toViewInitialPushInScale;
    double  _toViewScaleAndAlphaResetAnimationDelay;
    SBFFluidBehaviorSettings * _toViewScaleAndAlphaResetAnimationSettings;
    double  _toViewScreenInitialAlpha;
    SBFFluidBehaviorSettings * _toViewWallpaperScaleAnimationSettings;
}

@property (nonatomic) double fromViewAlphaAnimationDelay;
@property (nonatomic, retain) SBFFluidBehaviorSettings *fromViewAlphaAnimationSettings;
@property (nonatomic) double fromViewFinalAlpha;
@property (nonatomic) double fromViewFinalBlurRadius;
@property (nonatomic) double fromViewFinalScale;
@property (nonatomic, retain) SBFFluidBehaviorSettings *fromViewScaleAnimationSettings;
@property (nonatomic, retain) SBFFluidBehaviorSettings *toViewDimmingViewAlphaAnimationSettings;
@property (nonatomic) double toViewDimmingViewFadeOutDelay;
@property (nonatomic) double toViewInitialBlurProgress;
@property (nonatomic) double toViewInitialDimmingAlpha;
@property (nonatomic) double toViewInitialPushInScale;
@property (nonatomic) double toViewScaleAndAlphaResetAnimationDelay;
@property (nonatomic, retain) SBFFluidBehaviorSettings *toViewScaleAndAlphaResetAnimationSettings;
@property (nonatomic) double toViewScreenInitialAlpha;
@property (nonatomic, retain) SBFFluidBehaviorSettings *toViewWallpaperScaleAnimationSettings;

+ (id)_settingsModule;
+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (double)fromViewAlphaAnimationDelay;
- (id)fromViewAlphaAnimationSettings;
- (double)fromViewFinalAlpha;
- (double)fromViewFinalBlurRadius;
- (double)fromViewFinalScale;
- (id)fromViewScaleAnimationSettings;
- (void)setDefaultValues;
- (void)setFromViewAlphaAnimationDelay:(double)arg1;
- (void)setFromViewAlphaAnimationSettings:(id)arg1;
- (void)setFromViewFinalAlpha:(double)arg1;
- (void)setFromViewFinalBlurRadius:(double)arg1;
- (void)setFromViewFinalScale:(double)arg1;
- (void)setFromViewScaleAnimationSettings:(id)arg1;
- (void)setToViewDimmingViewAlphaAnimationSettings:(id)arg1;
- (void)setToViewDimmingViewFadeOutDelay:(double)arg1;
- (void)setToViewInitialBlurProgress:(double)arg1;
- (void)setToViewInitialDimmingAlpha:(double)arg1;
- (void)setToViewInitialPushInScale:(double)arg1;
- (void)setToViewScaleAndAlphaResetAnimationDelay:(double)arg1;
- (void)setToViewScaleAndAlphaResetAnimationSettings:(id)arg1;
- (void)setToViewScreenInitialAlpha:(double)arg1;
- (void)setToViewWallpaperScaleAnimationSettings:(id)arg1;
- (id)toViewDimmingViewAlphaAnimationSettings;
- (double)toViewDimmingViewFadeOutDelay;
- (double)toViewInitialBlurProgress;
- (double)toViewInitialDimmingAlpha;
- (double)toViewInitialPushInScale;
- (double)toViewScaleAndAlphaResetAnimationDelay;
- (id)toViewScaleAndAlphaResetAnimationSettings;
- (double)toViewScreenInitialAlpha;
- (id)toViewWallpaperScaleAnimationSettings;

@end
