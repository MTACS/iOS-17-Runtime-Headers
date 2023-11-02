
@interface MNRouteManager : NSObject <MNLocationManagerObserver> {
    NSArray * _allRoutes;
    NSMutableArray * _alternateRoutes;
    GEOApplicationAuditToken * _auditToken;
    GEOCommonOptions * _commonOptions;
    NSArray * _contingencyRouteSegments;
    MNActiveRouteInfo * _currentRouteInfo;
    GEODirectionsRequest * _directionsRequest;
    GEODirectionsResponse * _directionsResponse;
    GEOComposedWaypoint * _originalDestination;
    GEOComposedRoute * _originalRoute;
    MNActiveRouteInfo * _originalRouteInfo;
    GEORoutePreloader * _preloader;
    NSArray * _previewRoutes;
    NSString * _requestingAppIdentifier;
    GEORouteAttributes * _routeAttributes;
    unsigned long long  _selectedRouteIndex;
    NSString * _tileLoaderClientIdentifier;
}

@property (nonatomic, readonly) NSArray *allRoutes;
@property (nonatomic, readonly) NSArray *alternateRoutes;
@property (nonatomic, readonly) GEOCommonOptions *commonOptions;
@property (nonatomic, readonly) NSArray *contingencyRouteSegments;
@property (nonatomic, readonly) GEOComposedRoute *currentRoute;
@property (nonatomic, readonly) MNActiveRouteInfo *currentRouteInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) GEODirectionsRequest *directionsRequest;
@property (nonatomic, readonly) GEODirectionsResponse *directionsResponse;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) GEOComposedWaypoint *originalDestination;
@property (nonatomic, readonly) GEOComposedRoute *originalRoute;
@property (nonatomic, readonly) NSArray *previewRoutes;
@property (nonatomic, readonly) NSString *requestingAppIdentifier;
@property (nonatomic, readonly) GEORouteAttributes *routeAttributes;
@property (nonatomic) unsigned long long selectedRouteIndex;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_clearPreloader;
- (void)_updatePreloaderForRoute:(id)arg1;
- (id)allRoutes;
- (id)alternateRoutes;
- (void)clearCurrentRoute;
- (void)close;
- (id)commonOptions;
- (id)contingencyRouteSegments;
- (id)currentRoute;
- (id)currentRouteInfo;
- (void)dealloc;
- (id)directionsRequest;
- (id)directionsResponse;
- (id)init;
- (id)initWithAuditToken:(id)arg1;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (bool)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (void)open;
- (id)originalDestination;
- (id)originalRoute;
- (id)previewRoutes;
- (id)requestingAppIdentifier;
- (id)routeAttributes;
- (unsigned long long)selectedRouteIndex;
- (void)setSelectedRouteIndex:(unsigned long long)arg1;
- (void)updateForLocation:(id)arg1;
- (void)updateForReroute:(id)arg1 rerouteReason:(unsigned long long)arg2 request:(id)arg3 response:(id)arg4;
- (void)updateWithAlternateRoutes:(id)arg1;
- (void)updateWithPreviewRoutes:(id)arg1 selectedRouteIndex:(unsigned long long)arg2;
- (void)updateWithStartNavigationDetails:(id)arg1;

@end
