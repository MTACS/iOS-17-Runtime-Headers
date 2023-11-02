
@interface CTRemoteDevice : NSObject <NSSecureCoding> {
    CTDeviceIdentifier * _deviceID;
    bool  _isMultiESimEnabled;
    NSArray * _remoteDisplayPlans;
    NSArray * _remotePlans;
}

@property (nonatomic, retain) CTDeviceIdentifier *deviceID;
@property (nonatomic) bool isMultiESimEnabled;
@property (nonatomic, retain) NSArray *remoteDisplayPlans;
@property (nonatomic, retain) NSArray *remotePlans;

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
- (bool)isEqual:(id)arg1;
- (bool)isMultiESimEnabled;
- (id)modelName;
- (id)remoteDisplayPlans;
- (id)remotePlans;
- (void)setDeviceID:(id)arg1;
- (void)setIsMultiESimEnabled:(bool)arg1;
- (void)setRemoteDisplayPlans:(id)arg1;
- (void)setRemotePlans:(id)arg1;

@end
