
@interface MNArrivalUpdater : NSObject <GEOPListStateCapturing, MNArrivalRegionTimerDelegate, MNEVChargingStateMonitorDelegate, MNNavigationSessionStateListener, MNParkedVehicleDetectorDelegate> {
    _MNArrivalUpdaterState * _currentState;
    _MNArrivalUpdaterDetails * _details;
    MNEVChargingStateMonitor * _evChargingStateMonitor;
    MNParkedVehicleDetector * _parkedVehicleDetector;
    MNObserverHashTable * _safeDelegate;
    unsigned long long  _stateCaptureHandle;
    NSMutableArray * _timeoutRegions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isApproachingWaypoint;
@property (nonatomic, readonly) bool isInPreArrivalRegion;
@property (nonatomic, copy) MNNavigationSessionState *navigationSessionState;
@property (nonatomic, readonly) GEOComposedRoute *route;
@property (nonatomic, readonly) MNObserverHashTable *safeDelegate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) GEOComposedRouteLeg *targetLeg;

- (void).cxx_destruct;
- (bool)_checkForParkingDetectionRegion;
- (void)_updateForParkingDetectionRegion;
- (void)_updateTimeoutRegions;
- (void)arrivalRegionTimerDidFire:(id)arg1;
- (id)captureStatePlistWithHints:(struct os_state_hints_s { unsigned int x1; char *x2; unsigned int x3; unsigned int x4; }*)arg1;
- (void)changeState:(id)arg1;
- (void)dealloc;
- (void)evChargingStateMonitor:(id)arg1 didChangeChargingState:(bool)arg2;
- (void)evChargingStateMonitor:(id)arg1 didReachTargetBatteryCharge:(id)arg2;
- (void)evChargingStateMonitorShouldShowChargingInfo:(id)arg1;
- (void)forceDepartureForCurrentLeg:(unsigned long long)arg1;
- (id)init;
- (bool)isApproachingWaypoint;
- (bool)isInPreArrivalRegion;
- (id)navigationSessionState;
- (void)parkedVehicleDetectorDidDetectParkedVehicle:(id)arg1;
- (id)route;
- (id)safeDelegate;
- (void)setDelegate:(id)arg1;
- (void)setNavigationSessionState:(id)arg1;
- (void)start;
- (void)startMonitoringForEV;
- (void)stop;
- (void)stopMonitoringForEV;
- (id)targetLeg;
- (void)updateForLocation:(id)arg1;

@end
