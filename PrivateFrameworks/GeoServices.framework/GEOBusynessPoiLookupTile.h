
@interface GEOBusynessPoiLookupTile : PBCodable <NSCopying> {
    struct { 
        unsigned int has_offsetId : 1; 
        unsigned int read_latitudeE7s : 1; 
        unsigned int read_longitudeE7s : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _latitudeE7s;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _longitudeE7s;
    unsigned int  _offsetId;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
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
