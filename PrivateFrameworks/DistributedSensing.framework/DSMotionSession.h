
@interface DSMotionSession : NSObject {
    id /* block */  _activateCompletionHandler;
    id /* block */  _deviceChangedHandler;
    id /* block */  _deviceFoundHandler;
    id /* block */  _deviceLostHandler;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _interruptionHandler;
    bool  _invalidateFinished;
    id /* block */  _invalidationHandler;
    bool  _shouldActivate;
    bool  _shouldInvalidate;
    unsigned char  _vehicleConfidence;
    unsigned char  _vehicleState;
    NSObject<OS_xpc_object> * _xpcConnection;
}

@property (nonatomic, copy) id /* block */ deviceChangedHandler;
@property (nonatomic, copy) id /* block */ deviceFoundHandler;
@property (nonatomic, copy) id /* block */ deviceLostHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic) unsigned char vehicleConfidence;
@property (nonatomic) unsigned char vehicleState;

- (void).cxx_destruct;
- (void)_activate;
- (void)_activateXPC;
- (void)_activateXPCHandleReply:(id)arg1;
- (void)_deviceChangedMessage:(id)arg1;
- (void)_deviceFoundMessage:(id)arg1;
- (void)_deviceLostMessage:(id)arg1;
- (id)_getXPCConnection;
- (void)_handleXPCMessage:(id)arg1;
- (void)_interrupted;
- (void)_invalidate;
- (void)_invalidateXPC;
- (void)_invalidated;
- (void)_printCohort;
- (void)_updateVehicleState:(unsigned char)arg1 confidence:(unsigned char)arg2;
- (void)_xpcEventHandler:(id)arg1;
- (void)_xpcHandleCompletionBlockReply:(id)arg1 error:(id*)arg2;
- (void)activateWithCompletion:(id /* block */)arg1;
- (id /* block */)deviceChangedHandler;
- (id /* block */)deviceFoundHandler;
- (id /* block */)deviceLostHandler;
- (id)dispatchQueue;
- (void)encodeSelf:(id)arg1;
- (id)initWithXPCObject:(id)arg1 error:(id*)arg2;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (void)printCohort;
- (void)setDeviceChangedHandler:(id /* block */)arg1;
- (void)setDeviceFoundHandler:(id /* block */)arg1;
- (void)setDeviceLostHandler:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setVehicleConfidence:(unsigned char)arg1;
- (void)setVehicleState:(unsigned char)arg1;
- (void)updateVehicleState:(unsigned char)arg1 confidence:(unsigned char)arg2;
- (unsigned char)vehicleConfidence;
- (unsigned char)vehicleState;

@end
