
@interface BTAirPodsControlServiceClient : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate> {
    CBCharacteristic * _airpodsCaseControlCharacteristicObj;
    CBUUID * _airpodsCaseControlCharacteristicUUID;
    CBService * _airpodsCaseControlServiceObj;
    CBUUID * _airpodsCaseControlServiceUUID;
    CBCentralManager * _centralManager;
    bool  _connected;
    NSString * _deviceSN;
    NSString * _deviceUUID;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _invalidateCalled;
    CBDevice * _peerDevice;
    NSUUID * _peerUUID;
    CBPeripheral * _peripheral;
    NSMutableArray * _requestArray;
    BTAirPodsControlRequest * _requestCurrent;
    int  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *deviceSN;
@property (nonatomic, retain) NSString *deviceUUID;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CBDevice *peerDevice;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_abortRequestsWithError:(id)arg1;
- (void)_completeRequest:(id)arg1 error:(id)arg2;
- (void)_invalidate;
- (void)_reportError:(id)arg1;
- (void)_run;
- (bool)_runConnectStart;
- (bool)_runDiscoverCharacteristicsStart;
- (bool)_runDiscoverServicesStart;
- (bool)_runInit;
- (void)_runProcessRequest:(id)arg1;
- (void)_runProcessRequests;
- (void)_setupTimeoutForRequest:(id)arg1;
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didUpdateFindMyPeripherals:(id)arg2;
- (void)centralManagerDidUpdateState:(id)arg1;
- (id)deviceSN;
- (id)deviceUUID;
- (id)dispatchQueue;
- (void)getSilentModeWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (void)invalidate;
- (bool)isFindmyManaged;
- (id)peerDevice;
- (void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;
- (void)peripheral:(id)arg1 didUpdateNotificationStateForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)setDeviceSN:(id)arg1;
- (void)setDeviceUUID:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setPeerDevice:(id)arg1;
- (void)setSilentMode:(bool)arg1 completionHandler:(id /* block */)arg2;

@end
