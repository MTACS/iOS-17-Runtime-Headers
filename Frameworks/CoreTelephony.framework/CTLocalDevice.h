
@interface CTLocalDevice : NSObject <NSSecureCoding> {
    CTDeviceIdentifier * _deviceID;
    NSArray * _installedPlans;
}

@property (nonatomic, retain) CTDeviceIdentifier *deviceID;
@property (nonatomic, retain) NSArray *installedPlans;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)EID;
- (id)description;
- (id)deviceID;
- (id)deviceName;
- (unsigned long long)deviceType;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)installedPlans;
- (bool)isEqual:(id)arg1;
- (void)setDeviceID:(id)arg1;
- (void)setInstalledPlans:(id)arg1;

@end
