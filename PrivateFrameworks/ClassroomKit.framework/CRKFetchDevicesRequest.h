
@interface CRKFetchDevicesRequest : CATTaskRequest {
    NSArray * _deviceIdentifiers;
}

@property (nonatomic, copy) NSArray *deviceIdentifiers;

+ (Class)allowlistedClassForResultObject;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)deviceIdentifiers;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setDeviceIdentifiers:(id)arg1;

@end
