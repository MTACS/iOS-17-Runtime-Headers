
@interface GEOPDSearchLocationScope : PBCodable <NSCopying> {
    GEOLatLng * _center;
    double  _displayRegionLimitKm;
    struct { 
        unsigned int has_displayRegionLimitKm : 1; 
        unsigned int has_scopeDistanceLimitKm : 1; 
        unsigned int has_locationScopeType : 1; 
        unsigned int has_scopeDistanceType : 1; 
        unsigned int has_winDistanceKmMean : 1; 
        unsigned int has_winDistanceKmP50 : 1; 
        unsigned int has_winDistanceKmP80 : 1; 
        unsigned int has_winDistanceKmP90 : 1; 
        unsigned int has_winDistanceKmP95 : 1; 
        unsigned int has_winDistanceKmP99 : 1; 
        unsigned int has_hasBelowStreetGeo : 1; 
        unsigned int has_isBlendingScope : 1; 
        unsigned int has_isMixedIntent : 1; 
        unsigned int read_center : 1; 
        unsigned int read_mapRegion : 1; 
        unsigned int read_multiMapRegion : 1; 
        unsigned int read_winDistanceGeohash4 : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    bool  _hasBelowStreetGeo;
    bool  _isBlendingScope;
    bool  _isMixedIntent;
    int  _locationScopeType;
    GEOMapRegion * _mapRegion;
    GEOPDSearchMultiMapRegion * _multiMapRegion;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    double  _scopeDistanceLimitKm;
    int  _scopeDistanceType;
    NSString * _winDistanceGeohash4;
    float  _winDistanceKmMean;
    float  _winDistanceKmP50;
    float  _winDistanceKmP80;
    float  _winDistanceKmP90;
    float  _winDistanceKmP95;
    float  _winDistanceKmP99;
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
