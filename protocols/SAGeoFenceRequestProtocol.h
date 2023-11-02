
@protocol SAGeoFenceRequestProtocol

@required

- (void)addGeofence:(CLRegion *)arg1;
- (void)removeGeofence:(CLRegion *)arg1;
- (void)requestStateForRegion:(CLRegion *)arg1;

@end
