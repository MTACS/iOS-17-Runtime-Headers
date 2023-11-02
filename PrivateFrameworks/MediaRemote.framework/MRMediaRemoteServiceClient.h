
@interface MRMediaRemoteServiceClient : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    MRPlayerPath * _activePlayerPath;
    MRPlayerPath * _currentSessionPlayerPath;
    MRNotificationClient * _notificationClient;
    MRNotificationServiceClient * _notificationService;
    MRNowPlayingSessionServiceClient * _nowPlayingSessionService;
    NSObject<OS_dispatch_queue> * _playbackQueueDispatchQueue;
    NSMutableSet * _playerPathInvalidationHandlers;
    NSArray * _registeredOrigins;
    MRAVRoutingClientController * _routingClientController;
    MRMediaRemoteService * _service;
    NSHashTable * _weakDiscoverySessions;
    NSHashTable * _weakEndpointObservers;
    NSHashTable * _weakEndpoints;
    NSHashTable * _weakExternalDevices;
    NSHashTable * _weakNowPlayingControllers;
}

@property (nonatomic, retain) MRPlayerPath *activePlayerPath;
@property (nonatomic, retain) MRPlayerPath *currentSessionPlayerPath;
@property (nonatomic, readonly) MRNotificationClient *notificationClient;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *playbackQueueDispatchQueue;
@property (nonatomic, readonly) NSArray *registeredOrigins;
@property (nonatomic, readonly) MRMediaRemoteService *service;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workerQueue;

+ (id)sharedServiceClient;

- (void).cxx_destruct;
- (id)activePlayerPath;
- (void)addDiscoverySession:(id)arg1;
- (void)addDistantEndpoint:(id)arg1;
- (void)addDistantExternalDevice:(id)arg1;
- (void)addEndpointObserver:(id)arg1;
- (void)addNowPlayingController:(id)arg1;
- (id)addPlayerPathInvalidationHandler:(id)arg1;
- (id)currentSessionPlayerPath;
- (void)dealloc;
- (id)debugDescription;
- (void)fetchPickableRoutesWithCategory:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)notificationClient;
- (id)playbackQueueDispatchQueue;
- (void)processPlayerPathInvalidationHandlersWithBlock:(id /* block */)arg1;
- (void)processPlayerPathInvalidationHandlersWithInvalidOrigin:(id)arg1;
- (id)registeredOrigins;
- (void)removeDiscoverySession:(id)arg1;
- (void)removeDistantEndpoint:(id)arg1;
- (void)removeDistantExternalDevice:(id)arg1;
- (void)removeEndpointObserver:(id)arg1;
- (void)removeInvalidationHandler:(id)arg1;
- (void)removeNowPlayingController:(id)arg1;
- (id)service;
- (void)setActivePlayerPath:(id)arg1;
- (void)setCurrentSessionPlayerPath:(id)arg1;
- (void)setPlaybackQueueDispatchQueue:(id)arg1;
- (id)workerQueue;

@end
