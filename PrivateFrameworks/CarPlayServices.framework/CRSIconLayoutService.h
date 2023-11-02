
@interface CRSIconLayoutService : NSObject <BSInvalidatable, BSServiceConnectionListenerDelegate, CRSIconLayoutClientToServerInterface> {
    NSObject<OS_dispatch_queue> * _connectionQueue;
    NSHashTable * _connections;
    <CRSIconLayoutServiceDelegate> * _delegate;
    BSServiceConnectionListener * _listener;
    <BSInvalidatable> * _temporaryWatchdogMonitoringAssertion;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *connectionQueue;
@property (nonatomic, retain) NSHashTable *connections;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CRSIconLayoutServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) BSServiceConnectionListener *listener;
@property (readonly) Class superclass;
@property (nonatomic, retain) <BSInvalidatable> *temporaryWatchdogMonitoringAssertion;

- (void).cxx_destruct;
- (void)_connectionQueue_addConnection:(id)arg1;
- (void)_connectionQueue_removeConnection:(id)arg1;
- (id)_newInvalidRequestErrorDueToNilVehicleID;
- (id)connectionQueue;
- (id)connections;
- (id)delegate;
- (void)fetchApplicationIconInformationForBundleIdentifier:(id)arg1 vehicleID:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchIconStateForVehicleID:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithDelegate:(id)arg1;
- (void)invalidate;
- (id)listener;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (void)resetIconStateForVehicleID:(id)arg1;
- (void)setConnectionQueue:(id)arg1;
- (void)setConnections:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIconState:(id)arg1 forVehicleID:(id)arg2;
- (void)setListener:(id)arg1;
- (void)setTemporaryWatchdogMonitoringAssertion:(id)arg1;
- (id)temporaryWatchdogMonitoringAssertion;

@end
