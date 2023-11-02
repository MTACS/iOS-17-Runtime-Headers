
@interface GEORegionalResource : PBCodable <NSCopying> {
    NSMutableArray * _attributions;
    struct { 
        unsigned int has_x : 1; 
        unsigned int has_y : 1; 
        unsigned int has_z : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_tileRanges : 1; 
        unsigned int read_attributions : 1; 
        unsigned int read_iconChecksums : 1; 
        unsigned int read_icons : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _iconChecksums;
    NSMutableArray * _icons;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } * _tileRanges;
    unsigned long long  _tileRangesCount;
    unsigned long long  _tileRangesSpace;
    PBUnknownFields * _unknownFields;
    unsigned int  _x;
    unsigned int  _y;
    unsigned int  _z;
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
