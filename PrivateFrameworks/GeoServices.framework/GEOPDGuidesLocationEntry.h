
@interface GEOPDGuidesLocationEntry : PBCodable <NSCopying> {
    GEOLatLng * _center;
    struct { 
        unsigned int has_numGuides : 1; 
        unsigned int has_type : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_geoIdCandidates : 1; 
        unsigned int read_center : 1; 
        unsigned int read_mapRegion : 1; 
        unsigned int read_placeId : 1; 
        unsigned int read_worldwide : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _geoIdCandidates;
    GEOMapRegion * _mapRegion;
    unsigned int  _numGuides;
    GEOPDMapsIdentifier * _placeId;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _type;
    PBUnknownFields * _unknownFields;
    GEOPDGuidesLocationEntryTypeWorldWide * _worldwide;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
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
