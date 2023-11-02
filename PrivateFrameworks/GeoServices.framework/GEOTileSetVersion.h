
@interface GEOTileSetVersion : PBCodable <NSCopying> {
    struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } * _availableTiles;
    unsigned long long  _availableTilesCount;
    unsigned long long  _availableTilesSpace;
    struct { 
        unsigned int has_supportedLanguagesVersion : 1; 
        unsigned int has_timeToLiveSeconds : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_availableTiles : 1; 
        unsigned int read_genericTiles : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    struct GEOGenericTile { unsigned int x1; unsigned int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; } * _genericTiles;
    unsigned long long  _genericTilesCount;
    unsigned long long  _genericTilesSpace;
    unsigned int  _identifier;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    unsigned int  _supportedLanguagesVersion;
    unsigned int  _timeToLiveSeconds;
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
