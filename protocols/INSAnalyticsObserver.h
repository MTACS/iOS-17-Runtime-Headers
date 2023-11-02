
@protocol INSAnalyticsObserver <NSObject>

@required

- (void)analytics:(INSAnalytics *)arg1 needsToLogEventWithType:(long long)arg2 context:(NSDictionary *)arg3 contextNoCopy:(bool)arg4;

@end
