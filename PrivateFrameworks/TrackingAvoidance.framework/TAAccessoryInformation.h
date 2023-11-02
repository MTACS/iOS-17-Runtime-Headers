
@interface TAAccessoryInformation : NSObject <NSSecureCoding> {
    NSData * _accessoryCapabilities;
    NSData * _accessoryCategory;
    unsigned long long  _deviceType;
    NSData * _firmwareVersion;
    NSUUID * _identifier;
    NSString * _manufacturerName;
    NSString * _modelName;
    NSData * _productData;
}

@property (nonatomic, copy) NSData *accessoryCapabilities;
@property (nonatomic, copy) NSData *accessoryCategory;
@property (nonatomic, readonly) unsigned long long deviceType;
@property (nonatomic, copy) NSData *firmwareVersion;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, copy) NSString *manufacturerName;
@property (nonatomic, copy) NSString *modelName;
@property (nonatomic, copy) NSData *productData;
@property (readonly) unsigned int productId;
@property (readonly) unsigned int vendorId;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessoryCapabilities;
- (id)accessoryCategory;
- (id)accessoryTypeName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionDictionary;
- (unsigned long long)deviceType;
- (void)encodeWithCoder:(id)arg1;
- (id)firmwareVersion;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceUUID:(id)arg1 deviceType:(unsigned long long)arg2 productData:(id)arg3 manufacturerName:(id)arg4 modelName:(id)arg5 firmwareVersion:(id)arg6 accessoryCategory:(id)arg7 accessoryCapabilities:(id)arg8;
- (bool)isCapableOfPrecisionFinding;
- (bool)isEqual:(id)arg1;
- (bool)isHawkeyeAudioAccessory;
- (id)manufacturerName;
- (id)modelName;
- (id)productData;
- (unsigned int)productId;
- (void)setAccessoryCapabilities:(id)arg1;
- (void)setAccessoryCategory:(id)arg1;
- (void)setFirmwareVersion:(id)arg1;
- (void)setManufacturerName:(id)arg1;
- (void)setModelName:(id)arg1;
- (void)setProductData:(id)arg1;
- (unsigned int)vendorId;

@end
