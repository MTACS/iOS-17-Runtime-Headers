
@interface GEOCoarseLocationPolygon : PBCodable <NSCopying> {
    struct { 
        unsigned int read_holes : 1; 
        unsigned int read_shell : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _holes;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOCoarseLocationRing * _shell;
}

@property (nonatomic, readonly) bool hasShell;
@property (nonatomic, retain) NSMutableArray *holes;
@property (nonatomic, retain) GEOCoarseLocationRing *shell;

+ (Class)holesType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addHoles:(id)arg1;
- (void)clearHoles;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasShell;
- (unsigned long long)hash;
- (id)holes;
- (id)holesAtIndex:(unsigned long long)arg1;
- (unsigned long long)holesCount;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHoles:(id)arg1;
- (void)setShell:(id)arg1;
- (id)shell;
- (void)writeTo:(id)arg1;

@end
