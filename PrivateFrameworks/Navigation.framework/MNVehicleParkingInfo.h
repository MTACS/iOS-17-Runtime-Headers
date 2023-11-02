
@interface MNVehicleParkingInfo : NSObject <NSSecureCoding> {
    long long  _parkingType;
    GEOComposedRoute * _remainingWalkingRoute;
    NSUUID * _routeID;
    MNDisplayETAInfo * _walkingRouteDisplayETAInfo;
}

@property (nonatomic) long long parkingType;
@property (nonatomic, retain) GEOComposedRoute *remainingWalkingRoute;
@property (nonatomic, retain) MNDisplayETAInfo *walkingRouteDisplayETAInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)parkingType;
- (id)remainingWalkingRoute;
- (void)setParkingType:(long long)arg1;
- (void)setRemainingWalkingRoute:(id)arg1;
- (void)setWalkingRouteDisplayETAInfo:(id)arg1;
- (id)walkingRouteDisplayETAInfo;

@end
