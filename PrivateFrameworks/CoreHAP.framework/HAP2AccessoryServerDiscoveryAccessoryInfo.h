
@interface HAP2AccessoryServerDiscoveryAccessoryInfo : HAP2LoggingObject {
    HAPDeviceID * _deviceID;
    NSDictionary * _rawDiscoveryInfo;
}

@property (nonatomic, readonly, copy) NSString *airPlayDeviceUUIDString;
@property (nonatomic, readonly) HAPDeviceID *deviceID;
@property (nonatomic, readonly) NSDictionary *rawDiscoveryInfo;

+ (id)new;

- (void).cxx_destruct;
- (id)airPlayDeviceUUIDString;
- (id)deviceID;
- (id)init;
- (id)initWithDeviceID:(id)arg1 rawDiscoveryInfo:(id)arg2;
- (id)rawDiscoveryInfo;

@end
