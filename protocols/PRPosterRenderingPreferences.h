
@protocol PRPosterRenderingPreferences <PRPosterPreferences>

@required

- (UIColor *)averageColor;
- (PRPosterLegibilitySettings *)desiredLegibilitySettings;
- (bool)handlesWakeAnimation;
- (bool)hideChrome;
- (bool)hideDimmingLayer;
- (NSDate *)nextWakeDate;
- (unsigned long long)significantEventOptions;
- (unsigned long long)significantEventTime;
- (bool)userTapEventsRequested;

@end
