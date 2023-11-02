
@protocol MapsSyncHistoryDirectionsItem <MapsSyncHistoryItem>

@required

- (bool)navigationInterrupted;
- (GEOStorageRouteRequestStorage *)routeRequestStorage;
- (NSData *)sharedETAData;

@end
