
@interface HMDSharingDeviceDiscovery : HMFObject <HMDSharingDeviceDiscovery> {
    SFDeviceDiscovery * _deviceDiscovery;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ deviceChangedHandler;
@property (nonatomic, retain) SFDeviceDiscovery *deviceDiscovery;
@property (nonatomic, copy) id /* block */ deviceFoundHandler;
@property (nonatomic, copy) id /* block */ deviceLostHandler;
@property (nonatomic) unsigned long long discoveryFlags;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id /* block */)deviceChangedHandler;
- (id)deviceDiscovery;
- (id /* block */)deviceFoundHandler;
- (id /* block */)deviceLostHandler;
- (unsigned long long)discoveryFlags;
- (id)dispatchQueue;
- (void)repairDevice:(id)arg1 flags:(unsigned int)arg2 completion:(id /* block */)arg3;
- (void)setDeviceChangedHandler:(id /* block */)arg1;
- (void)setDeviceDiscovery:(id)arg1;
- (void)setDeviceFoundHandler:(id /* block */)arg1;
- (void)setDeviceLostHandler:(id /* block */)arg1;
- (void)setDiscoveryFlags:(unsigned long long)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)start;
- (void)stop;

@end
