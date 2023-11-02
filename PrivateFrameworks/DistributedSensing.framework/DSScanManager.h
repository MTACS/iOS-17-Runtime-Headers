
@interface DSScanManager : NSObject {
    CBDiscovery * _bleDiscovery;
    unsigned long long  _bleDiscoveryFlags;
    id /* block */  _deviceFoundHandler;
    id /* block */  _deviceLostHandler;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    unsigned long long  _dsScanFlags;
}

@property (nonatomic, copy) id /* block */ deviceFoundHandler;
@property (nonatomic, copy) id /* block */ deviceLostHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) unsigned long long dsScanFlags;

- (void).cxx_destruct;
- (void)_deviceFound:(id)arg1;
- (void)_deviceLost:(id)arg1;
- (bool)_shouldUpdateDiscovery;
- (void)_updateBLEDiscoveryFlags;
- (id /* block */)deviceFoundHandler;
- (id /* block */)deviceLostHandler;
- (id)dispatchQueue;
- (unsigned long long)dsScanFlags;
- (void)setDeviceFoundHandler:(id /* block */)arg1;
- (void)setDeviceLostHandler:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setDsScanFlags:(unsigned long long)arg1;
- (void)startScanning;
- (void)stopScanning;

@end
