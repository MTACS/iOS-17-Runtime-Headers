
@interface CRKWiProxTrackerScanner : NSObject <WPDeviceScannerDelegate, WPZoneTrackerDelegate> {
    <CRKWiProxTrackerScannerDelegate> * _delegate;
    WPDeviceScanner * _deviceScanner;
    WPZoneTracker * _zoneTracker;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CRKWiProxTrackerScannerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) WPDeviceScanner *deviceScanner;
@property (nonatomic, readonly) long long deviceScannerState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) WPZoneTracker *zoneTracker;
@property (nonatomic, readonly) long long zoneTrackerState;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)deviceScanner;
- (void)deviceScannerDidUpdateState:(id)arg1;
- (long long)deviceScannerState;
- (id)initWithDelegate:(id)arg1;
- (void)invalidate;
- (void)registerForDevicesMatching:(id)arg1 options:(id)arg2;
- (void)registerForZoneChangesMatching:(id)arg1;
- (void)scanner:(id)arg1 didFailToRegisterDevices:(id)arg2 withError:(id)arg3;
- (void)scanner:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3;
- (void)scanner:(id)arg1 foundRequestedDevices:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDeviceScanner:(id)arg1;
- (void)setZoneTracker:(id)arg1;
- (void)unregisterAllDeviceChanges;
- (void)unregisterAllZoneChanges;
- (void)unregisterForZoneChanges:(id)arg1;
- (id)zoneTracker;
- (void)zoneTracker:(id)arg1 didFailToRegisterZones:(id)arg2 withError:(id)arg3;
- (void)zoneTracker:(id)arg1 enteredZone:(id)arg2;
- (void)zoneTracker:(id)arg1 exitedZone:(id)arg2;
- (void)zoneTrackerDidUpdateState:(id)arg1;
- (long long)zoneTrackerState;

@end
