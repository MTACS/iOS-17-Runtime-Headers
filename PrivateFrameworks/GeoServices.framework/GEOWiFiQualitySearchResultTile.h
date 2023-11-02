
@interface GEOWiFiQualitySearchResultTile : PBCodable <NSCopying> {
    NSMutableArray * _ess;
    NSString * _etag;
    struct { 
        unsigned int has_tileKey : 1; 
        unsigned int read_ess : 1; 
        unsigned int read_etag : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    unsigned long long  _tileKey;
}

@property (nonatomic, retain) NSMutableArray *ess;
@property (nonatomic, retain) NSString *etag;
@property (nonatomic, readonly) bool hasEtag;
@property (nonatomic) bool hasTileKey;
@property (nonatomic) unsigned long long tileKey;

+ (Class)essType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addEss:(id)arg1;
- (void)clearEss;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)ess;
- (id)essAtIndex:(unsigned long long)arg1;
- (unsigned long long)essCount;
- (id)etag;
- (bool)hasEtag;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasTileKey;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEss:(id)arg1;
- (void)setEtag:(id)arg1;
- (void)setHasTileKey:(bool)arg1;
- (void)setTileKey:(unsigned long long)arg1;
- (unsigned long long)tileKey;
- (void)writeTo:(id)arg1;

@end
