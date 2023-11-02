
@interface GEOWiFiQualityLocationSearchResult : PBCodable <NSCopying> {
    NSMutableArray * _ess;
    struct { 
        unsigned int has_tileKey : 1; 
        unsigned int has_status : 1; 
        unsigned int read_ess : 1; 
        unsigned int read_location : 1; 
        unsigned int read_tiles : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOLocation * _location;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _status;
    unsigned long long  _tileKey;
    NSMutableArray * _tiles;
}

@property (nonatomic, retain) NSMutableArray *ess;
@property (nonatomic, readonly) bool hasLocation;
@property (nonatomic) bool hasStatus;
@property (nonatomic) bool hasTileKey;
@property (nonatomic, retain) GEOLocation *location;
@property (nonatomic) int status;
@property (nonatomic) unsigned long long tileKey;
@property (nonatomic, retain) NSMutableArray *tiles;

+ (Class)essType;
+ (bool)isValid:(id)arg1;
+ (Class)tileType;

- (void).cxx_destruct;
- (int)StringAsStatus:(id)arg1;
- (void)addEss:(id)arg1;
- (void)addTile:(id)arg1;
- (void)clearEss;
- (void)clearSensitiveFields:(unsigned long long)arg1;
- (void)clearTiles;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)ess;
- (id)essAtIndex:(unsigned long long)arg1;
- (unsigned long long)essCount;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasLocation;
- (bool)hasStatus;
- (bool)hasTileKey;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)location;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEss:(id)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setHasTileKey:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setStatus:(int)arg1;
- (void)setTileKey:(unsigned long long)arg1;
- (void)setTiles:(id)arg1;
- (int)status;
- (id)statusAsString:(int)arg1;
- (id)tileAtIndex:(unsigned long long)arg1;
- (unsigned long long)tileKey;
- (id)tiles;
- (unsigned long long)tilesCount;
- (void)writeTo:(id)arg1;

@end
