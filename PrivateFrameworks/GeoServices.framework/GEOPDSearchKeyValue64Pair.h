
@interface GEOPDSearchKeyValue64Pair : PBCodable <NSCopying> {
    struct { 
        unsigned int has_value : 1; 
    }  _flags;
    NSString * _key;
    unsigned long long  _value;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
