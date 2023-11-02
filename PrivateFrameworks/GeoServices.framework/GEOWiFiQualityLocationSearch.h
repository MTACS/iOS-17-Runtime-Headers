
@interface GEOWiFiQualityLocationSearch : PBCodable <NSCopying> {
    struct { 
        unsigned int has_radius : 1; 
        unsigned int read_location : 1; 
        unsigned int read_tiles : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOLocation * _location;
    unsigned long long  _radius;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _tiles;
}

@property (nonatomic, readonly) bool hasLocation;
@property (nonatomic) bool hasRadius;
@property (nonatomic, retain) GEOLocation *location;
@property (nonatomic) unsigned long long radius;
@property (nonatomic, retain) NSMutableArray *tiles;

+ (bool)isValid:(id)arg1;
+ (Class)tilesType;

- (void).cxx_destruct;
- (void)addTiles:(id)arg1;
- (void)clearSensitiveFields:(unsigned long long)arg1;
- (void)clearTiles;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasLocation;
- (bool)hasRadius;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)location;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)radius;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasRadius:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setRadius:(unsigned long long)arg1;
- (void)setTiles:(id)arg1;
- (id)tiles;
- (id)tilesAtIndex:(unsigned long long)arg1;
- (unsigned long long)tilesCount;
- (void)writeTo:(id)arg1;

@end
