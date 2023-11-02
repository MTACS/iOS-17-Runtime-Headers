
@interface GEOPDPlaceInfo : PBCodable <NSCopying> {
    double  _area;
    GEOPDBasemapRegionMetadata * _basemapRegionMetadata;
    GEOLatLng * _center;
    GEOLatLng * _enhancedCenter;
    struct { 
        unsigned int has_area : 1; 
        unsigned int has_knownAccuracy : 1; 
        unsigned int has_isApproximateCenter : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_basemapRegionMetadata : 1; 
        unsigned int read_center : 1; 
        unsigned int read_enhancedCenter : 1; 
        unsigned int read_labelPoint : 1; 
        unsigned int read_timezone : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    bool  _isApproximateCenter;
    int  _knownAccuracy;
    GEOLatLng * _labelPoint;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOTimezone * _timezone;
    PBUnknownFields * _unknownFields;
}

+ (id)placeInfoForPlaceData:(id)arg1;

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
