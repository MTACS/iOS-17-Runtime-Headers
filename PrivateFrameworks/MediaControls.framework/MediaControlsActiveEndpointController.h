
@interface MediaControlsActiveEndpointController : MediaControlsEndpointController <MPAVRoutingControllerDelegate, MediaControlsEndpointControllerConnectionDelegate, MediaControlsEndpointObserverDelegate> {
    NSString * _activeEndpointUID;
    NSString * _activeRouteUID;
    MPCFuture * _deferredPlayerPathFuture;
    id  _deferredPlayerPathInvalidationToken;
    MSVPersistentTimer * _deferredPlayerPathTimer;
    long long  _endpointType;
    bool  _isDeferred;
}

@property (nonatomic, retain) NSString *activeEndpointUID;
@property (nonatomic, readonly) NSString *activeRouteUID;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) MPCFuture *deferredPlayerPathFuture;
@property (nonatomic, retain) id deferredPlayerPathInvalidationToken;
@property (nonatomic, retain) MSVPersistentTimer *deferredPlayerPathTimer;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long endpointType;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isDeferred;
@property (readonly) Class superclass;

+ (double)mediaRecentlyPlayedTimeout;

- (void).cxx_destruct;
- (void)_activeSystemRouteDidChangeWithChangeType:(long long)arg1;
- (void)_fetchActiveSystemRoute:(id /* block */)arg1;
- (void)_maybeRestoreDeferredPlayerPath;
- (void)_maybeUpdateActiveSystemRoute;
- (void)_resetDeferredPlayerPath;
- (void)_restoreDeferredPlayerPath;
- (id)_routeForEndpoint:(struct __MRAVEndpointRef { }*)arg1;
- (void)_updateActiveSystemRoute;
- (id)activeEndpointUID;
- (id)activeRouteUID;
- (void)activeSystemRouteDidChangeNotification:(id)arg1;
- (bool)controller:(id)arg1 shouldRetryFailedRequestWithError:(id)arg2;
- (id)deferredPlayerPathFuture;
- (id)deferredPlayerPathInvalidationToken;
- (id)deferredPlayerPathTimer;
- (void)endpointController:(id)arg1 willAttemptToConnectToRoute:(id)arg2;
- (long long)endpointType;
- (id)initWithActiveEndpointType:(long long)arg1;
- (bool)isDeferred;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)setActiveEndpointUID:(id)arg1;
- (void)setDeferredPlayerPathFuture:(id)arg1;
- (void)setDeferredPlayerPathInvalidationToken:(id)arg1;
- (void)setDeferredPlayerPathTimer:(id)arg1;
- (void)setDeviceUnlocked:(bool)arg1;
- (void)setEndpointType:(long long)arg1;
- (void)setIsDeferred:(bool)arg1;
- (void)setOnScreen:(bool)arg1;

@end
