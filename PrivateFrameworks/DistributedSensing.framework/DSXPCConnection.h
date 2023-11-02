
@interface DSXPCConnection : NSObject {
    NSMutableDictionary * _deviceDictionary;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _isEntitledForKappa;
    bool  _isEntitledForMotion;
    DSKappaSession * _kappaSession;
    DSMotionSession * _motionSession;
    int  _pid;
    NSObject<OS_xpc_object> * _xpcConnection;
    DSXPCServer * _xpcDaemonServer;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, retain) DSKappaSession *kappaSession;
@property (nonatomic, retain) DSMotionSession *motionSession;
@property (nonatomic) int pid;
@property (nonatomic, retain) NSObject<OS_xpc_object> *xpcConnection;
@property (nonatomic, retain) DSXPCServer *xpcDaemonServer;

- (void).cxx_destruct;
- (void)_activateKappaSessionMessage:(id)arg1;
- (void)_activateMotionSessionMessage:(id)arg1;
- (void)_checkEntitlement:(const char *)arg1 error:(id*)arg2;
- (void)_deviceChangedHandler:(id)arg1;
- (void)_deviceFoundHandler:(id)arg1;
- (void)_deviceLostHandler:(id)arg1;
- (void)_handleXPCMessage:(id)arg1;
- (void)_printCohortMessage:(id)arg1;
- (void)_updateCoordinationStatusMessage:(id)arg1;
- (void)_updateVehicleStateMessage:(id)arg1;
- (void)_xpcCohortDeviceMessage:(id)arg1 type:(const char *)arg2;
- (void)_xpcConnectionSendEvent:(id)arg1;
- (void)_xpcEventHandler:(id)arg1;
- (void)_xpcSendReplyForMessage:(id)arg1 error:(id)arg2;
- (void)activate;
- (id)dispatchQueue;
- (void)invalidate;
- (id)kappaSession;
- (id)motionSession;
- (int)pid;
- (void)setDispatchQueue:(id)arg1;
- (void)setKappaSession:(id)arg1;
- (void)setMotionSession:(id)arg1;
- (void)setPid:(int)arg1;
- (void)setXpcConnection:(id)arg1;
- (void)setXpcDaemonServer:(id)arg1;
- (id)xpcConnection;
- (id)xpcDaemonServer;

@end
