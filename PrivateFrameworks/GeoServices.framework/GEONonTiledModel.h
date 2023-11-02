
@interface GEONonTiledModel : PBCodable <NSCopying> {
    struct { 
        unsigned int read_info : 1; 
        unsigned int read_materialMaps : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEONonTiledInfo * _info;
    NSMutableArray * _materialMaps;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
}

@property (nonatomic, readonly) bool hasInfo;
@property (nonatomic, retain) GEONonTiledInfo *info;
@property (nonatomic, retain) NSMutableArray *materialMaps;

+ (bool)isValid:(id)arg1;
+ (Class)materialMapType;

- (void).cxx_destruct;
- (void)addMaterialMap:(id)arg1;
- (void)clearMaterialMaps;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasInfo;
- (unsigned long long)hash;
- (id)info;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)materialMapAtIndex:(unsigned long long)arg1;
- (id)materialMaps;
- (unsigned long long)materialMapsCount;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setInfo:(id)arg1;
- (void)setMaterialMaps:(id)arg1;
- (void)writeTo:(id)arg1;

@end
