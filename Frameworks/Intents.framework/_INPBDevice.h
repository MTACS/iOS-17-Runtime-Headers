
@interface _INPBDevice : PBCodable <NSCopying, NSSecureCoding, _INPBDevice> {
    int  _deviceCategory;
    NSString * _deviceModel;
    NSString * _deviceName;
    struct { 
        unsigned int deviceCategory : 1; 
    }  _has;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int deviceCategory;
@property (nonatomic, copy) NSString *deviceModel;
@property (nonatomic, copy) NSString *deviceName;
@property (nonatomic) bool hasDeviceCategory;
@property (nonatomic, readonly) bool hasDeviceModel;
@property (nonatomic, readonly) bool hasDeviceName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsDeviceCategory:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)deviceCategory;
- (id)deviceCategoryAsString:(int)arg1;
- (id)deviceModel;
- (id)deviceName;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasDeviceCategory;
- (bool)hasDeviceModel;
- (bool)hasDeviceName;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDeviceCategory:(int)arg1;
- (void)setDeviceModel:(id)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setHasDeviceCategory:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
