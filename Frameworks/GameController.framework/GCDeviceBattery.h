
@interface GCDeviceBattery : NSObject <NSSecureCoding> {
    float  _batteryLevel;
    long long  _batteryState;
}

@property (nonatomic) float batteryLevel;
@property (nonatomic) long long batteryState;

+ (bool)supportsSecureCoding;

- (void)_setBatteryLevel:(float)arg1;
- (void)_setBatteryState:(long long)arg1;
- (float)batteryLevel;
- (long long)batteryState;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLevel:(float)arg1 batteryState:(long long)arg2;
- (id)initWithLevel:(unsigned char)arg1 isCharging:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (void)setBatteryLevel:(float)arg1;
- (void)setBatteryState:(long long)arg1;

@end
