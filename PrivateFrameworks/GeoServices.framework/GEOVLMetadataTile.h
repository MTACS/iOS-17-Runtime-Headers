
@interface GEOVLMetadataTile : PBCodable <NSCopying> {
    NSMutableArray * _builds;
    GEOTileCoordinate * _coord;
    struct { 
        unsigned int read_purposeDenylists : 1; 
        unsigned int read_builds : 1; 
        unsigned int read_coord : 1; 
        unsigned int read_precisions : 1; 
        unsigned int read_tiles : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _precisions;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _purposeDenylists;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _tiles;
}

@property (nonatomic, retain) NSMutableArray *builds;
@property (nonatomic, retain) GEOTileCoordinate *coord;
@property (nonatomic, readonly) bool hasCoord;
@property (nonatomic, retain) NSMutableArray *precisions;
@property (nonatomic, readonly) int*purposeDenylists;
@property (nonatomic, readonly) unsigned long long purposeDenylistsCount;
@property (nonatomic, retain) NSMutableArray *tiles;

+ (Class)buildType;
+ (bool)isValid:(id)arg1;
+ (Class)precisionType;
+ (Class)tileType;

- (void).cxx_destruct;
- (int)StringAsPurposeDenylists:(id)arg1;
- (void)addBuild:(id)arg1;
- (void)addPrecision:(id)arg1;
- (void)addPurposeDenylist:(int)arg1;
- (void)addTile:(id)arg1;
- (id)buildAtIndex:(unsigned long long)arg1;
- (id)builds;
- (unsigned long long)buildsCount;
- (void)clearBuilds;
- (void)clearPrecisions;
- (void)clearPurposeDenylists;
- (void)clearTiles;
- (id)coord;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCoord;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)precisionAtIndex:(unsigned long long)arg1;
- (id)precisions;
- (unsigned long long)precisionsCount;
- (int)purposeDenylistAtIndex:(unsigned long long)arg1;
- (int*)purposeDenylists;
- (id)purposeDenylistsAsString:(int)arg1;
- (unsigned long long)purposeDenylistsCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBuilds:(id)arg1;
- (void)setCoord:(id)arg1;
- (void)setPrecisions:(id)arg1;
- (void)setPurposeDenylists:(int*)arg1 count:(unsigned long long)arg2;
- (void)setTiles:(id)arg1;
- (id)tileAtIndex:(unsigned long long)arg1;
- (id)tiles;
- (unsigned long long)tilesCount;
- (void)writeTo:(id)arg1;

@end
