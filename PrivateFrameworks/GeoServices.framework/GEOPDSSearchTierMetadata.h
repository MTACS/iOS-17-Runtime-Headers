
@interface GEOPDSSearchTierMetadata : PBCodable <NSCopying> {
    unsigned int  _endIndex;
    struct { 
        unsigned int has_endIndex : 1; 
        unsigned int has_startIndex : 1; 
        unsigned int has_tierType : 1; 
    }  _flags;
    unsigned int  _startIndex;
    int  _tierType;
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
