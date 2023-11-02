
@interface GEOComposedRouteEVChargingStationInfo : NSObject <NSSecureCoding> {
    double  _batteryChargeAfterCharging;
    double  _batteryPercentageAfterCharging;
    double  _chargingTime;
    unsigned long long  _muid;
    NSString * _name;
}

@property (nonatomic, readonly) double batteryChargeAfterCharging;
@property (nonatomic, readonly) double batteryPercentageAfterCharging;
@property (nonatomic, readonly) double chargingTime;
@property (nonatomic, readonly) unsigned long long muid;
@property (nonatomic, readonly) NSString *name;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)batteryChargeAfterCharging;
- (double)batteryPercentageAfterCharging;
- (double)chargingTime;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithGeoEVChargingInfo:(id)arg1 muid:(unsigned long long)arg2 name:(id)arg3;
- (unsigned long long)muid;
- (id)name;

@end
