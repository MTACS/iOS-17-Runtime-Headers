
@interface HURoutesManager : NSObject {
    NSDictionary * _pickableRoutes;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _routingLock;
    NSObject<OS_dispatch_queue> * _routingQueue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *routingQueue;

- (void).cxx_destruct;
- (id)_copyPickableRoutes;
- (void)_savePickableRoutes:(id)arg1;
- (void)clearAudioRoutes;
- (id)currentPickableAudioRoutes;
- (void)dealloc;
- (id)fetchCurrentPickableAudioRoutesIfNeeded;
- (void)fetchCurrentPickableAudioRoutesIfNeededAsync:(id /* block */)arg1;
- (id)fetchHearingAidsPeripheralUUIDs;
- (id)init;
- (bool)isRouteUIDHearingAidPeripheralUUID:(id)arg1 inPeripheralUUIDs:(id)arg2;
- (void)mediaServerDied;
- (bool)oldRoutes:(id)arg1 equalToNewRoutes:(id)arg2;
- (void)pickableAudioRoutesDidChange:(id)arg1;
- (void)registerNotifications;
- (id)routingQueue;
- (void)setRoutingQueue:(id)arg1;

@end
