
@interface GEOPDSearchEntry : PBCodable <NSCopying> {
    GEOLatLng * _center;
    struct { 
        unsigned int has_geoId : 1; 
        unsigned int has_geoTypeId : 1; 
    }  _flags;
    long long  _geoId;
    int  _geoTypeId;
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
