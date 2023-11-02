
@interface DSXPCServer : NSObject {
    DSAdvertiseManager * _advertiseManager;
    DSCohortManager * _cohortManager;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    DSDeviceContext * _myDeviceContext;
    DSScanManager * _scanManager;
    bool  _shouldActivate;
    bool  _shouldAdvertiseDSAction;
    bool  _shouldAdvertiseDSInfo;
    bool  _shouldScanDSAction;
    bool  _shouldScanDSInfo;
    NSMutableSet * _xpcConnections;
    NSObject<OS_xpc_object> * _xpcListener;
}

@property (nonatomic, retain) DSCohortManager *cohortManager;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, retain) DSDeviceContext *myDeviceContext;
@property (nonatomic, readonly) NSMutableSet *xpcConnections;

- (void).cxx_destruct;
- (void)_activate;
- (void)_deviceFoundHandler:(id)arg1;
- (void)_deviceLostHandler:(id)arg1;
- (void)_ensureAdvertiserStarted;
- (void)_ensureAdvertiserStopped;
- (void)_ensureScannerStarted;
- (void)_ensureScannerStopped;
- (void)_handleXPCConnection:(id)arg1;
- (void)_invalidate;
- (void)_receivedXPCObject:(id)arg1;
- (void)activate;
- (id)cohortManager;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (id)myDeviceContext;
- (void)removeXPCConnection:(id)arg1;
- (void)setCohortManager:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setMyDeviceContext:(id)arg1;
- (void)updateAdvertiser;
- (void)updateScanner;
- (id)xpcConnections;

@end
