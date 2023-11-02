
@interface HAPAccessoryServerBrowserWiProxBTLE : HMFObject <HMFLogging, WPHomeKitDelegate> {
    long long  _currentScanState;
    long long  _currentScanType;
    <HAPAccessoryServerBrowserWiProxBTLEDelegate> * _delegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMapTable * _reachabilityScanTuples;
    unsigned char  _routeMode;
    bool  _scanInBackground;
    NSMutableSet * _trackedIdentifiers;
    NSMutableSet * _trackedPeripherals;
    NSObject<OS_dispatch_queue> * _workQueue;
    WPHomeKit * _wpHomeKit;
}

@property (nonatomic) long long currentScanState;
@property (nonatomic) long long currentScanType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) <HAPAccessoryServerBrowserWiProxBTLEDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSMapTable *reachabilityScanTuples;
@property (nonatomic) unsigned char routeMode;
@property (nonatomic) bool scanInBackground;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic, readonly) WPHomeKit *wpHomeKit;

+ (id)logCategory;

- (void).cxx_destruct;
- (unsigned long long)_getLinkQuality:(id)arg1;
- (id)_lock_trackedPeripheralWithIdentifier:(id)arg1;
- (id)_parseAdvertisementData:(id)arg1 forPeripheral:(id)arg2 RSSI:(id)arg3;
- (void)_probeReachabilityForTrackedAccessories;
- (void)_removeTrackedPeripheral:(id)arg1;
- (void)_reportHAPPeripheral:(id)arg1;
- (void)_reportReachabilityForHAPPeripheral:(id)arg1;
- (void)_startBrowsingForHAPBLEAccessories;
- (void)_startScanningWithScanType:(long long)arg1;
- (void)_startTrackingHAPBLEAccessoriesWithIdentifiers:(id)arg1 restartScan:(bool)arg2;
- (void)_stopBrowsingForHAPBLEAccessories:(bool)arg1;
- (void)_stopScanning;
- (void)_stopTrackingHAPBLEAccessoriesWithIdentifiers:(id)arg1;
- (long long)currentScanState;
- (long long)currentScanType;
- (id)delegate;
- (void)homeKit:(id)arg1 failedToStartScanningWithError:(id)arg2;
- (void)homeKit:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3;
- (void)homeKit:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3 RSSI:(id)arg4;
- (void)homeKit:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3 RSSI:(id)arg4 type:(long long)arg5;
- (void)homeKitDidUpdateState:(id)arg1;
- (void)homeKitStartedScanning:(id)arg1;
- (void)homeKitStoppedScanning:(id)arg1;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (id)logIdentifier;
- (void)pauseScans;
- (void)probeReachabilityForTrackedAccessoriesWithScanTuples:(id)arg1;
- (id)reachabilityScanTuples;
- (bool)removeTrackedPeripheralWithStableIdentifier:(id)arg1;
- (void)resetLastSeenForTrackedAccessories:(id)arg1;
- (void)restartScans;
- (void)retrieveStateForTrackedAccessoryWithIdentifier:(id)arg1 stateNumber:(id*)arg2 isReachable:(bool*)arg3 linkQuality:(unsigned long long*)arg4 lastSeen:(id*)arg5;
- (unsigned char)routeMode;
- (bool)scanInBackground;
- (void)setCurrentScanState:(long long)arg1;
- (void)setCurrentScanType:(long long)arg1;
- (void)setRouteMode:(unsigned char)arg1;
- (void)setScanInBackground:(bool)arg1;
- (void)startBrowsingForHAPBLEAccessories;
- (void)startTrackingHAPBLEAccessoriesWithIdentifiers:(id)arg1;
- (void)stopBrowsingForHAPBLEAccessories:(bool)arg1;
- (void)stopTrackingHAPBLEAccessoriesWithIdentifiers:(id)arg1;
- (id)trackedIdentifiers;
- (id)trackedPeripheralForIdentifier:(id)arg1;
- (id)trackedPeripheralWithIdentifier:(id)arg1;
- (id)trackedPeripherals;
- (void)updateStateForIdentifier:(id)arg1 stateNumber:(id)arg2;
- (id)workQueue;
- (id)wpHomeKit;

@end
