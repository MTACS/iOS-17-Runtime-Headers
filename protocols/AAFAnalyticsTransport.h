
@protocol AAFAnalyticsTransport <NSObject>

@required

- (oneway void)sendEvent:(AAFAnalyticsEvent *)arg1;

@end
