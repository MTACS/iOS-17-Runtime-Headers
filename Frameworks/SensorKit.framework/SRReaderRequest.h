
@interface SRReaderRequest : NSObject <SRRequestReading> {
    NSString * _bundleIdentifier;
    NSString * _deviceIdentifier;
    NSString * _sensor;
}

@property (nonatomic, retain) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *deviceIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *sensor;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (id)bundleIdentifier;
- (void)dealloc;
- (id)description;
- (id)deviceIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)sensor;
- (void)setBundleIdentifier:(id)arg1;
- (void)setDeviceIdentifier:(id)arg1;
- (void)setSensor:(id)arg1;

@end
