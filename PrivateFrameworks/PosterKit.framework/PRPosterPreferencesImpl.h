
@interface PRPosterPreferencesImpl : NSObject <PRMutablePosterEditingPreferences, PRMutablePosterRenderingPreferences, PRPosterEditingPreferences, PRPosterRenderingPreferences> {
    UIColor * _averageColor;
    bool  _depthEffectEnabled;
    PRPosterLegibilitySettings * _desiredLegibilitySettings;
    bool  _handlesWakeAnimation;
    bool  _hideChrome;
    bool  _hideDimmingLayer;
    bool  _parallaxEnabled;
    unsigned long long  _significantEventOptions;
    unsigned long long  _significantEventTime;
    UIColor * _statusBarTintColor;
    UIColor * _timeColor;
    UIFont * _timeFont;
    bool  _userTapEventsRequested;
}

@property (nonatomic, readonly) UIColor *averageColor;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isDepthEffectEnabled, nonatomic, readonly) bool depthEffectEnabled;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PRPosterLegibilitySettings *desiredLegibilitySettings;
@property (nonatomic, readonly) bool handlesWakeAnimation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool hideChrome;
@property (nonatomic, readonly) bool hideDimmingLayer;
@property (nonatomic, readonly) NSDate *nextWakeDate;
@property (getter=isParallaxEnabled, nonatomic, readonly) bool parallaxEnabled;
@property (nonatomic, readonly) unsigned long long significantEventOptions;
@property (nonatomic, readonly) unsigned long long significantEventTime;
@property (nonatomic, readonly) UIColor *statusBarTintColor;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIColor *timeColor;
@property (nonatomic, readonly) UIFont *timeFont;
@property (nonatomic, readonly) bool userTapEventsRequested;

- (void).cxx_destruct;
- (id)_initFromPreferences:(id)arg1;
- (void)applyToClientSettings:(id)arg1;
- (id)averageColor;
- (id)desiredLegibilitySettings;
- (bool)handlesWakeAnimation;
- (bool)hideChrome;
- (bool)hideDimmingLayer;
- (id)init;
- (bool)isDepthEffectEnabled;
- (bool)isParallaxEnabled;
- (id)nextWakeDate;
- (void)setAverageColor:(id)arg1;
- (void)setDepthEffectEnabled:(bool)arg1;
- (void)setDesiredLegibilitySettings:(id)arg1;
- (void)setHandlesWakeAnimation:(bool)arg1;
- (void)setHideChrome:(bool)arg1;
- (void)setHideDimmingLayer:(bool)arg1;
- (void)setNextWakeDate:(id)arg1;
- (void)setParallaxEnabled:(bool)arg1;
- (void)setSignificantEventOptions:(unsigned long long)arg1;
- (void)setSignificantEventTime:(unsigned long long)arg1;
- (void)setStatusBarTintColor:(id)arg1;
- (void)setTimeColor:(id)arg1;
- (void)setTimeFont:(id)arg1;
- (void)setUserTapEventsRequested:(bool)arg1;
- (unsigned long long)significantEventOptions;
- (unsigned long long)significantEventTime;
- (id)statusBarTintColor;
- (id)timeColor;
- (id)timeFont;
- (bool)userTapEventsRequested;

@end
