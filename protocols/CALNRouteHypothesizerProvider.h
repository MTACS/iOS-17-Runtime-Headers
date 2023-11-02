
@protocol CALNRouteHypothesizerProvider <NSObject>

@required

- (void)createdRouteHypothesizer:(id <CALNRouteHypothesizer>)arg1 forEventExternalURL:(NSString *)arg2;
- (void)didDismissUINotification:(unsigned long long)arg1 forPlannedDestination:(GEOPlannedDestination *)arg2 dismissalType:(unsigned long long)arg3;
- (<CALNRouteHypothesizer> *)hypothesizerForPlannedDestination:(GEOPlannedDestination *)arg1;
- (void)removedRouteHypothesizerForEventExternalURL:(NSString *)arg1;

@end
