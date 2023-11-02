
@interface SRReaderRecordingRequest : NSObject <SRRequestRecording> {
    NSString * _bundleIdentifier;
    NSError * _configurationDecodeError;
    NSString * _deviceIdentifier;
    NSString * _sensor;
    NSDictionary * _sensorConfiguration;
}

@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic, readonly, retain) NSError *configurationDecodeError;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *deviceIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *sensor;
@property (nonatomic, retain) NSDictionary *sensorConfiguration;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (id)bundleIdentifier;
- (id)configurationDecodeError;
- (void)dealloc;
- (id)description;
- (id)deviceIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)sensor;
- (id)sensorConfiguration;
- (void)setBundleIdentifier:(id)arg1;
- (void)setDeviceIdentifier:(id)arg1;
- (void)setSensor:(id)arg1;
- (void)setSensorConfiguration:(id)arg1;

@end
