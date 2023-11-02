
@interface IDSFamilyEndpointData : NSObject <NSSecureCoding> {
    NSString * _buildVersion;
    NSString * _deviceColor;
    NSString * _deviceName;
    long long  _deviceType;
    NSString * _deviceUniqueID;
    NSString * _productVersion;
}

@property (nonatomic, retain) NSString *buildVersion;
@property (nonatomic, retain) NSString *deviceColor;
@property (nonatomic, retain) NSString *deviceName;
@property (nonatomic) long long deviceType;
@property (nonatomic, retain) NSString *deviceUniqueID;
@property (nonatomic, retain) NSString *productVersion;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)buildVersion;
- (id)debugDescription;
- (id)deviceColor;
- (id)deviceName;
- (long long)deviceType;
- (id)deviceUniqueID;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceName:(id)arg1 privateDeviceData:(id)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)productVersion;
- (void)setBuildVersion:(id)arg1;
- (void)setDeviceColor:(id)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setDeviceType:(long long)arg1;
- (void)setDeviceUniqueID:(id)arg1;
- (void)setProductVersion:(id)arg1;

@end
