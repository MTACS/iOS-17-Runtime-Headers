
@protocol CLLocationManagerDelegateInternal <CLLocationManagerDelegate>

@optional

- (void)locationManager:(void *)arg1 didArrive:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: CLLocationManager *, CLVisit *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)locationManager:(CLLocationManager *)arg1 didChangeAppStatusFor:(NSDictionary *)arg2;
- (void)locationManager:(CLLocationManager *)arg1 didChangeStatusForTechnology:(int)arg2 active:(bool)arg3;
- (void)locationManager:(void *)arg1 didDepart:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: CLLocationManager *, CLVisit *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)locationManager:(void *)arg1 didEnter:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: CLLocationManager *, CLRegion *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)locationManager:(void *)arg1 didExit:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: CLLocationManager *, CLRegion *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)locationManager:(CLLocationManager *)arg1 didFailFindingPlacemarkForLocation:(CLLocation *)arg2 withError:(NSError *)arg3;
- (void)locationManager:(CLLocationManager *)arg1 didFindPlacemark:(NSDictionary *)arg2 forLocation:(CLLocation *)arg3;
- (void)locationManager:(CLLocationManager *)arg1 didNotReceiveLocationUpdatesForRegionMonitoringInInterval:(double)arg2;
- (void)locationManager:(CLLocationManager *)arg1 didRangePeers:(NSArray *)arg2;
- (void)locationManager:(CLLocationManager *)arg1 didReceiveApproval:(bool)arg2;
- (void)locationManager:(CLLocationManager *)arg1 didRecordHistoricLocation:(CLLocation *)arg2 forInterval:(double)arg3;
- (void)locationManager:(CLLocationManager *)arg1 didReportVisit:(CLVisit *)arg2;
- (void)locationManager:(void *)arg1 didSignificantlyChangeLocation:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: CLLocationManager *, CLLocation *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)locationManager:(CLLocationManager *)arg1 didStartRangingForPeer:(_CLRangingPeer *)arg2;
- (void)locationManager:(CLLocationManager *)arg1 didStopRangingForPeer:(_CLRangingPeer *)arg2;
- (void)locationManager:(void *)arg1 didUpdateLocations:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: CLLocationManager *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)locationManager:(CLLocationManager *)arg1 didUpdateToLocation:(CLLocation *)arg2 fromLocation:(CLLocation *)arg3 usingSupportInfo:(NSDictionary *)arg4;
- (void)locationManager:(CLLocationManager *)arg1 rangingDidFailForPeer:(_CLRangingPeer *)arg2 withError:(NSError *)arg3;

@end
