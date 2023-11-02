
@interface WiFiAnalyticsAWDWAAssociatedAPInfo : PBCodable <NSCopying> {
    NSString * _deviceNameData;
    NSString * _deviceNameElement;
    NSString * _manufacturerElement;
    NSString * _modelName;
    NSString * _modelNumber;
}

@property (nonatomic, retain) NSString *deviceNameData;
@property (nonatomic, retain) NSString *deviceNameElement;
@property (nonatomic, readonly) bool hasDeviceNameData;
@property (nonatomic, readonly) bool hasDeviceNameElement;
@property (nonatomic, readonly) bool hasManufacturerElement;
@property (nonatomic, readonly) bool hasModelName;
@property (nonatomic, readonly) bool hasModelNumber;
@property (nonatomic, retain) NSString *manufacturerElement;
@property (nonatomic, retain) NSString *modelName;
@property (nonatomic, retain) NSString *modelNumber;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceNameData;
- (id)deviceNameElement;
- (id)dictionaryRepresentation;
- (bool)hasDeviceNameData;
- (bool)hasDeviceNameElement;
- (bool)hasManufacturerElement;
- (bool)hasModelName;
- (bool)hasModelNumber;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)manufacturerElement;
- (void)mergeFrom:(id)arg1;
- (id)modelName;
- (id)modelNumber;
- (bool)readFrom:(id)arg1;
- (void)setDeviceNameData:(id)arg1;
- (void)setDeviceNameElement:(id)arg1;
- (void)setManufacturerElement:(id)arg1;
- (void)setModelName:(id)arg1;
- (void)setModelNumber:(id)arg1;
- (void)writeTo:(id)arg1;

@end
