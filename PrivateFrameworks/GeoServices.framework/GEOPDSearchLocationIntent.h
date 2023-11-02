
@interface GEOPDSearchLocationIntent : PBCodable <NSCopying> {
    GEOLatLng * _center;
    GEOMapRegion * _displayMapRegion;
    double  _distanceInKm;
    struct { 
        unsigned int has_distanceInKm : 1; 
        unsigned int has_venueId : 1; 
        unsigned int has_locationType : 1; 
        unsigned int has_isDerivedFromGeoIntent : 1; 
        unsigned int has_isDerivedFromPoiIntent : 1; 
        unsigned int read_center : 1; 
        unsigned int read_displayMapRegion : 1; 
        unsigned int read_mapRegion : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    bool  _isDerivedFromGeoIntent;
    bool  _isDerivedFromPoiIntent;
    int  _locationType;
    GEOMapRegion * _mapRegion;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    unsigned long long  _venueId;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
