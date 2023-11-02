
@interface GEOPDFactoidReference : PBCodable <NSCopying> {
    unsigned int  _factoidItemIndex;
    struct { 
        unsigned int has_factoidItemIndex : 1; 
        unsigned int has_style : 1; 
    }  _flags;
    int  _style;
    PBUnknownFields * _unknownFields;
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
