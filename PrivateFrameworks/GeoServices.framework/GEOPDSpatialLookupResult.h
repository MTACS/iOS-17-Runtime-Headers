
@interface GEOPDSpatialLookupResult : PBCodable <NSCopying> {
    GEOPDBounds * _bounds;
    GEOLatLng * _center;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_mappedCategorys : 1; 
        unsigned int read_bounds : 1; 
        unsigned int read_center : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _mappedCategorys;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

+ (id)spatialLookupResultForPlaceData:(id)arg1;

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
