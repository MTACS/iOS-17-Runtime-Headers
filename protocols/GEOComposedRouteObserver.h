
@protocol GEOComposedRouteObserver <NSObject>

@required

- (void)composedRoute:(GEOComposedRoute *)arg1 appliedTransitRouteUpdates:(NSArray *)arg2;
- (void)composedRoute:(GEOComposedRoute *)arg1 changedSelectedRideInClusteredSegment:(GEOComposedTransitTripRouteSegment *)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;
- (void)composedRoute:(GEOComposedRoute *)arg1 selectedSections:(NSArray *)arg2 deselectedSections:(NSArray *)arg3;
- (void)composedRouteUpdatedSnappedPaths:(GEOComposedRoute *)arg1;

@end
