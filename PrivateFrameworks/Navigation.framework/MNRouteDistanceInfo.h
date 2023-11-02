
@interface MNRouteDistanceInfo : NSObject <NSSecureCoding> {
    double  _distanceRemainingToEndOfLeg;
    double  _distanceRemainingToEndOfRoute;
    unsigned long long  _legIndex;
    NSUUID * _routeID;
}

@property (nonatomic, readonly) double distanceRemainingToEndOfLeg;
@property (nonatomic, readonly) double distanceRemainingToEndOfRoute;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (double)distanceRemainingToEndOfLeg;
- (double)distanceRemainingToEndOfRoute;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDistanceRemainingToEndOfLeg:(double)arg1 distanceRemainingToEndOfRoute:(double)arg2 forLegIndex:(unsigned long long)arg3 forRouteID:(id)arg4;
- (bool)isEqual:(id)arg1;

@end
