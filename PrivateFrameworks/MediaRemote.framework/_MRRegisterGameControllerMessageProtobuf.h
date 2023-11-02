
@interface _MRRegisterGameControllerMessageProtobuf : PBCodable <NSCopying> {
    _MRGameControllerPropertiesProtobuf * _properties;
}

@property (nonatomic, readonly) bool hasProperties;
@property (nonatomic, retain) _MRGameControllerPropertiesProtobuf *properties;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasProperties;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)properties;
- (bool)readFrom:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)writeTo:(id)arg1;

@end
