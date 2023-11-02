
@protocol SAServiceClientProtocol <NSObject>

@optional

- (void)separationAlertsService:(SAService *)arg1 addGeofence:(CLRegion *)arg2;
- (void)separationAlertsService:(SAService *)arg1 cancelSATimeEventForAlarm:(NSUUID *)arg2;
- (void)separationAlertsService:(SAService *)arg1 enableMonitoringForSeparations:(bool)arg2;
- (void)separationAlertsService:(SAService *)arg1 notifySeparationsForDevices:(NSArray *)arg2 withLocation:(CLLocation *)arg3 withContext:(NSDictionary *)arg4;
- (void)separationAlertsService:(SAService *)arg1 removeGeofence:(CLRegion *)arg2;
- (void)separationAlertsService:(SAService *)arg1 requestBluetoothScanForTypes:(unsigned long long)arg2;
- (void)separationAlertsService:(SAService *)arg1 requestLocationForType:(unsigned long long)arg2;
- (void)separationAlertsService:(SAService *)arg1 requestStateForRegion:(CLRegion *)arg2;
- (void)separationAlertsService:(SAService *)arg1 scheduleSATimeEvent:(double)arg2 forAlarm:(NSUUID *)arg3;
- (void)separationAlertsServiceFetchLastVisit:(SAService *)arg1;
- (void)separationAlertsServiceStartBackgroundScanning:(SAService *)arg1;
- (void)separationAlertsServiceStopBackgroundScanning:(SAService *)arg1;
- (void)separationAlertsServiceStopLongAggressiveScan:(SAService *)arg1;

@end
