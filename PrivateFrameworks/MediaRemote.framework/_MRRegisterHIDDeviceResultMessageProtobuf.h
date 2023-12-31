
@interface _MRRegisterHIDDeviceResultMessageProtobuf : PBCodable <NSCopying> {
    unsigned int  _deviceIdentifier;
    unsigned int  _errorCode;
    struct { 
        unsigned int deviceIdentifier : 1; 
        unsigned int errorCode : 1; 
    }  _has;
}

@property (nonatomic) unsigned int deviceIdentifier;
@property (nonatomic) unsigned int errorCode;
@property (nonatomic) bool hasDeviceIdentifier;
@property (nonatomic) bool hasErrorCode;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned int)deviceIdentifier;
- (id)dictionaryRepresentation;
- (unsigned int)errorCode;
- (bool)hasDeviceIdentifier;
- (bool)hasErrorCode;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDeviceIdentifier:(unsigned int)arg1;
- (void)setErrorCode:(unsigned int)arg1;
- (void)setHasDeviceIdentifier:(bool)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
