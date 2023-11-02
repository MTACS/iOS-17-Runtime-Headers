
@interface SBBannerTransitionSettings : PTSettings {
    SBFFluidBehaviorSettings * _customBannerTransitionStylePoof;
    SBFFluidBehaviorSettings * _customBannerTransitionStyleSystemAction;
    double  _poofDismissedBlurRadius;
    double  _poofDismissedScale;
    double  _poofInitialBlurRadius;
    double  _poofInitialScale;
}

@property (nonatomic, retain) SBFFluidBehaviorSettings *customBannerTransitionStylePoof;
@property (nonatomic, retain) SBFFluidBehaviorSettings *customBannerTransitionStyleSystemAction;
@property (nonatomic) double poofDismissedBlurRadius;
@property (nonatomic) double poofDismissedScale;
@property (nonatomic) double poofInitialBlurRadius;
@property (nonatomic) double poofInitialScale;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (id)customBannerTransitionStylePoof;
- (id)customBannerTransitionStyleSystemAction;
- (double)poofDismissedBlurRadius;
- (double)poofDismissedScale;
- (double)poofInitialBlurRadius;
- (double)poofInitialScale;
- (void)setCustomBannerTransitionStylePoof:(id)arg1;
- (void)setCustomBannerTransitionStyleSystemAction:(id)arg1;
- (void)setDefaultValues;
- (void)setPoofDismissedBlurRadius:(double)arg1;
- (void)setPoofDismissedScale:(double)arg1;
- (void)setPoofInitialBlurRadius:(double)arg1;
- (void)setPoofInitialScale:(double)arg1;

@end
