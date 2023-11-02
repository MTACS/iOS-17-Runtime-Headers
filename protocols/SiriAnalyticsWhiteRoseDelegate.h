
@protocol SiriAnalyticsWhiteRoseDelegate <NSObject>

@required

- (void)whiteRose:(SiriAnalyticsWhiteRose *)arg1 derivativeClockCreated:(SiriAnalyticsDerivativeClock *)arg2 rootClock:(SiriAnalyticsRootClock *)arg3;
- (void)whiteRose:(SiriAnalyticsWhiteRose *)arg1 rootClockCreated:(SiriAnalyticsRootClock *)arg2;
- (void)whiteRose:(void *)arg1 rootClockDestroyed:(void *)arg2 reason:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 8: SiriAnalyticsWhiteRose *, SiriAnalyticsRootClock *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)whiteRose:(void *)arg1 willCreateRootClock:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: SiriAnalyticsWhiteRose *, SiriAnalyticsRootClock *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
