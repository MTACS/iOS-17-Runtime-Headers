
@interface GEOURLItem : PBCodable <NSCopying> {
    bool  _currentLocation;
    struct { 
        unsigned int has_currentLocation : 1; 
        unsigned int read_mapItemStorage : 1; 
        unsigned int read_place : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOMapItemStorage * _mapItemStorage;
    GEOPlace * _place;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
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
- (id)mapItem;
- (bool)readFrom:(id)arg1;
- (void)setMapItem:(id)arg1;
- (void)writeTo:(id)arg1;

@end
