
@interface MNWalkingRouteBackgroundLoader : NSObject <MNNavigationSessionStateListener> {
    GEOApplicationAuditToken * _auditToken;
    NSDate * _dateSinceLastRouteRequest;
    <MNWalkingRouteBackgroundLoaderDelegate> * _delegate;
    bool  _isFetchingWalkingRoutes;
    struct { 
        double latitude; 
        double longitude; 
        double altitude; 
    }  _lastFailedRequestCoordinate;
    MNNavigationSessionState * _navigationSessionState;
    GEODirectionsServiceRequest * _pendingRequest;
    NSString * _requestingAppIdentifier;
    MNActiveRouteInfo * _walkingRouteInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MNWalkingRouteBackgroundLoaderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) MNNavigationSessionState *navigationSessionState;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MNActiveRouteInfo *walkingRouteInfo;

- (void).cxx_destruct;
- (void)_handleWalkingRouteResponse:(id)arg1;
- (unsigned long long)_requestTypeForArrivalState:(long long)arg1;
- (id)_requestWalkingRouteWithHandler:(id /* block */)arg1;
- (void)_updateForLocation:(id)arg1;
- (void)_updateWalkingRoute;
- (void)dealloc;
- (id)delegate;
- (id)navigationSessionState;
- (void)setDelegate:(id)arg1;
- (void)setNavigationSessionState:(id)arg1;
- (void)start;
- (void)stop;
- (id)walkingRouteInfo;

@end
