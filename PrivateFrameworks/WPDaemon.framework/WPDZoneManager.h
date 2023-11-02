
@interface WPDZoneManager : WPDManager <CBCentralManagerDelegate> {
    CBCentralManager * _centralManager;
    NSObject<OS_dispatch_source> * _exitTimer;
    NSDate * _lastTimeScannerStarted;
    bool  _scanAllowlisted;
    NSMutableDictionary * _trackRequests;
    NSMutableDictionary * _trackedZones;
    NSNumber * _zoneExitTimeout;
}

@property (retain) CBCentralManager *centralManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSObject<OS_dispatch_source> *exitTimer;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *lastTimeScannerStarted;
@property (nonatomic, readonly) bool scanAllowlisted;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableDictionary *trackRequests;
@property (nonatomic, retain) NSMutableDictionary *trackedZones;
@property (nonatomic, retain) NSNumber *zoneExitTimeout;

- (void).cxx_destruct;
- (void)addSingleZoneTrackingRequest:(id)arg1 forClient:(id)arg2;
- (id)addZoneTrackingRequest:(id)arg1 forClient:(id)arg2;
- (void)cancelExitTimer;
- (id)centralManager;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManager:(id)arg1 didLoseZone:(id)arg2 mask:(id)arg3;
- (void)cleanup;
- (id)exitTimer;
- (void)exitTimerFired;
- (id)generateStateDumpStrings;
- (id)getAllZones;
- (id)initWithServer:(id)arg1;
- (id)lastTimeScannerStarted;
- (void)printTrackedZones;
- (bool)scanAllowlisted;
- (void)setCentralManager:(id)arg1;
- (void)setExitTimer:(id)arg1;
- (void)setLastTimeScannerStarted:(id)arg1;
- (void)setTrackRequests:(id)arg1;
- (void)setTrackedZones:(id)arg1;
- (void)setZoneExitTimeout:(id)arg1;
- (void)startExitTimer;
- (id)trackRequests;
- (id)trackedZones;
- (void)unregisterAllZones;
- (void)unregisterZones:(id)arg1 forClient:(id)arg2;
- (void)unregisterZonesForClient:(id)arg1;
- (void)unregisterZonesForClient:(id)arg1 updateScanner:(bool)arg2;
- (void)update;
- (bool)updateScanner;
- (id)zoneExitTimeout;

@end
