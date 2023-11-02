
@interface SBReachabilitySettings : PTSettings {
    bool  _allowOnAllDevices;
    SBFFluidBehaviorSettings * _animationSettings;
    double  _homeGestureSwipeDownHeight;
    double  _homeGestureSwipeDownHysteresis;
    double  _reachabilityDefaultKeepAlive;
    double  _reachabilityInteractiveKeepAlive;
    double  _systemWideSwipeDownHeight;
    double  _yOffsetFactor;
}

@property (nonatomic) bool allowOnAllDevices;
@property (nonatomic, retain) SBFFluidBehaviorSettings *animationSettings;
@property (nonatomic) double homeGestureSwipeDownHeight;
@property (nonatomic) double homeGestureSwipeDownHysteresis;
@property (nonatomic) double reachabilityDefaultKeepAlive;
@property (nonatomic) double reachabilityInteractiveKeepAlive;
@property (nonatomic) double systemWideSwipeDownHeight;
@property (nonatomic) double yOffsetFactor;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (bool)allowOnAllDevices;
- (id)animationSettings;
- (double)homeGestureSwipeDownHeight;
- (double)homeGestureSwipeDownHysteresis;
- (double)reachabilityDefaultKeepAlive;
- (double)reachabilityInteractiveKeepAlive;
- (void)setAllowOnAllDevices:(bool)arg1;
- (void)setAnimationSettings:(id)arg1;
- (void)setDefaultValues;
- (void)setHomeGestureSwipeDownHeight:(double)arg1;
- (void)setHomeGestureSwipeDownHysteresis:(double)arg1;
- (void)setReachabilityDefaultKeepAlive:(double)arg1;
- (void)setReachabilityInteractiveKeepAlive:(double)arg1;
- (void)setSystemWideSwipeDownHeight:(double)arg1;
- (void)setYOffsetFactor:(double)arg1;
- (double)systemWideSwipeDownHeight;
- (double)yOffset;
- (double)yOffsetFactor;

@end
