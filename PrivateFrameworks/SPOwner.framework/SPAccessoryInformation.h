
@interface SPAccessoryInformation : NSObject <NSCopying, NSSecureCoding> {
    unsigned int  _accessoryCapabilities;
    unsigned long long  _accessoryCategory;
    unsigned char  _batteryState;
    unsigned char  _batteryType;
    NSString * _firmwareVersion;
    NSString * _manufacturerName;
    NSString * _modelName;
    NSData * _productData;
    NSString * _protocolVersion;
}

@property (nonatomic) unsigned int accessoryCapabilities;
@property (nonatomic) unsigned long long accessoryCategory;
@property (nonatomic) unsigned char batteryState;
@property (nonatomic) unsigned char batteryType;
@property (nonatomic, copy) NSString *firmwareVersion;
@property (nonatomic, copy) NSString *manufacturerName;
@property (nonatomic, copy) NSString *modelName;
@property (nonatomic, copy) NSData *productData;
@property (nonatomic, copy) NSString *protocolVersion;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned int)accessoryCapabilities;
- (unsigned long long)accessoryCategory;
- (unsigned char)batteryState;
- (unsigned char)batteryType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)firmwareVersion;
- (id)initWithCoder:(id)arg1;
- (id)initWithProductData:(id)arg1 manufacturerName:(id)arg2 modelName:(id)arg3 firmwareVersion:(id)arg4 protocolVersion:(id)arg5 accessoryCategory:(unsigned long long)arg6 accessoryCapabilities:(unsigned int)arg7 batteryType:(unsigned char)arg8 batteryState:(unsigned char)arg9;
- (id)manufacturerName;
- (id)modelName;
- (id)productData;
- (id)protocolVersion;
- (void)setAccessoryCapabilities:(unsigned int)arg1;
- (void)setAccessoryCategory:(unsigned long long)arg1;
- (void)setBatteryState:(unsigned char)arg1;
- (void)setBatteryType:(unsigned char)arg1;
- (void)setFirmwareVersion:(id)arg1;
- (void)setManufacturerName:(id)arg1;
- (void)setModelName:(id)arg1;
- (void)setProductData:(id)arg1;
- (void)setProtocolVersion:(id)arg1;

@end
