
@interface _MPCProtoItem : PBCodable <NSCopying> {
    bool  _excludeFromShuffle;
    struct { 
        unsigned int mediaType : 1; 
        unsigned int excludeFromShuffle : 1; 
    }  _has;
    _MPCProtoItemIdentifierSet * _identifierSet;
    int  _mediaType;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
