
@interface SFApproveDiscovery : NSObject {
    bool  _activateCalled;
    id /* block */  _activateHandler;
    NSMutableDictionary * _deviceDictionary;
    SFDeviceDiscovery * _deviceDiscovery;
    id /* block */  _deviceFoundHandler;
    id /* block */  _deviceLostHandler;
    NSArray * _devices;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
}

@property (nonatomic, copy) id /* block */ deviceFoundHandler;
@property (nonatomic, copy) id /* block */ deviceLostHandler;
@property (nonatomic, retain) NSArray *devices;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ invalidationHandler;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(id /* block */)arg1;
- (void)_activatedWithError:(id)arg1;
- (void)_discoveryDeviceChanged:(id)arg1;
- (void)_discoveryEnsureStarted;
- (void)_discoveryEnsureStopped;
- (void)_discoveryFoundDevice:(id)arg1;
- (void)_discoveryLostDevice:(id)arg1;
- (void)_invalidated;
- (void)activateWithCompletion:(id /* block */)arg1;
- (id /* block */)deviceFoundHandler;
- (id /* block */)deviceLostHandler;
- (id)devices;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (void)setDeviceFoundHandler:(id /* block */)arg1;
- (void)setDeviceLostHandler:(id /* block */)arg1;
- (void)setDevices:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;

@end
