
@interface MNVehicleMonitor : NSObject {
    <MNVehicleMonitorDelegate> * _delegate;
    bool  _isMonitoring;
    int  _vehicleConnectedToken;
    int  _vehicleDisconnectedToken;
}

@property (nonatomic) <MNVehicleMonitorDelegate> *delegate;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)startMonitoring;
- (void)stopMonitoring;

@end
