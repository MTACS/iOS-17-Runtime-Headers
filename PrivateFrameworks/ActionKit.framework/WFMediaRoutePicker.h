
@interface WFMediaRoutePicker : NSObject <MPAVRoutingControllerDelegate> {
    WFBluetoothSettingsClient * _bluetoothClient;
    NSMutableArray * _observers;
    NSObject<OS_dispatch_queue> * _queue;
    long long  _routeType;
    AVAudioSession * _routingAudioSession;
    MPAVRoutingController * _routingController;
}

@property (nonatomic, readonly) NSArray *availableRoutes;
@property (nonatomic, readonly) WFBluetoothSettingsClient *bluetoothClient;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableArray *observers;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) long long routeType;
@property (nonatomic, retain) AVAudioSession *routingAudioSession;
@property (nonatomic, retain) MPAVRoutingController *routingController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addAvailableRoutesObserver:(id)arg1;
- (id)availableRoutes;
- (id)bluetoothClient;
- (void)findHandoffRouteMatchingDescriptor:(id)arg1 timeout:(double)arg2 completionHandler:(id /* block */)arg3;
- (void)findHandoffRoutesMatchingDescriptors:(id)arg1 timeout:(double)arg2 completionHandler:(id /* block */)arg3;
- (void)findRouteMatchingDescriptor:(id)arg1 timeout:(double)arg2 completionHandler:(id /* block */)arg3;
- (void)findRoutesMatchingDescriptors:(id)arg1 timeout:(double)arg2 completionHandler:(id /* block */)arg3;
- (void)getPairedAudioDevicesMatchingRouteDescriptor:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)handOffFromSourceUID:(id)arg1 toDestinationUID:(id)arg2 timeout:(double)arg3 completionHandler:(id /* block */)arg4;
- (id)init;
- (id)initWithRouteType:(long long)arg1;
- (id)observers;
- (id)queue;
- (void)removeAvailableRoutesObserver:(id)arg1;
- (long long)routeType;
- (id)routingAudioSession;
- (id)routingController;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)selectRoute:(id)arg1 operation:(long long)arg2 timeout:(double)arg3 completionHandler:(id /* block */)arg4;
- (void)setRoutingAudioSession:(id)arg1;
- (void)setRoutingController:(id)arg1;
- (void)startDiscoveringRoutes;
- (void)stopDiscoveringRoutes;

@end
