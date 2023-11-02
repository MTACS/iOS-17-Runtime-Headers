
@interface _DKPRMetadataEntry : PBCodable <NSCopying> {
    struct { 
        unsigned int index : 1; 
    }  _has;
    unsigned int  _index;
    NSString * _key;
    _DKPRValue * _value;
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
