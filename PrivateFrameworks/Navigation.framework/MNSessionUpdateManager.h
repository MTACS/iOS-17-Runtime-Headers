
@interface MNSessionUpdateManager : NSObject <GEOTransitRouteUpdaterDelegate> {
    GEOApplicationAuditToken * _auditToken;
    NSDate * _dateOfLastUpdate;
    <MNSessionUpdateManagerDelegate> * _delegate;
    double  _etaRequestInterval;
    NSTimer * _etaTimer;
    double  _initialRequestDelay;
    bool  _isPaused;
    bool  _lastRequestWasServerDriven;
    unsigned long long  _maxAlternateRoutesCount;
    double  _opportunisticRequestTimeWindow;
    GEOETATrafficUpdateRequest * _pendingETARequest;
    GEOComposedETARoute * _pendingETARoute;
    NSString * _requestingAppIdentifier;
    MNSoundEffectResourceController * _sfxController;
    NSMutableDictionary * _subscribers;
    GEODataRequestThrottlerToken * _throttleToken;
    GEOTransitRouteUpdater * _transitUpdater;
    GEOLatLng * _tripOrigin;
}

@property (nonatomic, retain) GEOApplicationAuditToken *auditToken;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MNSessionUpdateManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long maxAlternateRoutesCount;
@property (nonatomic, copy) NSString *requestingAppIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, retain) GEODataRequestThrottlerToken *throttleToken;
@property (nonatomic, retain) GEOLatLng *tripOrigin;

- (void).cxx_destruct;
- (id)_baseETARequest;
- (void)_cancelPendingETARequest;
- (void)_continueETARequests;
- (void)_handleETAResponse:(id)arg1 forRouteInfo:(id)arg2 etaRoute:(id)arg3;
- (bool)_hasAtLeastOneActiveSubscriber;
- (void)_scheduleETATimerWithInterval:(double)arg1;
- (void)_sendETARequest;
- (void)_sendETARequestWithParameters:(id)arg1;
- (void)_terminateETARequests;
- (id)_updateETARequest:(id)arg1 withRouteInfo:(id)arg2 andUserLocation:(id)arg3;
- (void)_updateForETARoute:(id)arg1;
- (void)_updateRouteAttributesFor:(id)arg1 route:(id)arg2 updatedLocation:(id)arg3 completion:(id /* block */)arg4;
- (id)_updateWaypointsForRequest:(id)arg1 routeInfo:(id)arg2 userLocation:(id)arg3 etaRoute:(id)arg4;
- (id)auditToken;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (unsigned long long)maxAlternateRoutesCount;
- (void)pauseUpdateRequestsForSubscriber:(id)arg1;
- (void)requestImmediateUpdate;
- (void)requestUpdateForETAUPosition:(id)arg1;
- (id)requestingAppIdentifier;
- (void)restartUpdateTimer;
- (void)resumeUpdateRequestsForSubscriber:(id)arg1;
- (void)sendFinalETAURequest;
- (void)setAuditToken:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMaxAlternateRoutesCount:(unsigned long long)arg1;
- (void)setRequestingAppIdentifier:(id)arg1;
- (void)setThrottleToken:(id)arg1;
- (void)setTripOrigin:(id)arg1;
- (void)startUpdateRequestsForRoutes:(id)arg1 andNavigationType:(long long)arg2;
- (void)stopUpdateRequests;
- (id)throttleToken;
- (void)transitRouteUpdater:(id)arg1 didFailUpdateForRouteIDs:(id)arg2 withError:(id)arg3;
- (void)transitRouteUpdater:(id)arg1 didReceiveResponse:(id)arg2;
- (void)transitRouteUpdater:(id)arg1 didUpdateTransitRoutes:(id)arg2;
- (void)transitRouteUpdater:(id)arg1 willSendRequests:(id)arg2;
- (void)transitRouteUpdater:(id)arg1 willUpdateTransitForRouteIDs:(id)arg2;
- (id)tripOrigin;

@end
