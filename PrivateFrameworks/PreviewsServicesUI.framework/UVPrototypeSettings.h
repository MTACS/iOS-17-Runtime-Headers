
@interface UVPrototypeSettings : PTSettings {
    double  _crashAnimationDuration;
    double  _crashFadeOutOpacity;
    bool  _forceMetricsView;
    bool  _showDebugUI;
}

@property (nonatomic) double crashAnimationDuration;
@property (nonatomic) double crashFadeOutOpacity;
@property (nonatomic) bool forceMetricsView;
@property (nonatomic) bool showDebugUI;

+ (id)settingsControllerModule;

- (double)crashAnimationDuration;
- (double)crashFadeOutOpacity;
- (bool)forceMetricsView;
- (void)setCrashAnimationDuration:(double)arg1;
- (void)setCrashFadeOutOpacity:(double)arg1;
- (void)setDefaultValues;
- (void)setForceMetricsView:(bool)arg1;
- (void)setShowDebugUI:(bool)arg1;
- (bool)showDebugUI;

@end
