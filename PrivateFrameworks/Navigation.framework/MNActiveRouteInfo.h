
@interface MNActiveRouteInfo : NSObject <NSSecureCoding> {
    unsigned long long  _alternateRouteIndex;
    MNBatteryChargeInfo * _batteryChargeInfo;
    MNDisplayETAInfo * _displayETAInfo;
    GEOETATrafficUpdateResponse * _etaResponse;
    GEOComposedETARoute * _etaRoute;
    MNRouteDistanceInfo * _remainingDistanceInfo;
    GEOComposedRoute * _route;
}

@property (nonatomic) unsigned long long alternateRouteIndex;
@property (nonatomic, retain) MNBatteryChargeInfo *batteryChargeInfo;
@property (nonatomic, retain) MNDisplayETAInfo *displayETAInfo;
@property (nonatomic, retain) GEOETATrafficUpdateResponse *etaResponse;
@property (nonatomic, retain) GEOComposedETARoute *etaRoute;
@property (nonatomic, retain) MNRouteDistanceInfo *remainingDistanceInfo;
@property (nonatomic, retain) GEOComposedRoute *route;
@property (nonatomic, readonly) NSUUID *routeID;
@property (nonatomic, readonly) GEOComposedRouteTraffic *traffic;
@property (nonatomic, readonly) GEOTransitRouteUpdateRequest *transitRouteUpdateRequest;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)alternateRouteIndex;
- (id)batteryChargeInfo;
- (id)description;
- (id)displayETAInfo;
- (void)encodeWithCoder:(id)arg1;
- (id)etaResponse;
- (id)etaRoute;
- (id)initWithCoder:(id)arg1;
- (id)initWithRoute:(id)arg1;
- (id)initWithRoute:(id)arg1 trafficRoute:(id)arg2 routeInitalizerData:(id)arg3;
- (id)remainingDistanceInfo;
- (id)route;
- (id)routeID;
- (void)setAlternateRouteIndex:(unsigned long long)arg1;
- (void)setBatteryChargeInfo:(id)arg1;
- (void)setDisplayETAInfo:(id)arg1;
- (void)setEtaResponse:(id)arg1;
- (void)setEtaRoute:(id)arg1;
- (void)setRemainingDistanceInfo:(id)arg1;
- (void)setRoute:(id)arg1;
- (id)traffic;
- (id)transitRouteUpdateRequest;

@end
