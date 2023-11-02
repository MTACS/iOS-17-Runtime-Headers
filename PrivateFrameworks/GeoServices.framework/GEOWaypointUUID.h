
@interface GEOWaypointUUID : PBCodable <NSCopying> {
    struct { 
        unsigned int has_high : 1; 
        unsigned int has_low : 1; 
    }  _flags;
    unsigned long long  _high;
    unsigned long long  _low;
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
