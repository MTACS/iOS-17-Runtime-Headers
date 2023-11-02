
@protocol HKRaceRouteLocationSeriesQueryClientInterface <HKQueryClientInterface>

@required

- (void)client_deliverRaceRouteLocations:(NSArray *)arg1 isFinal:(bool)arg2 query:(NSUUID *)arg3;

@end
