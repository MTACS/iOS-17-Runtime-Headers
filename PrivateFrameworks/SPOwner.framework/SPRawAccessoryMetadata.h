
@interface SPRawAccessoryMetadata : NSObject <NSCopying, NSSecureCoding> {
    NSData * _accessoryCapabilities;
    NSData * _accessoryCategory;
    NSData * _batteryLevel;
    NSData * _batteryType;
    NSData * _findMyVersion;
    NSData * _firmwareVersion;
    NSData * _manufacturerName;
    NSData * _modelName;
    NSData * _productData;
    NSData * _reserved;
}

@property (nonatomic, copy) NSData *accessoryCapabilities;
@property (nonatomic, copy) NSData *accessoryCategory;
@property (nonatomic, copy) NSData *batteryLevel;
@property (nonatomic, copy) NSData *batteryType;
@property (nonatomic, copy) NSData *findMyVersion;
@property (nonatomic, copy) NSData *firmwareVersion;
@property (nonatomic, copy) NSData *manufacturerName;
@property (nonatomic, copy) NSData *modelName;
@property (nonatomic, copy) NSData *productData;
@property (nonatomic, copy) NSData *reserved;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessoryCapabilities;
- (id)accessoryCategory;
- (id)batteryLevel;
- (id)batteryType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)findMyVersion;
- (id)firmwareVersion;
- (id)initWithCoder:(id)arg1;
- (id)manufacturerName;
- (id)modelName;
- (id)productData;
- (id)reserved;
- (void)setAccessoryCapabilities:(id)arg1;
- (void)setAccessoryCategory:(id)arg1;
- (void)setBatteryLevel:(id)arg1;
- (void)setBatteryType:(id)arg1;
- (void)setFindMyVersion:(id)arg1;
- (void)setFirmwareVersion:(id)arg1;
- (void)setManufacturerName:(id)arg1;
- (void)setModelName:(id)arg1;
- (void)setProductData:(id)arg1;
- (void)setReserved:(id)arg1;

@end
