
@interface GKFoundationRuntimeStrategy : NSObject <GKRuntimeStrategy> {
    GKDaemonProxy * _daemonProxy;
}

@property (readonly) <GKGameSessionService> *gameSessionService;
@property (readonly) bool shouldRefreshPreferencesAfterBackgrounding;
@property (readonly) <GKUtilityService> *utilityService;
@property (readonly) <GKUtilityServicePrivate> *utilityServicePrivate;

- (void).cxx_destruct;
- (id)gameSessionService;
- (id)initWithDaemonProxy:(id)arg1;
- (id)localPlayer;
- (void)requestClientsRemoteImageDataForURL:(id)arg1 queue:(id)arg2 reply:(id /* block */)arg3;
- (bool)shouldRefreshPreferencesAfterBackgrounding;
- (id)utilityService;
- (id)utilityServicePrivate;

@end
