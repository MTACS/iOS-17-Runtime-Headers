
@interface AWDHomeKitVendorInformation : PBCodable <NSCopying> {
    NSString * _category;
    NSString * _firmwareVersion;
    NSString * _manufacturer;
    NSString * _model;
    NSString * _name;
    NSString * _productData;
}

@property (nonatomic, retain) NSString *category;
@property (nonatomic, retain) NSString *firmwareVersion;
@property (nonatomic, readonly) bool hasCategory;
@property (nonatomic, readonly) bool hasFirmwareVersion;
@property (nonatomic, readonly) bool hasManufacturer;
@property (nonatomic, readonly) bool hasModel;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic, readonly) bool hasProductData;
@property (nonatomic, retain) NSString *manufacturer;
@property (nonatomic, retain) NSString *model;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *productData;

- (void).cxx_destruct;
- (id)category;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)firmwareVersion;
- (bool)hasCategory;
- (bool)hasFirmwareVersion;
- (bool)hasManufacturer;
- (bool)hasModel;
- (bool)hasName;
- (bool)hasProductData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)manufacturer;
- (void)mergeFrom:(id)arg1;
- (id)model;
- (id)name;
- (id)productData;
- (bool)readFrom:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setFirmwareVersion:(id)arg1;
- (void)setManufacturer:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setProductData:(id)arg1;
- (void)writeTo:(id)arg1;

@end
