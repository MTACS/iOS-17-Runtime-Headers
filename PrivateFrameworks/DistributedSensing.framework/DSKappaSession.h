
@interface DSKappaSession : NSObject {
    id /* block */  _activateCompletionHandler;
    unsigned char  _coordinationStatus;
    id /* block */  _deviceChangedHandler;
    id /* block */  _deviceFoundHandler;
    id /* block */  _deviceLostHandler;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _interruptionHandler;
    bool  _invalidateFinished;
    id /* block */  _invalidationHandler;
    bool  _shouldActivate;
    bool  _shouldInvalidate;
    unsigned char  _tiebreaker;
    NSObject<OS_xpc_object> * _xpcConnection;
}

@property (nonatomic) unsigned char coordinationStatus;
@property (nonatomic, copy) id /* block */ deviceChangedHandler;
@property (nonatomic, copy) id /* block */ deviceFoundHandler;
@property (nonatomic, copy) id /* block */ deviceLostHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic) unsigned char tiebreaker;
@property (nonatomic, retain) NSObject<OS_xpc_object> *xpcConnection;

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
- (void)_updateKappaCoordinationStatus:(unsigned char)arg1;
- (void)_xpcEventHandler:(id)arg1;
- (void)_xpcHandleCompletionBlockReply:(id)arg1 error:(id*)arg2;
- (void)activateWithCompletion:(id /* block */)arg1;
- (void)cancelElection;
- (unsigned char)coordinationStatus;
- (id /* block */)deviceChangedHandler;
- (id /* block */)deviceFoundHandler;
- (id /* block */)deviceLostHandler;
- (id)dispatchQueue;
- (void)encodeSelf:(id)arg1;
- (id)init;
- (id)initWithXPCObject:(id)arg1 error:(id*)arg2;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (void)setCoordinationStatus:(unsigned char)arg1;
- (void)setDeviceChangedHandler:(id /* block */)arg1;
- (void)setDeviceFoundHandler:(id /* block */)arg1;
- (void)setDeviceLostHandler:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setTiebreaker:(unsigned char)arg1;
- (void)setXpcConnection:(id)arg1;
- (void)startElectionWithTimeout:(double)arg1 completion:(id /* block */)arg2;
- (unsigned char)tiebreaker;
- (void)updateKappaCoordinationStatus:(unsigned char)arg1;
- (id)xpcConnection;

@end
