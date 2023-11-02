
@protocol PRMutablePosterRenderingPreferences <PRMutablePosterPreferences>

@required

- (UIColor *)averageColor;
- (PRPosterLegibilitySettings *)desiredLegibilitySettings;
- (bool)handlesWakeAnimation;
- (bool)hideChrome;
- (bool)hideDimmingLayer;
- (NSDate *)nextWakeDate;
- (void)setAverageColor:(UIColor *)arg1;
- (void)setDesiredLegibilitySettings:(PRPosterLegibilitySettings *)arg1;
- (void)setHandlesWakeAnimation:(bool)arg1;
- (void)setHideChrome:(bool)arg1;
- (void)setHideDimmingLayer:(bool)arg1;
- (void)setNextWakeDate:(NSDate *)arg1;
- (void)setSignificantEventOptions:(unsigned long long)arg1;
- (void)setSignificantEventTime:(unsigned long long)arg1;
- (void)setUserTapEventsRequested:(bool)arg1;
- (unsigned long long)significantEventOptions;
- (unsigned long long)significantEventTime;
- (bool)userTapEventsRequested;

@end
