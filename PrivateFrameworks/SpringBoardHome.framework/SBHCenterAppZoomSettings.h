
@interface SBHCenterAppZoomSettings : SBHCenterZoomSettings {
    SBFAnimationSettings * _appFadeSettings;
    double  _appHeadStart;
    SBFAnimationSettings * _appZoomSettings;
}

@property (nonatomic, retain) SBFAnimationSettings *appFadeSettings;
@property (nonatomic) double appHeadStart;
@property (nonatomic, retain) SBFAnimationSettings *appZoomSettings;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (id)appFadeSettings;
- (double)appHeadStart;
- (id)appZoomSettings;
- (void)setAppFadeSettings:(id)arg1;
- (void)setAppHeadStart:(double)arg1;
- (void)setAppZoomSettings:(id)arg1;
- (void)setDefaultValues;

@end
