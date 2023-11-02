
@interface BTCloudDeviceSupportInformation : NSObject <NSSecureCoding> {
    NSString * _ancAssetVersion;
    NSString * _bluetoothAddress;
    NSString * _budsFirmwareVersion;
    NSString * _caseFirmwareVersion;
    NSString * _caseName;
    NSString * _caseSerialNumber;
    NSString * _hardwareVersion;
    NSString * _leftBudSerialNumber;
    NSString * _rightBudSerialNumber;
}

@property (nonatomic, retain) NSString *ancAssetVersion;
@property (nonatomic, retain) NSString *bluetoothAddress;
@property (nonatomic, retain) NSString *budsFirmwareVersion;
@property (nonatomic, retain) NSString *caseFirmwareVersion;
@property (nonatomic, retain) NSString *caseName;
@property (nonatomic, retain) NSString *caseSerialNumber;
@property (nonatomic, retain) NSString *hardwareVersion;
@property (nonatomic, retain) NSString *leftBudSerialNumber;
@property (nonatomic, retain) NSString *rightBudSerialNumber;

+ (id)deviceSupportInformationWithBluetoothAddress:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)ancAssetVersion;
- (id)bluetoothAddress;
- (id)budsFirmwareVersion;
- (id)caseFirmwareVersion;
- (id)caseName;
- (id)caseSerialNumber;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)hardwareVersion;
- (id)initWithBluetoothAddress:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)leftBudSerialNumber;
- (id)rightBudSerialNumber;
- (void)setAncAssetVersion:(id)arg1;
- (void)setBluetoothAddress:(id)arg1;
- (void)setBudsFirmwareVersion:(id)arg1;
- (void)setCaseFirmwareVersion:(id)arg1;
- (void)setCaseName:(id)arg1;
- (void)setCaseSerialNumber:(id)arg1;
- (void)setHardwareVersion:(id)arg1;
- (void)setLeftBudSerialNumber:(id)arg1;
- (void)setRightBudSerialNumber:(id)arg1;

@end
