
@interface _MRGameControllerPropertiesMessageProtobuf : PBCodable <NSCopying> {
    unsigned long long  _controllerID;
    struct { 
        unsigned int controllerID : 1; 
    }  _has;
    _MRGameControllerPropertiesProtobuf * _properties;
}

@property (nonatomic) unsigned long long controllerID;
@property (nonatomic) bool hasControllerID;
@property (nonatomic, readonly) bool hasProperties;
@property (nonatomic, retain) _MRGameControllerPropertiesProtobuf *properties;

- (void).cxx_destruct;
- (unsigned long long)controllerID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasControllerID;
- (bool)hasProperties;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)properties;
- (bool)readFrom:(id)arg1;
- (void)setControllerID:(unsigned long long)arg1;
- (void)setHasControllerID:(bool)arg1;
- (void)setProperties:(id)arg1;
- (void)writeTo:(id)arg1;

@end
