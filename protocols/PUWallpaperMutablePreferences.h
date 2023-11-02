
@protocol PUWallpaperMutablePreferences <NSObject>

@required

- (bool)hideChrome;
- (void)setHideChrome:(bool)arg1;
- (void)setSignificantEventOptions:(unsigned long long)arg1;
- (void)setSignificantEventTime:(unsigned long long)arg1;
- (void)setStatusBarTintColor:(UIColor *)arg1;
- (void)setTimeColor:(UIColor *)arg1;
- (void)setTimeFont:(UIFont *)arg1;
- (void)setUserTapEventsRequested:(bool)arg1;
- (unsigned long long)significantEventOptions;
- (unsigned long long)significantEventTime;
- (UIColor *)statusBarTintColor;
- (UIColor *)timeColor;
- (UIFont *)timeFont;
- (bool)userTapEventsRequested;

@end
