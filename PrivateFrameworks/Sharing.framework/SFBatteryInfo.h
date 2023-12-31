
@interface SFBatteryInfo : NSObject <NSSecureCoding> {
    double  _batteryLevel;
    long long  _batteryState;
    long long  _batteryType;
}

@property (nonatomic) double batteryLevel;
@property (nonatomic) long long batteryState;
@property (nonatomic) long long batteryType;

+ (bool)supportsSecureCoding;

- (double)batteryLevel;
- (long long)batteryState;
- (long long)batteryType;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setBatteryLevel:(double)arg1;
- (void)setBatteryState:(long long)arg1;
- (void)setBatteryType:(long long)arg1;

@end
