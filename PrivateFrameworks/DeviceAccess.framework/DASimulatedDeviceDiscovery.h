
@interface DASimulatedDeviceDiscovery : NSObject {
    bool  _activateCalled;
    CBDiscovery * _bluetoothScanner;
    CUBonjourBrowser * _bonjourBrowser;
    NSString * _deviceBonjourServiceType;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _eventHandler;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    NSString * _nameTXTKey;
}

@property (nonatomic, copy) NSString *deviceBonjourServiceType;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ eventHandler;

- (void).cxx_destruct;
- (void)_activate;
- (void)_bluetoothEnsureStarted;
- (void)_bluetoothEnsureStopped;
- (void)_bluetoothFoundDevice:(id)arg1;
- (void)_bluetoothLostDevice:(id)arg1;
- (void)_bonjourEnsureStarted;
- (void)_bonjourEnsureStopped;
- (void)_bonjourFoundDevice:(id)arg1;
- (void)_bonjourLostDevice:(id)arg1;
- (void)_invalidated;
- (void)activate;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (id)deviceBonjourServiceType;
- (id)dispatchQueue;
- (id /* block */)eventHandler;
- (id)init;
- (void)invalidate;
- (void)setDeviceBonjourServiceType:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setEventHandler:(id /* block */)arg1;

@end
