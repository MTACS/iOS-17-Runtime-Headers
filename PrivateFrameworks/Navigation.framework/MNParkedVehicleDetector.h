
@interface MNParkedVehicleDetector : NSObject <GEOConfigChangeListenerDelegate, MNVehicleMonitorDelegate> {
    <MNParkedVehicleDetectorDelegate> * _delegate;
    bool  _isMonitoring;
    bool  _locationStoppedCondition;
    NSTimer * _locationStoppedTimer;
    int  _simulateParkedVehicleEventToken;
    NSTimer * _vehicleDisconnectExpirationTimer;
    bool  _vehicleDisconnectedCondition;
    MNVehicleMonitor * _vehicleMonitor;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MNParkedVehicleDetectorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_checkParkingConditions;
- (void)_locationStoppedTimer:(id)arg1;
- (void)_updateForParkedCar;
- (void)_updateVehicleMonitorShouldStart:(bool)arg1;
- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)startMonitoring;
- (void)stopMonitoring;
- (void)updateForLocation:(id)arg1;
- (void)valueChangedForGEOConfigKey:(struct { unsigned int x1; void *x2; })arg1;
- (void)vehicleMonitorDidConnectToVehicle:(id)arg1;
- (void)vehicleMonitorDidDisconnectFromVehicle:(id)arg1;

@end
