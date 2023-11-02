
@interface MIController : NSObject {
    NSObject<OS_xpc_object> * _connection;
    bool  _isActive;
    VKMapView * _mapView;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) bool isActive;

+ (id)sharedController;

- (void).cxx_destruct;
- (void)activateController:(id)arg1;
- (void)deactivateController;
- (void)decodeDebugTreeData:(id)arg1;
- (void)handleXPCEvent:(id)arg1;
- (id)init;
- (bool)isActive;
- (void)recievedData:(id)arg1;
- (void)sendData:(id)arg1;

@end
