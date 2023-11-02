
@interface GEOPDSpatialEventLookupParameters : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _categoryFilters;
    GEOLatLng * _center;
    int  _count;
    struct { 
        unsigned int has_timeRange : 1; 
        unsigned int has_count : 1; 
        unsigned int has_radius : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_categoryFilters : 1; 
        unsigned int read_center : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    int  _radius;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    struct GEOPDTimeRange { 
        unsigned int _duration; 
        unsigned int _startTime; 
        struct { 
            unsigned int duration : 1; 
            unsigned int startTime : 1; 
        } _has; 
    }  _timeRange;
    PBUnknownFields * _unknownFields;
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
