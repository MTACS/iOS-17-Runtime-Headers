
@interface GEOPDVenueLevel : PBCodable <NSCopying> {
    struct { 
        unsigned int has_levelId : 1; 
        unsigned int has_ordinal : 1; 
    }  _flags;
    GEOPDVenueLabel * _label;
    unsigned long long  _levelId;
    int  _ordinal;
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
