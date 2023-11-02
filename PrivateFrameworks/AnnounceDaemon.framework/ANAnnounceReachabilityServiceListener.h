
@interface ANAnnounceReachabilityServiceListener : NSObject <ANAnnounceReachabilityManagerDelegate, ANAnnounceReachabilityServiceInterface, NSXPCListenerDelegate> {
    NSMutableSet * _connections;
    NSXPCListener * _listener;
    ANAnnounceReachabilityManager * _reachabilityManager;
}

@property (retain) NSMutableSet *connections;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSXPCListener *listener;
@property (nonatomic, retain) ANAnnounceReachabilityManager *reachabilityManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addConnection:(id)arg1;
- (void)_removeConnection:(id)arg1;
- (void)_sendCurrentReachabilityToConnection:(id)arg1;
- (void)announceReachabilityForHomeName:(id)arg1 reply:(id /* block */)arg2;
- (void)announceReachabilityForHomeUUID:(id)arg1 reply:(id /* block */)arg2;
- (void)announceReachabilityForRoomName:(id)arg1 inHomeName:(id)arg2 reply:(id /* block */)arg3;
- (void)announceReachabilityForRoomUUID:(id)arg1 inHomeUUID:(id)arg2 reply:(id /* block */)arg3;
- (void)cleanForExit;
- (id)connections;
- (id)init;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)reachabilityLevel:(unsigned long long)arg1 didChangeForHome:(id)arg2;
- (void)reachabilityLevel:(unsigned long long)arg1 didChangeForRoom:(id)arg2 inHome:(id)arg3;
- (id)reachabilityManager;
- (void)resumeWithCompletionHandler:(id /* block */)arg1;
- (void)setConnections:(id)arg1;
- (void)setReachabilityManager:(id)arg1;

@end
