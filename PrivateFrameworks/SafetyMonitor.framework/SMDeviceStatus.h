
@interface SMDeviceStatus : NSObject <NSSecureCoding> {
    long long  _batteryRemaining;
    unsigned long long  _cellularStrength;
    NSDate * _date;
    NSUUID * _identifier;
    unsigned long long  _wifiStrength;
}

@property (nonatomic) long long batteryRemaining;
@property (nonatomic) unsigned long long cellularStrength;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic) unsigned long long wifiStrength;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)batteryRemaining;
- (unsigned long long)cellularStrength;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithIdentifier:(id)arg1 batteryRemaining:(long long)arg2 cellularStrength:(unsigned long long)arg3 date:(id)arg4 wifiStrength:(unsigned long long)arg5;
- (id)outputToDictionary;
- (void)setBatteryRemaining:(long long)arg1;
- (void)setCellularStrength:(unsigned long long)arg1;
- (void)setDate:(id)arg1;
- (void)setWifiStrength:(unsigned long long)arg1;
- (unsigned long long)wifiStrength;

@end
