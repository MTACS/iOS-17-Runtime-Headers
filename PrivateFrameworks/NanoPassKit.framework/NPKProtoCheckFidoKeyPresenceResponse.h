
@interface NPKProtoCheckFidoKeyPresenceResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int keyExists : 1; 
    }  _has;
    bool  _keyExists;
}

@property (nonatomic) bool hasKeyExists;
@property (nonatomic) bool keyExists;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasKeyExists;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)keyExists;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasKeyExists:(bool)arg1;
- (void)setKeyExists:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
