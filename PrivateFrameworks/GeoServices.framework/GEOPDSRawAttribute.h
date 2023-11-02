
@interface GEOPDSRawAttribute : PBCodable <NSCopying> {
    unsigned int  _beginIndex;
    unsigned int  _endIndex;
    struct { 
        unsigned int has_beginIndex : 1; 
        unsigned int has_endIndex : 1; 
    }  _flags;
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
