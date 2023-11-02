
@interface GEOComposedRouteEVStepInfo : NSObject <NSSecureCoding> {
    unsigned int  _remainingBatteryCharge;
    unsigned int  _remainingBatteryPercentage;
}

@property (nonatomic, readonly) unsigned int remainingBatteryCharge;
@property (nonatomic, readonly) unsigned int remainingBatteryPercentage;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithEVStateInfo:(id)arg1;
- (unsigned int)remainingBatteryCharge;
- (unsigned int)remainingBatteryPercentage;

@end
