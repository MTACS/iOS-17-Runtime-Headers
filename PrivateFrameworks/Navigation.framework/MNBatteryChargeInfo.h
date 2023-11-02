
@interface MNBatteryChargeInfo : NSObject <NSSecureCoding> {
    double  _batteryChargeRemainingAtEndOfLeg;
    double  _batteryChargeRemainingAtEndOfRoute;
    unsigned long long  _legIndex;
    NSUUID * _routeID;
}

@property (nonatomic, readonly) double batteryChargeRemainingAtEndOfLeg;
@property (nonatomic, readonly) double batteryChargeRemainingAtEndOfRoute;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)batteryChargeRemainingAtEndOfLeg;
- (double)batteryChargeRemainingAtEndOfRoute;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithBatteryChargeRemainingAtEndOfLeg:(double)arg1 batteryChargeRemainingAtEndOfRoute:(double)arg2 forLegIndex:(unsigned long long)arg3 forRouteID:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
