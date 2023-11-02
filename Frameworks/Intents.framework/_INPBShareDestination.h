
@interface _INPBShareDestination : PBCodable <NSCopying, NSSecureCoding, _INPBShareDestination> {
    _INPBContact * _contact;
    int  _deviceType;
    struct { 
        unsigned int deviceType : 1; 
    }  _has;
}

@property (nonatomic, retain) _INPBContact *contact;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int deviceType;
@property (nonatomic, readonly) bool hasContact;
@property (nonatomic) bool hasDeviceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsDeviceType:(id)arg1;
- (id)contact;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)deviceType;
- (id)deviceTypeAsString:(int)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasContact;
- (bool)hasDeviceType;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setDeviceType:(int)arg1;
- (void)setHasDeviceType:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
