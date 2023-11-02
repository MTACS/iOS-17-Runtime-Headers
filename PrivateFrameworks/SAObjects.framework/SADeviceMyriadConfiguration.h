
@interface SADeviceMyriadConfiguration : SABaseClientBoundCommand

@property (nonatomic) double deviceAdjustment;
@property (nonatomic) double deviceClass;
@property (nonatomic) double deviceDelay;
@property (nonatomic) double deviceTrumpDelay;
@property (nonatomic) double deviceVTEndtimeDistanceThreshold;

+ (id)deviceMyriadConfiguration;
+ (id)deviceMyriadConfigurationWithDictionary:(id)arg1 context:(id)arg2;

- (double)deviceAdjustment;
- (double)deviceClass;
- (double)deviceDelay;
- (double)deviceTrumpDelay;
- (double)deviceVTEndtimeDistanceThreshold;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setDeviceAdjustment:(double)arg1;
- (void)setDeviceClass:(double)arg1;
- (void)setDeviceDelay:(double)arg1;
- (void)setDeviceTrumpDelay:(double)arg1;
- (void)setDeviceVTEndtimeDistanceThreshold:(double)arg1;

@end
