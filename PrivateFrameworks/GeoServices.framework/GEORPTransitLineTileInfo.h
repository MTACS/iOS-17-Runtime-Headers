
@interface GEORPTransitLineTileInfo : PBCodable <NSCopying> {
    struct { 
        unsigned int has_transitLineMuid : 1; 
        unsigned int read_transitLineName : 1; 
        unsigned int read_transitSystemName : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    unsigned long long  _transitLineMuid;
    NSString * _transitLineName;
    NSString * _transitSystemName;
}

@property (nonatomic) bool hasTransitLineMuid;
@property (nonatomic, readonly) bool hasTransitLineName;
@property (nonatomic, readonly) bool hasTransitSystemName;
@property (nonatomic) unsigned long long transitLineMuid;
@property (nonatomic, retain) NSString *transitLineName;
@property (nonatomic, retain) NSString *transitSystemName;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTransitLineMuid;
- (bool)hasTransitLineName;
- (bool)hasTransitSystemName;
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
- (void)setHasTransitLineMuid:(bool)arg1;
- (void)setTransitLineMuid:(unsigned long long)arg1;
- (void)setTransitLineName:(id)arg1;
- (void)setTransitSystemName:(id)arg1;
- (unsigned long long)transitLineMuid;
- (id)transitLineName;
- (id)transitSystemName;
- (void)writeTo:(id)arg1;

@end
