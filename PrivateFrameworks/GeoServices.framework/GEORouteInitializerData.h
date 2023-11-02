
@interface GEORouteInitializerData : NSObject <NSSecureCoding> {
    GEODirectionsRequest * _directionsRequest;
    GEODirectionsResponse * _directionsResponse;
    GEOETATrafficUpdateResponse * _etaTrafficUpdateResponse;
    GEORouteAttributes * _routeAttributes;
    GEOStyleAttributes * _styleAttributes;
    NSArray * _waypoints;
}

@property (nonatomic, readonly) GEODirectionsRequest *directionsRequest;
@property (nonatomic, readonly) GEODirectionsResponse *directionsResponse;
@property (nonatomic, readonly) GEOETATrafficUpdateResponse *etaTrafficUpdateResponse;
@property (nonatomic, readonly) GEORouteAttributes *routeAttributes;
@property (nonatomic, readonly) GEOStyleAttributes *styleAttributes;
@property (nonatomic, readonly) NSArray *waypoints;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_allRoutesWithTypes:(int)arg1;
- (id)allETAUAlternateRoutes;
- (id)allRoutes;
- (id)directionsRequest;
- (id)directionsResponse;
- (void)encodeWithCoder:(id)arg1;
- (id)etaTrafficUpdateResponse;
- (id)initWithCoder:(id)arg1;
- (id)initWithWaypoints:(id)arg1 routeAttributes:(id)arg2 directionsResponse:(id)arg3;
- (id)initWithWaypoints:(id)arg1 routeAttributes:(id)arg2 directionsResponse:(id)arg3 directionsRequest:(id)arg4;
- (id)initWithWaypoints:(id)arg1 routeAttributes:(id)arg2 etauResponse:(id)arg3 styleAttributes:(id)arg4;
- (id)mainRoute;
- (id)nonRecommendedRoutes;
- (id)routeAttributes;
- (id)styleAttributes;
- (id)waypoints;

// Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation

- (id)allETAUAlternateRouteInfos;
- (id)allRouteInfos;
- (id)mainRouteInfo;

@end
