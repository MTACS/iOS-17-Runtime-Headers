
@interface CAMAnalyticsIgnoredShutterEvent : CAMAnalyticsEvent

- (id)_timeSinceLastPressRangeStringForMilliseconds:(long long)arg1;
- (id)eventName;
- (id)initWithReasons:(unsigned long long)arg1 timeSinceLastPress:(double)arg2 dynamicShutterEnabled:(bool)arg3 responsiveShutterEnabled:(bool)arg4;

@end
