
@protocol SAPowerLogServiceProtocol

@required

- (void)addClient:(id <SAPowerLogClientProtocol>)arg1;
- (void)addMonitoredDevice:(NSUUID *)arg1;
- (void)increaseBTScanCount;
- (void)increaseGeofenceCount;
- (void)increaseGpsLocationRequestCount;
- (void)increaseSeparationAlertsCount:(unsigned long long)arg1;
- (void)increaseWifiLocationRequestCount;
- (void)ingestTAEvent:(id <TAEventProtocol>)arg1;
- (void)removeClient:(id <SAPowerLogClientProtocol>)arg1;

@end
