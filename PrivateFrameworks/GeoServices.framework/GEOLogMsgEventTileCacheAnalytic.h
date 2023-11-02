
@interface GEOLogMsgEventTileCacheAnalytic : PBCodable <NSCopying> {
    GEOCacheHit * _cacheHit;
    GEOCacheMiss * _cacheMiss;
    struct { 
        unsigned int read_cacheHit : 1; 
        unsigned int read_cacheMiss : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
}

@property (nonatomic, retain) GEOCacheHit *cacheHit;
@property (nonatomic, retain) GEOCacheMiss *cacheMiss;
@property (nonatomic, readonly) bool hasCacheHit;
@property (nonatomic, readonly) bool hasCacheMiss;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (id)cacheHit;
- (id)cacheMiss;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCacheHit;
- (bool)hasCacheMiss;
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
- (void)setCacheHit:(id)arg1;
- (void)setCacheMiss:(id)arg1;
- (void)writeTo:(id)arg1;

@end
