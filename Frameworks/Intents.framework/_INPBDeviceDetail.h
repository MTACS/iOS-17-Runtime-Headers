
@interface _INPBDeviceDetail : PBCodable <NSCopying, NSSecureCoding, _INPBDeviceDetail> {
    _INPBDataString * _category;
    int  _deviceClass;
    _INPBDataString * _deviceName;
    _INPBContact * _deviceOwner;
    struct { 
        unsigned int deviceClass : 1; 
    }  _has;
    NSString * _identifier;
    _INPBDataString * _productName;
}

@property (nonatomic, retain) _INPBDataString *category;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int deviceClass;
@property (nonatomic, retain) _INPBDataString *deviceName;
@property (nonatomic, retain) _INPBContact *deviceOwner;
@property (nonatomic, readonly) bool hasCategory;
@property (nonatomic) bool hasDeviceClass;
@property (nonatomic, readonly) bool hasDeviceName;
@property (nonatomic, readonly) bool hasDeviceOwner;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasProductName;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) _INPBDataString *productName;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsDeviceClass:(id)arg1;
- (id)category;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)deviceClass;
- (id)deviceClassAsString:(int)arg1;
- (id)deviceName;
- (id)deviceOwner;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasCategory;
- (bool)hasDeviceClass;
- (bool)hasDeviceName;
- (bool)hasDeviceOwner;
- (bool)hasIdentifier;
- (bool)hasProductName;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)productName;
- (bool)readFrom:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setDeviceClass:(int)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setDeviceOwner:(id)arg1;
- (void)setHasDeviceClass:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setProductName:(id)arg1;
- (void)writeTo:(id)arg1;

@end
