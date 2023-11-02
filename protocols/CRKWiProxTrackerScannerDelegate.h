
@protocol CRKWiProxTrackerScannerDelegate <NSObject>

@required

- (void)trackerScanner:(CRKWiProxTrackerScanner *)arg1 didUpdateDeviceScannerState:(WPDeviceScanner *)arg2;
- (void)trackerScanner:(CRKWiProxTrackerScanner *)arg1 didUpdateZoneTrackerState:(WPZoneTracker *)arg2;
- (void)trackerScanner:(CRKWiProxTrackerScanner *)arg1 scanner:(WPDeviceScanner *)arg2 didFailToRegisterDevices:(NSDictionary *)arg3 withError:(NSError *)arg4;
- (void)trackerScanner:(CRKWiProxTrackerScanner *)arg1 scanner:(WPDeviceScanner *)arg2 foundDevice:(NSUUID *)arg3 withData:(NSDictionary *)arg4;
- (void)trackerScanner:(CRKWiProxTrackerScanner *)arg1 scanner:(WPDeviceScanner *)arg2 foundRequestedDevices:(NSArray *)arg3;
- (void)trackerScanner:(CRKWiProxTrackerScanner *)arg1 zoneTracker:(WPZoneTracker *)arg2 didFailToRegisterZones:(NSDictionary *)arg3 withError:(NSError *)arg4;
- (void)trackerScanner:(CRKWiProxTrackerScanner *)arg1 zoneTracker:(WPZoneTracker *)arg2 enteredZone:(NSData *)arg3;
- (void)trackerScanner:(CRKWiProxTrackerScanner *)arg1 zoneTracker:(WPZoneTracker *)arg2 exitedZone:(NSData *)arg3;

@end
