
@interface DMTFetchAutomatedDeviceEnrollmentPrerequisitesResultObject : CATTaskResultObject {
    NSString * _deviceUDID;
    NSString * _modelIdentifier;
    NSString * _modelName;
    NSString * _serialNumber;
}

@property (nonatomic, copy) NSString *deviceUDID;
@property (nonatomic, copy) NSString *modelIdentifier;
@property (nonatomic, copy) NSString *modelName;
@property (nonatomic, copy) NSString *serialNumber;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)deviceUDID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)modelIdentifier;
- (id)modelName;
- (id)serialNumber;
- (void)setDeviceUDID:(id)arg1;
- (void)setModelIdentifier:(id)arg1;
- (void)setModelName:(id)arg1;
- (void)setSerialNumber:(id)arg1;

@end
