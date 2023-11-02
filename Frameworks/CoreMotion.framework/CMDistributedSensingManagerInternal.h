
@interface CMDistributedSensingManagerInternal : NSObject {
    NSObject<OS_dispatch_queue> * _clientQueue;
    <CMDistributedSensingDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _internalQueue;
    void * _locationdConnection;
    CMDistributedSensingManager * _manager;
}

- (void).cxx_destruct;
- (void)_handleDaemonMessage:(id)arg1 data:(id)arg2;
- (void)_registerForVehicleStateUpdates;
- (void)_teardown;
- (void)_unregisterForVehicleStateUpdates;
- (void)dealloc;
- (id)init;

@end
