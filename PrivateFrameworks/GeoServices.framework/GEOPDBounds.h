
@interface GEOPDBounds : PBCodable <NSCopying> {
    GEOMapRegion * _displayMapRegion;
    struct { 
        unsigned int has_maxZoom : 1; 
        unsigned int has_minZoom : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_displayMapRegion : 1; 
        unsigned int read_mapRegion : 1; 
        unsigned int read_viewportFrame : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOMapRegion * _mapRegion;
    float  _maxZoom;
    float  _minZoom;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
    GEOPDViewportFrame * _viewportFrame;
}

+ (id)boundsInfoForPlaceData:(id)arg1;

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
