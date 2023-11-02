
@interface MediaControlsStandaloneEndpointController : MediaControlsEndpointController <MPAVRoutingControllerDelegate, MediaControlsEndpointControllerConnectionDelegate, MediaControlsEndpointObserverDelegate> {
    bool  _allowsAutomaticResponseLoading;
    bool  _endpointDiscovered;
    MPMRAVEndpointObserverWrapper * _endpointObserver;
    NSString * _routeUID;
    MPAVRoutingController * _routingController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEndpointDiscovered, nonatomic) bool endpointDiscovered;
@property (nonatomic, retain) MPMRAVEndpointObserverWrapper *endpointObserver;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *routeUID;
@property (nonatomic, readonly) MPAVRoutingController *routingController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_routeForEndpoint:(struct __MRAVEndpointRef { }*)arg1;
- (void)beginObserving;
- (bool)controller:(id)arg1 shouldRetryFailedRequestWithError:(id)arg2;
- (void)dealloc;
- (void)endObserving;
- (void)endpointController:(id)arg1 willAttemptToConnectToRoute:(id)arg2;
- (id)endpointObserver;
- (id)initWithEndpoint:(id)arg1;
- (id)initWithEndpoint:(id)arg1 client:(id)arg2 player:(id)arg3;
- (id)initWithRouteUID:(id)arg1;
- (id)initWithRouteUID:(id)arg1 client:(id)arg2 player:(id)arg3;
- (bool)isEndpointDiscovered;
- (id)proxyDelegate;
- (id)routeUID;
- (id)routingController;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)setAllowsAutomaticResponseLoading:(bool)arg1;
- (void)setEndpointDiscovered:(bool)arg1;
- (void)setEndpointObserver:(id)arg1;
- (void)setRoute:(id)arg1;
- (void)setRouteUID:(id)arg1;
- (void)updateAllowsAutomaticResponseLoading;

@end
