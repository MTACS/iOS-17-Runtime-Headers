
@interface PKProtobufRemoteRegistrationRequestResult : PBCodable <NSCopying> {
    struct { 
        unsigned int result : 1; 
    }  _has;
    unsigned int  _result;
    unsigned int  _version;
}

@property (nonatomic) bool hasResult;
@property (nonatomic) unsigned int result;
@property (nonatomic) unsigned int version;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasResult;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)result;
- (void)setHasResult:(bool)arg1;
- (void)setResult:(unsigned int)arg1;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)version;
- (void)writeTo:(id)arg1;

@end
