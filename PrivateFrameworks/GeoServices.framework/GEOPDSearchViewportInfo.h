
@interface GEOPDSearchViewportInfo : PBCodable <NSCopying> {
    struct { 
        unsigned int has_mapType : 1; 
        unsigned int has_timeSinceMapViewportChanged : 1; 
    }  _flags;
    GEOMapRegion * _mapRegion;
    int  _mapType;
    unsigned int  _timeSinceMapViewportChanged;
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
